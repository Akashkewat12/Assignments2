#include<stdio.h>
int main()
{
    int x=123,r,temp;
    r=x%10;
    temp=x/10;
    x=(r*100)+temp;
    printf("%d",x);
    return 0;
}
