#line 1 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 6 - MikroC/Proyecto/45K50/ADC SetPoint.c"
#pragma orgall 0x1FFF
#line 26 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 6 - MikroC/Proyecto/45K50/ADC SetPoint.c"
unsigned int ValorPOT;

void main() org 0x2000
{
 LATA4_bit = 0;
 TRISA4_bit = 0;
 TRISA0_bit = 1;
 ANSA0_bit = 1;

 while (1)
 {
 ValorPOT=ADC_Read(0);

 if(ValorPot <= 512)
 {
  LATA4_bit = 0 ;
 }

 else
 {
  LATA4_bit = 1 ;
 }

 }
}
