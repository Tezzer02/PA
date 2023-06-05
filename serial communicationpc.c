#include<stdio.h>
#include<P18F4550.h>
unsigned char RX_DATA, TX_DATA;
void init_serial()
{
SSPCON1=0;
TRISCbits.TRISC7=1;
TRISCbits.TRISC6=0;
SPBRG=0x1E;
TXSTA=0x20;
RCSTA=0x90;
}
void receive()
{
while(PIR1bits.RCIF==0);
 RX_DATA=RCREG;
}
void send()
{
while(TXSTAbits.TRMT==0);
 TXREG=RX_DATA;
}
void main()
{ init_serial();
 while(1)
{
receive();
send();
}
}

