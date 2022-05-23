#include<stdio.h>

int main(void)
{
    int a,b;
    printf("正の整数を入力してください:");
    scanf("%d",&a);
    for(b=2;b<a;b++){
        if(a%b==0){
            printf("その数は素数ではありません。");
        }
        else if(a==b){
            printf("その数は素数です。");
        }
        
    }
    return 0;
}