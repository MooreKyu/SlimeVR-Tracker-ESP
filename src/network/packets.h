/*
	SlimeVR Code is placed under the MIT license
	Copyright (c) 2021 Eiren Rain

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.
*/

#ifndef SLIMEVR_PACKETS_H_
#define SLIMEVR_PACKETS_H_

#include <cstdint>

constexpr std::uint8_t PACKET_HEARTBEAT             = 0;
constexpr std::uint8_t PACKET_HANDSHAKE             = 3;
constexpr std::uint8_t PACKET_ACCEL                 = 4;
constexpr std::uint8_t PACKET_CONFIG                = 8;
constexpr std::uint8_t PACKET_PING_PONG             = 10;
constexpr std::uint8_t PACKET_SERIAL				= 11;
constexpr std::uint8_t PACKET_BATTERY_LEVEL         = 12;
constexpr std::uint8_t PACKET_TAP                   = 13;
constexpr std::uint8_t PACKET_ERROR                 = 14;
constexpr std::uint8_t PACKET_SENSOR_INFO           = 15;
constexpr std::uint8_t PACKET_ROTATION_DATA         = 17;
constexpr std::uint8_t PACKET_MAGNETOMETER_ACCURACY = 18;
constexpr std::uint8_t PACKET_SIGNAL_STRENGTH       = 19;
constexpr std::uint8_t PACKET_TEMPERATURE           = 20;
constexpr std::uint8_t PACKET_FEATURE_FLAGS         = 22;

constexpr std::uint8_t PACKET_BUNDLE = 100;

constexpr std::uint8_t PACKET_INSPECTION = 105;  // 0x69

constexpr std::uint8_t PACKET_RECEIVE_HEARTBEAT = 1;
constexpr std::uint8_t PACKET_RECEIVE_VIBRATE   = 2;
constexpr std::uint8_t PACKET_RECEIVE_HANDSHAKE = 3;
constexpr std::uint8_t PACKET_RECEIVE_COMMAND   = 4;

constexpr std::uint8_t PACKET_INSPECTION_PACKETTYPE_RAW_IMU_DATA    = 1;
constexpr std::uint8_t PACKET_INSPECTION_PACKETTYPE_FUSED_IMU_DATA  = 2;
constexpr std::uint8_t PACKET_INSPECTION_PACKETTYPE_CORRECTION_DATA = 3;

constexpr std::uint8_t PACKET_INSPECTION_DATATYPE_INT   = 1;
constexpr std::uint8_t PACKET_INSPECTION_DATATYPE_FLOAT = 2;

#endif  // SLIMEVR_PACKETS_H_
