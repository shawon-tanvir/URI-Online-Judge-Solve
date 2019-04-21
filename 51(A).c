
#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);

    if(x>=0.00 && x<=2000.00){
        printf("Isento\n");
    }
    else if(x>2000.00 && x<=3000.00){
        printf("R$ %.2f\n",((x-2000.00)*.08));
    }
    else if(x>3000.00 && x<=4500.00){
        printf("R$ %.2f\n",((1000.00*.08)+(x-3000.00)*.18));
    }
    else
        printf("R$ %.2lf\n",((1000.00*.08)+(1500.00*.18)+(x-4500.00)*.28));
    return 0;
}
