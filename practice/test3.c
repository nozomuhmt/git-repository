#include<stdio.h>

int main(void)
{
    int a = 7,b = 5,c;
    int n;
    if (a*2<9){
        if(b%2 ==0){
            n = 3;
        }
        else{
            n = 4;
        }
    }
    else{
        n=5;

    }
    printf("%d",n);
    return 0;

}