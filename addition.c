#include<stdio.h>
#include<P18F4550.h>

void main(void){
	int sum;
	sum = 0;
	sum = 0x0A + 0x02;	
	TRISD=0;
	PORTD=sum;
}
