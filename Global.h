#pragma once

#include <Windows.h>
#include <iostream>
#include "Structs4Matrix.h"
#include "AntiCrash.h"
#include "EntityClass.h"

#define Matrix1 0x32D040

namespace Init
{
    
    void Entity(EntityManagement Ent);
    bool IsPlayer();
    Cope InitGlobal(Cope& ptrAdd, Cope& stopAt);
    void GetOutput(std::string Terminos);
    Cope Merge(Cope a, Cope b);
    void GetConsole();
}

namespace Gl
{

    bool MainFilter(EntityManagement Ent);
    bool Basicfilter(Ent_Target* X);
    bool IsBadReadPtr(void* p);
    

}

namespace info
{
    bool GetGameinfo();
    bool NoPointerLayer(EntityManagement Ent);

}

namespace gmt
{

    bool GetMatrix(EntityManagement Ent);
    bool WorldToScreen(Position pos, Position& screen, float matrix[16], int windowWidth, int windowHeight);
    void GDIESP();
}



