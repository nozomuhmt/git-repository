#include<stdio.h>
int main(void)
{
    int i,m;
    int tensu[5];
    int sum=0;
    int min;
    int ave;
    

    printf("値を入力してください。\n");
    for(i=0;i<5;i++){
        printf("%d番 : ",i+1);
        scanf("%d",&tensu[i]);
        sum += tensu[i];
        if(i==0)
        min=tensu[i];
        else if(min>tensu[i])
        min=tensu[i];
        
    
    
  }
    printf("合計値:%d\n",sum);
    printf("最小値:%d\n",min);
    printf("平均点:%5.1F\n",(double)sum/5);

    return 0;

 

}