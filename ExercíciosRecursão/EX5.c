// Dado um n´umero n inteiro positivo, determine se ele ´e primo. Sua fun¸c˜ao deve ter complexidade O(√n).

#include <stdio.h>

void imprimirNumeros(int numero){
   
    if(numero>0){
        imprimirNumeros(numero-1); // vai chamar a função até encher a pilha
        printf("%d\n",numero);    // Após chegar na condição de parada é necessário desfazer a pilha. Agora os prints executam
    }
       
}

int main()
{
  imprimirNumeros(20);

    return 0;
}
