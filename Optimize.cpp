#include "Global.h"
EntityManagement Opt;
PlayerHead* Player = (PlayerHead*)(LocalPlayer14 + Opt.ModuleBase);


bool info::GetGameinfo()
{
	if (Player->LocalClassPtr->IngameMP != 0 || Player->LocalClassPtr->IngameSP != 0)
	{

		
		return true;
	}


	
	return false;
}


bool info::NoPointerLayer(EntityManagement Ent)
{
	
	int* ptr = (int*)(Ent.PointerAdd);

	PointerLayer2* PointerTest = (PointerLayer2*)ptr;
  
	if (PointerTest != 0 & *ptr != 0)
	{
		

		if (PointerTest != 0)
		{
			

				return true;
			
		}


	}
	
	
	return false;
}