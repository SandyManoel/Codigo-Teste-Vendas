#include <stdio.h>
void main (void)
{
   float PrecUnit, QtdeVend, ValCompra;
   printf("Digite o preco unitario: ");
   scanf("%f",&PrecUnit);
   printf("Digite a quantidade vendida: ");
   scanf("%f",&QtdeVend);
   ValCompra = PrecUnit * QtdeVend;
   printf("O valor total da compra é, %0.2f ", ValCompra);    
}