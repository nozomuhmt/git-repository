#include<stdio.h>
int xyz;

void func(void)
{
    static int sx=0;
    printf("sx=%d\n",++sx);
}
int main(void)
{
    int i;
    printf("xyz = %d\n",xyz);
    for(i=0;i<3;i++)
    func();
    return 0;
}