/* Version History and Notes and Credits
//Thanks to Alvajoy on cemetech for the new and furnished code of a alpha release
//This New Build was made with the TI Project Builder







*/

/*
 *--------------------------------------
 * Program Name:BATROYAL
 * Author: QuillPlayzyT
 * License: -
 * Description: Battle Royale for the TI 84 Plus CE
 *--------------------------------------
*/

#include <tice.h>
#include <graphx.h>
#include <keypadc.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
// Remove this line once in VS Code or preferred IDE Editor #include "stonebricktiletibr.c"
// Remove this line once in VS Code or preferred IDE Editor #include "stonebricktiletibr.h"
// Add below line once in VS Code : I had to remove for that way it could compile
// #include "gfx/gfx.h"

void signinscreen()
{
    bool signinstatus = true;



    gfx_Begin();
    gfx_SetDrawBuffer();

    do {
        for (uint24_t filltilex = 0; filltilex < 320; filltilex+=16)
        {
            for (uint8_t filltiley = 0; filltiley < 240; filltiley++)
            {
                gfx_Sprite(stonebricktiletibr,filltilex,filltiley);
            }
        }


        gfx_SetTextFGColor(228);
        gfx_PrintStringXY("Battle Royale",120,100);
        gfx_SetTextFGColor(187);
        gfx_PrintStringXY("Pre Release 1.0",116,110);
        gfx_SetTextFGColor(147);
        gfx_PrintStringXY("2nd To Login with your TIBR account ",40,120);

        if (signinstatus == 1) signinstatus = 2;

        if(kb_Data[1] & kb_2nd && signinstatus == 0)
        {
            gfx_SetTextFGColor(147);
            signinstatus = 1;
        }

        gfx_BlitBuffer();

    } while(!(kb_Data[6] & kb_Clear));

    gfx_End();
}
void thegame(void)
{
    bool allowgamekp = true;
    int playerx = 50;
    int playery = 50;
 do {
    
    if (allowgamekp)
            {
                kb_Scan();

                if (kb_Data[7] & kb_Up)   playery++;

                if (kb_Data[7] & kb_Down) playery--;

                if (kb_Data[7] & kb_Left) playerx--;

                if (kb_Data[7] & kb_Right) playerx++;
            }

 }
    
}
