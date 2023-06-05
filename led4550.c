#include<P18F4550.h>       

void Delay_ms(int ms);
 void main()
{
 TRISB = 0X00;                
 
 while(1)
 {
  PORTB = 0XFF;           
  Delay_ms(500);           
  PORTB = 0X00;          
  Delay_ms(500);         
 }
}   
void Delay_ms(int ms)
{
 int i,count;          
 for(i=1; i<=ms; i++)     
 {
  count = 498;
  while(count!=1)
  {
   count--;
  }
 }
}