#pragma once





class EntityManagement
{
public:
    Cope Address = 0x336E50; // Universal Entity 
	Cope Length = 0x618;
    Cope PointerAdd;
    Cope StopAt;
    Cope ModuleBase = (Cope)GetModuleHandle(NULL);
};

class Ent_Target
{
public:
	class Player* Pointer;



};
class Player
{
public:
	float x; //0x0000
	float y; //0x0004
	float z; //0x0008
private:
	char pad_000C[36]; //0x000C
public:
	float Validate; //0x0030
private:
	float ValidateIDK; //0x0034
	char pad_0038[3]; //0x0038
}; //Size: 0x003B






