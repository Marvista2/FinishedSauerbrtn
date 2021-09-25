// dllmain.cpp : Defines the entry point for the DLL application.
#include "Global.h"

// universal entity and matrix finder, great template

EntityManagement Ent1;

DWORD WINAPI HackThread(HMODULE hModule)
{
  

    

    Init::GetConsole();
  
    Init::InitGlobal(Ent1.PointerAdd, Ent1.StopAt);

    while (true)
    {

      
       

        if (true == info::GetGameinfo())
        {
            
            Init::Entity(Ent1);

            
        }
        Sleep(50);
       
      
          
          

        
        
       

       if (GetAsyncKeyState(VK_END) & 1)
       {
           Init::GetOutput("Terminos");
           break;
       }
       
    }
    
   

       

    return 0;
}










Cope Init::Merge(Cope a, Cope b)
{
    Cope result = a + b;
    return result;
}


void Init::GetConsole()
{

    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    std::cout << "universal ent 1.0 made by a black kid on adderall" << std::endl;
}

void Init::GetOutput(std::string output)
{
    std::cout << output << std::endl;

}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        HANDLE Thread = nullptr;

        Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hModule, 0, nullptr);
        if (Thread)
        {
            CloseHandle(Thread);
        }
        
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

