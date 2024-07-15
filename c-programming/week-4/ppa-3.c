#include<stdio.h>
#include<math.h>

int main(){
    float x, ans;
    scanf("%f", &x);
    if(0<x && x<10){
        printf("%.2f",x+2);
    } else if(x>=10){
        ans = pow(x,2)+2;
        printf("%.2f", ans);
    } else{
        printf("%.2f", 0.00);
    }
    return 0;
}