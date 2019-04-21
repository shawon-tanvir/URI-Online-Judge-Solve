#include<stdio.h>
int main()
{
    float x,b,d,f,h,j,l,n,p,r,t,v,w;
    int a,c,e,g,i,k,m,o,q,s,u;
    scanf("%f",&x);
    a=x/100;
    b=fmod(x,100);
    c=b/50;
    d=fmod(b,50);
    e=d/20;
    f=fmod(d,20);
    g=f/10;
    h=fmod(f,10);
    i=h/5;
    j=fmod(h,5);
    k=j/2;
    l=fmod(j,2);
    m=l/1;
    n=fmod(l,1);
    o=n/.50;
    p=fmod(n,.50);
    q=p/.25;
    r=fmod(p,.25);
    s=r/.10;
    t=fmod(r,.10);
    u=t/.05;
    v=fmod(t,.05);
    w=v/.01;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",a,c,e,g,i,k);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%.0f moeda(s) de R$ 0.01\n",m,o,q,s,u,w);

    return 0;
}
/*NOTAS:
 nota(s) de R$ 100.00
 nota(s) de R$ 50.00
 nota(s) de R$ 20.00
 nota(s) de R$ 10.00
 nota(s) de R$ 5.00
 nota(s) de R$ 2.00
MOEDAS:
 1 moeda(s) de R$ 1.00
 0 moeda(s) de R$ 0.50
 0 moeda(s) de R$ 0.25
 0 moeda(s) de R$ 0.10
 0 moeda(s) de R$ 0.05
 1 moeda(s) de R$ 0.01 */
