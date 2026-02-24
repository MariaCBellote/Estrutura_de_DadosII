/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// Encontre o maior elemento em um vetor de n´umeros de tamanho n.

#include <stdio.h>
int MaiorElementoVetor(int vetor[], int n){

    if(n==1){
        return vetor[0]; // quando tiver 1 elemento
    }
    
     int maior=MaiorElementoVetor(vetor, n-1); // até ser 1 a função vai empilhando
    
    if(vetor[n-1]>maior){ //terminando de empilhar ela compara, sempre começando com o último da pilha (vetor,1)
       return vetor[n-1]; 
    }                     // porém como o última já retorna v[0], ele compara v[0] como v[1], já que (v,2)
    else{
        return maior;
    }
   
}


int main()
{
    int v[11]= {0,30,80,70,45,20,10,21,76,6,1};
    
    printf("%d\n", MaiorElementoVetor(v,11));

    return 0;
}