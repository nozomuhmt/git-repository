#include<stdio.h>

int main(void)
{
    int i ;/*計算回数*/
    float k ;/*平均速度*/
    float j ;/*距離*/
    float time ;/*所要時間*/
    printf("計算する回数を入力してください:");
    scanf("%d",&i);
    
    for(;i;i--){
    printf("\n距離(km)を入力してください:");
    scanf("%f",&j);
    printf("平均速度(km/h)を入力してください:");
    scanf("%f",&k);
    printf("所要時間は%fです\n",j/k);
    }

    return 0;


}