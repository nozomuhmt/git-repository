#include<stdio.h>
int main(void)
{
    int sum=0;
    int i,j;
    int date[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{99,98,97,96,95}};
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
        sum=sum+date[i][j];
        }
    }
        printf("二次元配列合計:%d\n",sum);
    
    return 0;

} 