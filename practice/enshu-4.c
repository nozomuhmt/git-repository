#include<stdio.h>

int parallelogram(const int ,const int);
const double pai =3.13159265;
int main()
{
    int hankei =5,height,base;

    printf("半径が%dの円の面積は%fです。\n",hankei,hankei*hankei*(double)pai);
    printf("平行四辺形を求める\n");
    printf("平行四辺形の高さは？\n");
    scanf("%d",&height);
    printf("平行四辺形の底辺は");
    scanf("%d",&base);
    parallelogram(height,base);

}
int parallelogram(const int height,const int base)
{
    printf("高さ%d 底辺の長さ%d 平行四辺形の面積は%d\n",height,base+1,base*height);
    return 0;
}