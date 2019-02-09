#include<stdio.h>           //bitwise operators
int main()
{
    int n,n1;
    scanf("%d %d",&n1,&n2);
    n=n^n1;                                  // n=n+n1;
    n1=n^n1;                                   // n1=n-n1;
    n=n^n1;                                    // n=n-n1;
    printf("%d %d",n1,n2);
    return 0;
}
