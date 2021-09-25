
#include "Global.h"
EntityManagement E_Ent;
Matrix* _Matrix;
Ent_Target * Target1;
Position _Pos;



bool gmt::GetMatrix(EntityManagement Ent)
{

           Target1 = (Ent_Target*)Ent.PointerAdd;
       

           

          

             _Pos = *(Position*)Target1->Pointer;
             _Matrix = (Matrix*)(E_Ent.ModuleBase + Matrix1);
             gmt::WorldToScreen(_Pos, _Pos, _Matrix->ProjectionMatrix, 1080, 1920);

             std::cout << _Pos.y << std::endl;

             if (_Pos.x < 550.f && _Pos.x > 530.f && _Pos.y > 759.f && _Pos.y < 987.f)
             {

                 mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                 Sleep(50);
                 mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

             }

         
            


        
             

         return true;
}





bool gmt::WorldToScreen(Position pos, Position &screen, float matrix[16], int windowWidth, int windowHeight)
{
    //Matrix-vector Product, multiplying world(eye) coordinates by projection matrix = clipCoords
    vec4 clipCoords;
    clipCoords.x = pos.x * matrix[0] + pos.y * matrix[4] + pos.z * matrix[8] + matrix[12];
    clipCoords.y = pos.x * matrix[1] + pos.y * matrix[5] + pos.z * matrix[9] + matrix[13];
    clipCoords.z = pos.x * matrix[2] + pos.y * matrix[6] + pos.z * matrix[10] + matrix[14];
    clipCoords.w = pos.x * matrix[3] + pos.y * matrix[7] + pos.z * matrix[11] + matrix[15];

    if (clipCoords.w < 0.1f)
        return false;

    //perspective division, dividing by clip.W = Normalized Device Coordinates
    Position NDC;
    NDC.x = clipCoords.x / clipCoords.w;
    NDC.y = clipCoords.y / clipCoords.w;
    NDC.z = clipCoords.z / clipCoords.w;

    //Transform to window coordinates
    screen.x = (windowWidth / 2 * NDC.x) + (NDC.x + windowWidth / 2);
    screen.y = -(windowHeight / 2 * NDC.y) + (NDC.y + windowHeight / 2);
    return true;
}

void gmt::GDIESP()
{

   


}