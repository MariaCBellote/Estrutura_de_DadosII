// Dados um vetor de inteiros V de tamanho n e um inteiro a, verifique se a pertence ao vetor V.


#include <stdio.h>

int pertenceVetor(int vetor[],int tamanho, int numero){
    if(tamanho==0){
        printf("Nao pertence\n");
        return 0;
    }
    
    
   if(vetor[tamanho-1]==numero){
       printf("Pertence\n");
       return 1;
   }
   
    return pertenceVetor(vetor,tamanho-1,numero); //caso não entre em nenhum dos casos repete o processo
  
}

int main()
{
  int v[11]= {0,30,80,70,45,20,10,21,76,6,1};
  int v2[1]={1};
  pertenceVetor(v,11,3);
  pertenceVetor(v,11,20);
  pertenceVetor(v2,1,1);

    return 0;
}
