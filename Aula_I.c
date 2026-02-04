// Hello World sem ;
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
       float raio;
       float centro[2];
       
   } circunferencia;
   
   circunferencia *criarCircunferencia(float x, float y, float r){
       circunferencia *c=malloc(sizeof(circunferencia));
       c->centro[0]=x;
       c->centro[1]=y;
       c->raio=r;
       
       return c;
   }
//Destruir a circunferência
 void destruir(circunferencia *c){
       free(c);
   }
// retornar se umponto x,y esta dentro da circnferencia
int retornarPonto(float a, float b, circunferencia *c){
      float x= c->centro[0];
       float y=c->centro[1];
       float r=c->raio;
       float distancia= sqrt(pow(x-a,2)+ pow(y-b,2)) ;
       if(distancia>r){
           printf("Fora\n");
           return 0;
       }
       else{
           printf("Dentro\n");
           return 1;
       }
       
   }
// retornar daus circunferencias que nao se interceptem
int intercepta(circunferencia *c1, circunferencia *c2){
       float x= c1->centro[0];
       float y=c1->centro[1];
       float r=c1->raio;
       
       float a= c2->centro[0];
       float b=c2->centro[1];
       float c=c2->raio;
       float distancia= sqrt(pow(x-a,2)+ pow(y-b,2)) ;
       if(distancia>r+c){
           printf("Não intercepta\n");
           return 0;
       }
       else{
           printf("Intercepta\n");
           return 1;
       }
   }
