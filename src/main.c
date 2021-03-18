/*
Before compiling please read these directions / Do's & Dont's
This program series was made by QuillPlayzYT
This program is also very self explained
### A little about me ###
My Name is Nicholas
I am new to C
    -   IF YOU PLAN ON ADDING ON PLEASE PLEASE GIVE ME THE PROPER CREDIT
### Version History ###
    -   No Reviewable Version History could be found
*/
#include <tice.h>
#include <graphx.h>
#include <keypadc.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <fileioc.h>
#include "gfx/gfx.h"
// All of these files with gfx/ are included in the "gfx" folder
//#include "gfx/treetibr.h"
//#include "gfx/treetibr.c"
//#include "gfx/PlayerAvatar.h"
//#include "gfx/PlayerAvatar.c"

void main()
{
    uint8_t screen = 1;
    int playerx = 20;
    int playery = 20;
    int randtreex = randInt(0,320);
    int randtreey = randInt(0,240);
    const arrowkey = kb_Data[7];
    int menuid = 0;
    bool allowkeypress = true;
    gfx_Begin();
    gfx_SetDrawBuffer();
        do {
            kb_Scan;

            if (screen == 1) {
            gfx_SetTextFGColor(228);
            gfx_Sprite_NoClip(PlayerAvatar,playerx,playery);
            gfx_Sprite_NoClip(treetibr,randtreex,randtreey);


                if (kb_Data[7] & kb_Left)
                {
                    playerx--;
                }
                if (kb_Data[7] & kb_Right)
                {
                    playerx++;
                }
                if (kb_Data[7] & kb_Up)
                {
                    playery--;
                }
                if (kb_Data[7] & kb_Down)
                {
                    playery++;
                }

                if (kb_Data[6] & kb_Clear)
                {
                    screen = 2;
                    menuid = 1;
                }
            }
                    gfx_SetTextXY(0,0);
                    gfx_PrintInt(playerx,1);
                    gfx_SetTextXY(45,0);
                    gfx_PrintInt(playery,1);

                if (screen == 2)
                {
                    gfx_FillScreen(32);
                    gfx_SetColor(245);
                    gfx_FillRectangle_NoClip(320/2-45,240/2-20,100,100);
                    gfx_SetColor(254);
                    gfx_FillRectangle_NoClip(130,100,80,10);
                    gfx_SetTextFGColor(24);
                    gfx_PrintStringXY("Resume TIBR",131,101);
                    gfx_FillRectangle_NoClip(130,120,80,10);
                    gfx_PrintStringXY("Settings - Coming Soon",131,121);
                    gfx_FillRectangle_NoClip(130,140,80,10);
                    gfx_PrintStringXY("Press Clear to Quit TIBR",131,141);
                    gfx_SetColor(254);
                    gfx_Circle(100,105,10);
                    gfx_Circle(100,125,10);
                    gfx_SetTextXY(0,0);
                    gfx_PrintInt(playerx,1);
                    gfx_SetTextXY(45,0);
                    gfx_PrintInt(playery,1);
                    if (kb_Data[7] & kb_Down && menuid == 1)
                    {
                        menuid = 2;
                        gfx_SetColor(32);
                        gfx_FillCircle(100,100,10);
                    }
                    if (kb_Data[7] & kb_Up && menuid == 2)
                    {
                        menuid = 1;
                        gfx_SetColor(32);
                        gfx_FillCircle(100,120,10);
                    }

                    delay(160);
                    if (kb_Data[1] & kb_Mode)
                    {
                        screen = 99;
                    }
                    
                    if (kb_Data[6] & kb_Clear) 
                    {
                        gfx_FillScreen(0);
                        menuid = 1;
                        screen = 0;
                    }



                }
            gfx_SwapDraw();
            gfx_FillScreen(0);
        } while(screen != 99);
gfx_End();
}
