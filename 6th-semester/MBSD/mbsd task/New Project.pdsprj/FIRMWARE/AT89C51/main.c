
#include <reg51.h>
#include <stdio.h>

sbit RD_n = P3^0; //P3.0 is connected to the RD pin of ADC
sbit WR_n = P3^1; //P3.1 is connected to the WR pin of ADC
sbit INTR = P3^2; //P3.2 is connected to the INTR pin of ADC

void Ext0(void); //Function that is called after the ADC is done with conversion

void main(void)
 { 
    P2 = 0xFF; //Set P2 as an input Port
   P1 = 0x00; //Set P1 as an output Port
   INTR = 1; //Set P3.2 as an input pin
   while (1)
   {
       RD_n = 1; //Set the RD pin to High
      WR_n = 0;//WR = Low
      WR_n = 1;//Low-->High
      while(INTR==1); //Wait for the ADC to Convert the given voltage
      Ext0(); //Call the Ext0 function
    }
 }

void Ext0()
{
   RD_n = 0; //Set the RD pin of ADC from HIGH to LOW
   //The ADC sends the converted value to P2 
   P1 = P2; //Send the value at P2 to P1
}