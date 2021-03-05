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

//These would normally be in the gfx folder but i didnt see that the TI Planet Project Builder had a file system
#include "stonebricktiletibr.c"
#include "stonebricktiletibr.h"
#include "PlayerAvatar.c"
#include "PlayerAvatar.h"

void main()
{



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
        gfx_BlitBuffer();
    bool allowgamekp = false;
    int playerx = 50;
    int playery = 50;
    gfx_Sprite(PlayerAvatar,playerx,playery);
    kb_Scan();

        if (allowgamekp)
            {
            //My mentor needs to help me with ! and apersands (&)    
            if (kb_Data[7] & kb_Up & playery ! 240) playery++;

                if (kb_Data[7] & kb_Down & playery ! 0) playery--;

                if (kb_Data[7] & kb_Left & playerx ! 0) playerx--;

                if (kb_Data[7] & kb_Right & playerx ! 320) playerx++;
            }
 } while (!(kb_Data[6] & kb_Clear));

    gfx_End();
}
