#include<stdio.h>
int main()
{
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else if(a*a==(b*b+c*c))
        printf("TRIANGULO RETANGULO\n");
    else if(a*a>(b*b+c*c))
        printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a<(b*b+c*c))
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c && c==a)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==b || b==c || c==a)
        printf("TRIANGULO ISOSCELES\n");

    return 0;

}
/*if A ≥ B + C, write the message: NAO FORMA TRIANGULO
• if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
• if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
• if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
• if the three sides are the same size, write the message: TRIANGULO EQUILATERO
• if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES*/
