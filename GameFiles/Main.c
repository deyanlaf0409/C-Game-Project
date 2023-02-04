#include <stdio.h>    //Standart library..
#include <stdlib.h>  //For system("cls")
#include <conio.h>  //For kbhit()
#include <time.h>  //For rand() functions
#include <math.h>
#define _WIN64_WINNT  _WIN64_WINNT_WIN10
#define NTDDI_VERSION NTDDI_WIN10_22H2
#include <SdkDdkVer.h>//Macros to future-proof the code

//Size of game border 
#define Height 20
#define Width 20 

//Variables
int i,j,k; //<--iterables
int GameOver = 0, score=0;
int head_pos_x, head_pos_y, fruit_x, fruit_y;
int totalTails=0; //<-Number of new tails;                 
int tailX[100], tailY[100];
int direction; 

//Game source code
#include "incl/Setup.h"
#include "incl/Draw_Border.h"
#include "incl/Input.h"
#include "incl/Movement.h"



void main()
{
	srand(time(NULL));
	setup();
	
	while(GameOver!=1)
    {
    DrawBorder();
    Input();
    Movement();
    }
    
    
    if(GameOver) 
    {
    	if(score==1)
    	{
    		printf("\tAre you serious right now bro??");
		}	
	}
	
}




