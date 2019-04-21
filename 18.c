#include<stdio.h>

int main()
{
    int N,b,c,d,e,f,g,h,j,k,l,m,n,o;

    scanf("%d",&N);
    printf("%d\n",N);
    if(N>=100){
        b=N/100;
        printf("%d nota(s) de R$ 100,00\n",b);
    }
    else{
        printf("0 nota(s) de R$ 100,00\n");
    }
    c=N%100;
    if(c>=50){
        d=c/50;
        printf("%d nota(s) de R$ 50,00\n",d);
    }
    else{
        printf("0 nota(s) de R$ 50,00\n");
    }
    e=c%50;
    if(e>=20){
        f=e/20;
        printf("%d nota(s) de R$ 20,00\n",f);
    }
    else{
        printf("0 nota(s) de R$ 20,00\n");
    }
    g=e%20;
    if(g>=10){
        h=g/10;
        printf("%d nota(s) de R$ 10,00\n",h);
    }
    else{
        printf("0 nota(s) de R$ 10,00\n");
    }
    j=g%10;
    if(j>=5){
        k=j/5;
        printf("%d nota(s) de R$ 5,00\n",k);
    }
    else{
        printf("0 nota(s) de R$ 5,00\n");
    }
    l=j%5;
    if(l>=2){
        m=l/2;
        printf("%d nota(s) de R$ 2,00\n",m);
    }
    else{
        printf("0 nota(s) de R$ 2,00\n");
    }
    n=l%2;
      if(n>=1){
        o=n/1;
        printf("%d nota(s) de R$ 1,00\n",o);
    }
    else{
        printf("0 nota(s) de R$ 1,00\n");
    }
    return 0;
}
