#include<stdio.h>
int main()
{
    int a,b,d,e;
    float c,g;

    scanf("%d%d%f",&a,&b,&c);
    scanf("%d%d%f",&d,&e,&g);

    printf("VALOR A PAGAR: R$ %.2f\n",b*c+e*g);
    return 0;
}
