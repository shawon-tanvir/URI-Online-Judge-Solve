#include<stdio.h>

int main()
{
    char name[100];
    double a,b;

    scanf("%s%lf%lf",&name,&a,&b);
    printf("TOTAL = R$ %.2lf\n",a+(b*.15));

    return 0;
}
