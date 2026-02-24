/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>



/* 1. Implemente uma fun¸c˜ao que multiplique dois inteiros positivos. */

int multiplicar(int a, int b){
    if(a==0)
    return 0;
    
    else{
        return b+multiplicar(a-1,b); // soma b até a ser zero.
    }
    
}

/* Para tratar o problema relacionado a stack overflow existem duas maneiras:
1: Recursão em causa

int multiplicar_aux(int a, int b, int resultado){
    if(a == 0)
        return resultado;
    else
        return multiplicar_aux(a-1, b, resultado + b);
}

int multiplicar(int a, int b){
    return multiplicar_aux(a, b, 0);
}



2:Recursão eficiente

int multiplicar(int a, int b){

    if(a == 0)
        return 0;

    if(a % 2 == 0)
        return multiplicar(a/2, b+b);

    else
        return b + multiplicar(a/2, b+b);
}
*/



int main()
{
    printf("%d\n",multiplicar(11,4));

    return 0;
}
