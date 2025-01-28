#include <stdio.h>

int main(){
typedef struct motor
{
   float peso; 
}motor;

typedef struct carro
{
   float valor, velocidadem, aceleracao;
    motor motor;
}carro;

carro fusca;
fusca.aceleracao= 71;
fusca.valor=3;
fusca.velocidadem=87,1;
fusca.motor.peso= 65;

printf("%.2f", fusca.motor.peso);
return 0;
}


