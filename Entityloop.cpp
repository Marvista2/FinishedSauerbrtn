#include "Global.h"


void Init::Entity(EntityManagement Ent)
{
    
    
        


        // entity template requires only entity list address ect so on yakub


        for (Ent.PointerAdd; Ent.PointerAdd < Ent.StopAt; Ent.PointerAdd += 0x10)
        {
            

            if (true == info::NoPointerLayer(Ent))
            {
                if (true == Gl::MainFilter(Ent))
                {
                   
                   if (GetKeyState(VK_RBUTTON) < 0)
                    {

                         gmt::GetMatrix(Ent);
                           
                        


                    }
                }

             
            }
          

               
            
        }
        
       

        Sleep(10);

        
       
}

