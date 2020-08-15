#include <stdio.h>
#include <math.h>
int main(){
    int  i=0;
    float ave , a , b , c=0 , n=0,num[100] , topSum=0,SD;
    scanf("%f %f",&a,&b);
    if(a>b){
        for( ; a>=b ; ){
            printf("%.0f ",a);
            num[i] = a;
            n++;
            c=a+c;
            a--;
            i++;
        }
    }
    else if (a<b)
    {
        for( ; a<=b ; ){
            printf("%.0f ",a);
            num[i] = a;
            n++;
            c=a+c;
            a++;
            i++;
        }
    }
    ave = c/n;
    printf("\nAverage = %.1f",ave);
    for(i=0 ; i != n ; i++ ){
        topSum = pow( num[i]-ave,2) + topSum;
    }
    SD = sqrt(topSum/(n-1));
    printf("\nSD = %.2f",SD);
    
}