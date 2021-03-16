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
                    if (kb_Data[7] & kb_Down && menuid == 1)
                    {
                        menuid = 2;
                    }
                    if (kb_Data[7] & kb_Up && menuid == 2)
                    {
                        menuid = 1;
                    }
                    
                    delay(160);
                    if (kb_Data[6] & kb_Clear)
                    {
                        screen = 99;
                    }
                
                
                
                
                }
            gfx_SwapDraw();
            gfx_FillScreen(0);
        } while(screen != 99);
gfx_End();
}
