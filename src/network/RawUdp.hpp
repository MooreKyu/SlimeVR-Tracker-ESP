#pragma once

#include <concepts>
#include <cstddef>
#include <algorithm>
#include "lwip/udp.h"

template<typename T>
concept integral_or_floating = std::integral<T> || std::floating_point<T>;

template<std::size_t TX_BUF_SIZE>
struct RawUdp
{
	udp_pcb* m_udp;
	pbuf* m_pbuf;
	static inline std::byte m_buf[TX_BUF_SIZE];
	u16_t m_pos;

	constexpr RawUdp() noexcept = default;

	RawUdp(ip_addr_t* ip, u16_t port) noexcept :
		m_udp(udp_new()),
		m_pbuf(pbuf_alloc_reference(m_buf, sizeof(m_buf), PBUF_REF)),
		m_pos(0)
	{
		udp_bind(m_udp, IP_ADDR_ANY, port);
		udp_connect(m_udp, ip, port);
	}

	template<integral_or_floating T>
	void write(T i) noexcept
	{
		auto begin = reinterpret_cast<std::byte*>(&i);
		std::reverse_copy(begin, begin + sizeof(T), m_buf + m_pos);
		m_pos += sizeof(T);
	}

	void send() noexcept
	{
		udp_send(m_udp, m_pbuf);
		m_pos = 0;
	}
};
