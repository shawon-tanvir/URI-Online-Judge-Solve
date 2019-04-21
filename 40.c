#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    scanf("%f%f%f%f",&a,&b,&c,&d);

    e=((a*2)+(b*3)+(c*4)+(d*1))/10;

    printf("Media: %.1f\n",e);

    if(e>=7.0)
        printf("Aluno aprovado.\n");
    else if(e<5.0)
        printf("Aluno reprovado.\n");
    else if(e>=5.0 && e<=6.9)
        printf("Aluno em exame.\n");

    if(e>=5.0 && e<=6.9){
        scanf("%f",&f);
        printf("Nota do exame: %.1f\n",f);

        g=(e+f)/2;
        if(g>=5.0)
            printf("Aluno aprovado.\n");
        else if(g<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",g);
    }
    return 0;
}
