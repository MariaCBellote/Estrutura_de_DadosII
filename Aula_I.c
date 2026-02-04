// Hello World sem ;
#include <stdio.h>

int main()
{
    if(printf("Hello World"))

    return 0;
}

//TAD de uma circunferência
typedef struct{
       float raio;
       float centro[2];
       
   } circunferencia
   
   circunferencia *criarCircunferencia(float x, float y, float r){
       circunferencia *c=malloc(sizeof(circunferencia));
       c->centro[0]=x;
       c->centro[1]=y;
       c->raio=r;
       
       return c;
   }
//Destruir a circunferência
 void destruir(circunferencia c){
       free(c);
   }
// retornar se umponto x,y esta dentro da circnferencia
int retornarPonto(float a, float b, circunferencia *c){
      float x= c->centro[0];
       float y=c->centro[1];
       float r=c->raio;
       float distancia= sqrt(pow(x-a,2)+ pow(y-b,2)) ;
       if(distancia>r){
           printf("Fora");
           return 0;
       }
       else{
           printf("Dentro");
           return 1;
       }
       
   }
// retornar daus circunferencias que nao se interceptem
 int intercepta(float a, float b, circunferencia *c){
       float x= c->centro[0];
       float y=c->centro[1];
       float r=c->raio;
       float distancia= sqrt(pow(x-a,2)+ pow(y-b,2)) ;
   }
