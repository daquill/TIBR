/* Version History and Notes and Credits
*/

/*
 *--------------------------------------
 * Program Name:BATROYAL
 * Author: QuillPlayzYT
 * License: -
 * Description: Battle Royale for the TI 84 Plus CE; BE THE FIRST ONE TO GET PARTS TO FIX YOUR SPACESHIP
 *--------------------------------------
*/

#include <tice.h>
#include <graphx.h>
#include <keypadc.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "gfx/gfx.h"
#include <fileioc.h>
void main()
{
    int screen = 0;


    gfx_Begin();
    gfx_SetDrawBuffer();

    do {
        kb_Scan();
        gfx_SetTextFGColor(228);
        gfx_PrintStringXY("Battle Royale",120,100);
        gfx_SetTextFGColor(187);
        gfx_PrintStringXY("Pre Release 1.0",116,110);
        gfx_SetTextFGColor(147);
        gfx_PrintStringXY("2nd to Play",120,120);

        if (kb_Data[1] & kb_Mode & screen == 0) {
            gfx_SetTextFGColor(228);
            gfx_PrintStringXY("BR PR 1.0",0,0);
            gfx_SetTextFGColor(30);
            gfx_PrintStringXY("Scenario Loader 1.0",0,10);
            gfx_SetTextFGColor(40);
            void *search_pos = NULL;
            char *name;
            int8_t y = 30;
            uint8_t type;
            int8_t numcount = 0;
            while ((name = ti_DetectAny(&search_pos, "BRDAT", &type)) != NULL)
            {
                    if (type == TI_APPVAR_TYPE)
                    {
            
            os_SetCursorPos(0, y);
            gfx_PrintStringXY(name,30,y);
            gfx_PrintStringXY(">",0,y);
            gfx_PrintStringXY(numcount,10,y);

            y+10;
            numcount++;
        }
    }
            
        }


        gfx_BlitBuffer();

 } while (!(kb_Data[6] & kb_Clear));

    gfx_End();
}
