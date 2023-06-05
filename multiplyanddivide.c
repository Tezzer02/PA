#include<stdio.h>
#include<P18F4550.h>
void main( ){
int MUL, DIV;

MUL=0;
DIV=0;

MUL = 0X04 * 0X02;
DIV = 0X06 / 0X02;

TRISD = 0;
PORTD = MUL;

TRISC = 0;
PORTC = DIV;
}