#include "Global.h"

EntityManagement ent;





























Cope Init::InitGlobal(Cope& ptrAdd, Cope& stopAt)
{
	

	ptrAdd = Init::Merge(ent.ModuleBase, ent.Address);
	stopAt = Init::Merge(ptrAdd, ent.Length);



	return 0;
}

