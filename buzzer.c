#include<P18F4550.h>        
void Delay_Ms(unsigned int);
void main()
{ 
 TRISE=0;                                   /* SETING PORT E AS OUT PUT PIN       */
 ADCON1=0X07;                                /* SETTING PORTE AS DIGITAL PIN      */
 while(1)
 {
  PORTE=1;                                     /* BUZZER ON                       */
  Delay_Ms(500);                             /* Delay Fuction Is Called 500Ms   */
  PORTE=0;                                     /* BUZZER OFF                      */
  Delay_Ms(500);                             /* Delay Fuction Is Called  500Ms  */
 }
}
void Delay_Ms(unsigned int ms)
{
 int i,count;
 for(i=1;i<=ms;i++)
 {
  count=498;
  while(count!=1)
  {
   count--;
  }
 }
}