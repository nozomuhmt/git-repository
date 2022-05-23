#include<stdio.h>

int main(viod)
{
    float i ;/*計算回数*/
    float k ;/*平均速度*/
    float j ;/*距離*/
    float time ;/*所要時間*/
    printf("計算する回数を入力してください:");
    scanf("%f",&i);
    for(i)
    {
      printf("距離(km)を入力してください:");
      scanf("%f",&j);
      printf("平均速度(km/h)を入力してください:");
      scanf("%f",&k);
      printf("所要時間は%fです",j/k);   
    }

    return 0;


}