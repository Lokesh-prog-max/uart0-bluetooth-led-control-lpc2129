 #include<LPC21XX.H>
 #include"header.h"
 #define LED1 (1<<17)
 #define LED2 (1<<18)
 int main()
 {
 char temp;
 IODIR0=LED1|LED2;
 IOSET0=LED1|LED2;
 uart0_init(9600);
 while(1)
 {
 uart0_tx_string("\r\nenter option:\r\na for led1 on\r\nb for led1 off\r\nc for led2 on\r\
 nd for led2 off\r\n");
 temp=uart0_rx();
 uart0_tx(temp);
 switch(temp)
 {
 case 'a':IOCLR0|=LED1;uart0_tx_string("\r\n led1 on");break;
 case 'b':IOSET0|=LED1;uart0_tx_string("\r\n led1 off");break;
 case 'c':IOCLR0|=LED2;uart0_tx_string("\r\n led2 on");break;
 case 'd':IOSET0|=LED2;uart0_tx_string("\r\n led2 off");break;
 default :uart0_tx_string("\r\nunknown option");
 }
 }
 }
