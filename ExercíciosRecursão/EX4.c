// Dado um n´umero n inteiro positivo, determine se ele ´e primo. Sua fun¸c˜ao deve ter complexidade O(√n).

// Dado um n´umero n inteiro positivo, determine se ele ´e primo. Sua fun¸c˜ao deve ter complexidade O(√n).

#include <stdio.h>
// Normal
int NumeroPrimo(int numero, int divisor){
    
    if(numero == divisor){
        printf("Primo");
        return 1;
    }
    if(numero % divisor == 0){
          printf("Não Primo");
        return 0;
    }
    return NumeroPrimo(numero, divisor + 1);
}

int primo (int numero){
    return NumeroPrimo(numero,2);
}

//O raiz de n ?


int main()
{
    
 primo(10);

    return 0;
}
