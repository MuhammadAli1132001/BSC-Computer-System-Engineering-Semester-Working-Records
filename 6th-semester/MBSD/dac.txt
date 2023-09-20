
#include <reg51.h>
#include <stdio.h>

int wave = 0;	//Used to keep track of which waveform to show
int index =0;	//Used in the formation of a sine wave
unsigned char i=0;  //Used in the formation of triangular wave and square wave
unsigned char ramp = 255;	//Used in the formation of  ramp wave

char sine[12] = {128,192,239,255,239,192,128,64,17,0,17,64};	//Digital values that needs to be sent at P1 to form sine wave

void ext0() interrupt 0	//Called when a button is pressed at P3.2
{
   wave++;	
   i = 0;
   index =0;
   ramp = 255;
}

void timer() interrupt 1	//Called when the TF0 bit is set
{
	 switch(wave%4)
	 {
	    case 0:		//Sine wave
	       index++;
	       index = index%12;
	       TH0 = 0xFD;	//6.7ms/12 = 0.558ms delay
	       TL0 = 0xD1;
	       break;
	    case 1:	//Do nothing
	       break;
	    case 2:	//Ramp wave
	       ramp-=10;
	       TH0 = 0xFF;	//26usec delay
	       TL0 = 0xF5;
	       break;
	    case 3:	//Square Wave
	       if(i==0)
		  i=255;
	       else
		  i = 0;
	       TH0 = 0xF2; //8.4/2 = 4.2msec delay
	       TL0 = 0xE9;
	       break;
	 }
}

void init()
{
   TMOD = 0x1;	//Timer 0 mode 1
   EA =1;			//Enable Global interrupt
   ET0 = 1;		//Enale Timer 0 interrupt
   EX0  = 1;		//Enable external interrupt 0
   TH0 = 0xFD;		//558usec delay
   TL0 = 0xD1;
   IT0 =1;			//Make interrupt 0 edge triggered
 }
 
 void delay()
 {
    unsigned int a;
    for(a=0;a<1;a++);
  }


void main(void)
 { 
   init();
    TR0 = 1;	//Start timer 0
   while (1)
   {
       switch(wave%4)
      {
	 case 0:
	       P1 =  sine[index];	//Send sine wave
	    break;
	 case 1:		//Send Triangular Wave
	    for(i =0;i<255;i++)
	    {
	       P1 = i;
	       delay();
	    }
	    for(i=255;i>0;i--)
	    {
	       P1 = i;
	      delay();
	    }
	    break;
	  case 2:		//Send Ramp wave
	       P1 = ramp;
	    break;
	  case 3:		//Send Square wave
	       P1 = i;
	       break;
	     
      }
      
    }
 }