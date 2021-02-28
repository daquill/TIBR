/*
 *--------------------------------------
 * Program Name:BATROYAL
 * Author: QuillPlayzyT
 * License: Home , No WARRANTY
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
#include "gfx/gfx.h"
int main(void)
{
    gfx_Begin();
    
     
     
     gfx_SetDrawBuffer();
    
    bool signinstatus = true;
    bool allowgamekp = true;
    int playerx = 50;
    int playery = 50;
    
    bool gamestatus = false;
    
 
    
    do{
       
        for (uint24_t filltilex = 0; filltilex < 320; filltilex+=16) {
                
            
            for (uint8_t filltiley = 0; filltiley < 240; filltiley) {
           gfx_Sprite(stonebricktiletibr,filltilex,filltiley);
                }
                 
            }
   
            if (gamestatus) {
        gfx_Sprite(PlayerAvatar,playerx,playery);
        gfx_FillRectangle(0,0,10,10);
                 //allowgamekp = allowgamekeypress
                if (allowgamekp) {
            kb_Scan();
            
                    if (kb_Data[7] & kb_Up) {
            playery = playery++;
             }
                    if (kb_Data[7] & kb_Down) {
            playery = playery--;
             }
                    if (kb_Data[7] & kb_Left) {
            playerx = playerx--;
             }
                    if (kb_Data[7] & kb_Right) {
            playerx = playerx++;
             }
                
         
         
         }

        }







    
        
      
       
        gfx_FillScreen(19);
        gfx_SetTextFGColor(228);
        gfx_PrintStringXY("Battle Royale",140,100);
        gfx_SetTextFGColor(187);
        gfx_PrintStringXY("Pre Release 1.0",136,110);
        gfx_SetTextFGColor(147);
        gfx_PrintStringXY("2nd To Login with your TIBR account ",70,120);
        if (signinstatus == 1) {
            
            signinstatus = 2;
        }
       if(kb_Data[1] && kb_2nd && signinstatus == 0) {
        gfx_SetTextFGColor(147);
        signinstatus = 1;
    }
     
       
        gfx_BlitBuffer();
    
    
    
    } while(!(kb_Data[6] & kb_Clear));
    

    gfx_End();
    return 0;
}
