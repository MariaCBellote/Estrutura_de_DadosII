#include <stdio.h>

int multiplicar(int a, int b){
    if(a==0)
    return 0;
    
    else{
        return b+multiplicar(a-1,b); // soma b até a ser zero.
    }
    
}

int main()
{
    printf("%d\n",multiplicar(10,4));

    return 0;
}
