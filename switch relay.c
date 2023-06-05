#include<P18F4550.h>        
 
void main()
{ 
unsigned char key=0;
TRISDbits.TRISD0=1; // D0 pin configure as input
TRISDbits.TRISD1=1;// D1 pin configure as input
if(TRISDbits.RD0==0) // 1 if switch 1 pressed
key=0;
if(TRISDbits.RD1==0)// 1 if switch 2 pressed
key=1;
}