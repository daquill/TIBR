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


#include "treetibr.h"
#include "treetibr.c"
#include "PlayerAvatar.h"
#include "PlayerAvatar.c"

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


            }
                    gfx_SetTextXY(0,0);
                    gfx_PrintInt(playerx,1);
                    gfx_SetTextXY(45,0);
                    gfx_PrintInt(playery,1);

                if (screen == 2)
                {
                    
                    gfx_FillScreen(32);
                    gfx_SetColor(245);
                    gfx_FillRectangle_NoClip(100,120,180,100);
                    gfx_SetColor(254);
                    gfx_FillRectangle_NoClip(130,100,80,10);
                    gfx_SetTextFGColor(24);
                    gfx_PrintStringXY("2nd to Resume TIBR",161,101);
                    gfx_FillRectangle_NoClip(160,120,80,10);
                    gfx_PrintStringXY("Mode to change Settings",161,121);
                    gfx_FillRectangle_NoClip(160,140,80,10);
                    gfx_PrintStringXY("Press Del to Quit TIBR",131,141);
                    gfx_SetColor(254);
                    gfx_Circle(100,105,10);
                    gfx_Circle(100,125,10);

                    if (kb_Data[1] & kb_Del)
                    {
                        screen = 99;
                    }
                    delay(160);
                    if (kb_Data[6] & kb_Clear)
                    {
                        gfx_FillScreen(0);
                        screen = 1;

                    }
                    if (kb_Data[1] & kb_Mode)
                    {

                        menuid = 1;
                        screen = 3;



                    }
                }
            if (screen == 3)
            {
                gfx_SetColor(18);
                gfx_FillRectangle(0,0,90,240);
                gfx_FillRectangle(230,0,90,240);



            }
                if (kb_Data[6] & kb_Clear)
                {
                    screen = 2;
                }
            gfx_SwapDraw();
            gfx_FillScreen(0);
        } while(screen != 99);
gfx_End();
}
