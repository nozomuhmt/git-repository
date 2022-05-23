#include<stdio.h>

int main(void)
{
    int i,j,k,l,m,n,sum;
    printf("部屋の数を入力してください:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        printf("長さを入力してください:");
        scanf("%d",&l);
        printf("幅を入力してください:");
        scanf("%d",&m);
        n=m*l;
        sum +=n;
            


    }
    printf("総面積:%d",sum);
    return 0;


}