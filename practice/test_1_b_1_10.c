#include<stdio.h>

int main(void)
{
    char str[]="ABCDEFGABABCFZZXYH";
    int count=0;
    char a;
    char *p;

    printf("検索する文字を入力して下さい:");
    a=getchar();
    p=str;

    while (*p!='\n')
    {
        if(a==*p){
            count++;
            printf("%cの%d回目は、%ld文字目です\n",a,count,(p-str+1));

        }
        p++;
    }
    if(!count)
    printf("Not Found\n");
    
    return 0;
    
}