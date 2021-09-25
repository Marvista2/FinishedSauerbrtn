#pragma once
#define LocalPlayer14 0x2A5730
#define MaybeNeedLP1 0x2A3528 
// can come in handy? other pointers mhh.
#define MaybeNeedLP2 0x2A2560



class PointerLayer1
{
public:
	class PointerLayer2* Pointer;
	class PointerLayer3* Pointer2;

};


class PointerLayer3
{
public:
	
	class PointerLayer4* FakePtr;

};


class PointerLayer4
{
public:



};
class PointerLayer2
{
public:
	float N0000004F; //0x0000
	char pad_0004[4]; //0x0004
	float N00000050; //0x0008
	char pad_000C[4]; //0x000C
	double N00000051; //0x0010
	char pad_0018[24]; //0x0018
	float N00000059; //0x0030
	char pad_0034[4]; //0x0034
	float N0000005A; //0x0038
	char pad_003C[4]; //0x003C
	float N0000005B; //0x0040
	char pad_0044[4]; //0x0044
	float N0000005C; //0x0048
	char pad_004C[4]; //0x004C
	float N0000005D; //0x0050
	char pad_0054[4]; //0x0054
	float N0000005E; //0x0058
	char pad_005C[12]; //0x005C
	double N00000060; //0x0068
	char pad_0070[8]; //0x0070
	int32_t N00000062; //0x0078
	char pad_007C[4]; //0x007C
	float N00000063; //0x0080
	char pad_0084[4]; //0x0084
	float N00000064; //0x0088
	char pad_008C[4]; //0x008C
	float N00000065; //0x0090
	char pad_0094[4]; //0x0094
	int32_t N00000066; //0x0098
	char pad_009C[20]; //0x009C
	float N00000069; //0x00B0
	char pad_00B4[20]; //0x00B4
	int GTZ; //0x00C8
	char pad_00CC[884]; //0x00CC
}; //Size: 0x0440

















class PlayerHead
{
public:
	class LocalPlayer* LocalClassPtr; //0x0000
}; //Size: 0x0008

class LocalPlayer
{
public:
	float x; //0x0000
	float y; //0x0004
	float z; //0x0008
private:
	char pad_000C[4]; //0x000C
public:
	float N000000EC; //0x0010
	char pad_0014[28]; //0x0014
	float N000000EE; //0x0030
	char pad_0034[4]; //0x0034
	float N00000051; //0x0038
	char pad_003C[4]; //0x003C
	float N000000E9; //0x0040
	char pad_0044[4]; //0x0044
	float N00000105; //0x0048
	char pad_004C[4]; //0x004C
	float N00000057; //0x0050
private:
	char pad_0054[4]; //0x0054
	float N00000107; //0x0058
	char pad_005C[12]; //0x005C
	double N00000109; //0x0068
	char pad_0070[8]; //0x0070
	int32_t N0000010B; //0x0078
	char pad_007C[4]; //0x007C
	float N000000DB; //0x0080
	char pad_0084[4]; //0x0084
	float N0000010D; //0x0088
	char pad_008C[4]; //0x008C
	double N000000D9; //0x0090
	char pad_0098[24]; //0x0098
	float N000000E5; //0x00B0
	char pad_00B4[20]; //0x00B4
	float N0000005B; //0x00C8
	char pad_00CC[4]; //0x00CC
	int32_t N0000005C; //0x00D0
	char pad_00D4[4]; //0x00D4
	void* N0000005D; //0x00D8
	char pad_00E0[16]; //0x00E0
	float N00000060; //0x00F0
	char pad_00F4[20]; //0x00F4
	float N00000063; //0x0108
	char pad_010C[4]; //0x010C
	int32_t N00000064; //0x0110
	char pad_0114[4]; //0x0114
	void* N00000065; //0x0118
	char pad_0120[16]; //0x0120
	float N00000068; //0x0130
	char pad_0134[20]; //0x0134
	float N0000006B; //0x0148
	char pad_014C[4]; //0x014C
	int32_t N0000006C; //0x0150
	char pad_0154[4]; //0x0154
	void* N0000006D; //0x0158
	void* N0000006E; //0x0160
	char pad_0168[16]; //0x0168
public:
	int32_t HP; //0x0178
private:
	char pad_017C[36]; //0x017C
public:
	int64_t IngameMP; //0x01A0
	int64_t IngameSP; //0x01A8
private:
	int64_t Dontknow; //0x01B0
}; //Size: 0x01B8

