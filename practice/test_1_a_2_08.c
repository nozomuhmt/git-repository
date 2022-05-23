#include<stdio.h>

int main(void)
{
    float f,m,o,p;
    int i;
    printf("1.フィートからメートルへ\n");
    printf("2.メートルからフィートへ\n");
    printf("3.オンスからポンドへ\n");
    printf("4.ポンドからオンスへ\n");
    printf("5.終了\n");

    do
    {
        printf("番号を選んで入力してください\n");
        scanf("%d",&i);
    } while (i<0||i>5);

    switch(i){
        case 1:
        printf("フィート数を入力してください:");
        scanf("%f",&f);
        printf("メートル:%f\n",f/3.28);
        break;

        case 2:
        printf("メートル数を入力してください:");
        scanf("%f",&m);
        printf("フィート:%f\n",m*3.28);
        break;

        case 3:
        printf("オンス数を入力してください:");
        scanf("%f",&o);
        printf("フィート:%f\n",o/16);
        break;

        case 4:
        printf("ポンド数を入力してください:");
        scanf("%f",&p);
        printf("フィート:%f\n",p*16);
        break;

         while(i !=5);

    }
 
 return 0;
    
    


}