#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);

        b=a/365;
        c= fmod(a,365.5);
        d=c/30;
        e=c%30;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",b,d,e);

        return 0;
}
/*1 ano(s)
 1 mes(es)
 5 dia(s)*/
