#pragma once

// 공통
enum ENUM_BUFFER
{
	BUFFER_CHAR = 1024
};

// 패킷 타입 정의
enum ENUM_PACKET_TYPE
{
	PACKET_TYPE_LOGIN = 0,
	PACKET_TYPE_LOGOUT,
	PACKET_TYPE_REQUEST,
	PACKET_TYPE_ANSWER,
};