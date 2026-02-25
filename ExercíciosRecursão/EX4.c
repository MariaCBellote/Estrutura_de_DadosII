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

//O raiz de n ?
int NumeroPrimoOtimizado(int numero, int divisor){
    if(divisor*divisor > numero){
          printf("Primo");
        return 1;
    }

    if(numero % divisor == 0){
          printf("Não Primo");
        return 0;
    }
    
  return NumeroPrimoOtimizado(numero, divisor + 1);
}

int primo (int numero){
    return NumeroPrimoOtimizado(numero,2);
}
int main()
{
    
 primo(11);

    return 0;
}
