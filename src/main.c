/* Version History / Notes
Thanks to Alvajoy on cemetech for the new and furnished code of a alpha release
This New Build was made with the TI Project Builder
*/
/* Credits
KingDubDub for being a awesome friend and a great mentor
QuillPlayzYT for being a awesome owner
Zach (Ninjabob2220) 




*/
/*
 *--------------------------------------
 * Program Name:BATROYAL
 * Author: QuillPlayzYT
 * License: No Warranty goes for your calculator ; sorry
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

//These would normally be in the gfx folder but i didnt see that the TI Planet Project Builder had a file system
#include "stonebricktiletibr.c"
#include "stonebricktiletibr.h"
#include "PlayerAvatar.c"
#include "PlayerAvatar.h"

void main()
{
int screen = 0;


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
        gfx_PrintStringXY("2nd to Play",120,120);
        if (kb_Data[1] & kb_Mode & screen = 0) {
            gfx_SetTextFGColor(228);
            gfx_PrintStringXY("BR PR 1.0",0,0);
            gfx_SetTextFGColor(30);
            gfx_PrintStringXY("Scenario Loader 1.0",0,10);
            gfx_SetTextFGColor(40);
            
            while ((name = ti_DetectAny(&search_pos, search_string, &type)) != NULL)
            {
                    if (type == TI_APPVAR_TYPE)
                    {
            /* Print the name of the variable (Should be LibLoad) */
            os_SetCursorPos(0, y);
            os_PutStrFull(name);

            y++;
        }
    }
            
        }
 } while (!(kb_Data[6] & kb_Clear));

    gfx_End();
}
