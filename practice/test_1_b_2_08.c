#include<stdio.h>
int main(void)
{
    char name[80],date[80],phone[80];

    printf("名前と生年月日");
    printf("と電話番号を入力して下さい:\n");
    scanf("%s%8s%8s",name,date,phone);
    printf("%s %s %s",name,date,phone);

    return 0;
}