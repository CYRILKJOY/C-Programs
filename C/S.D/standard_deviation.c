#include<stdio.h>
#include<math.h>
void main()
{
    int a[6],j,k,l,m,o,p,sd;
    int n;
    float mean,sum,uppervarience;
    printf("enter the numbers");
    scanf("%d %d %d %d %d %d ",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    printf("enter n");
    scanf("%d",&n);
    
    sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    mean=sum/n;
    printf("%f \n",mean);
    j=(a[0]-mean)*(a[0]-mean);
    k=(a[1]-mean)*(a[1]-mean);
    l=(a[2]-mean)*(a[2]-mean);
    
    m=(a[3]-mean)*(a[3]-mean);
    o=(a[4]-mean)*(a[4]-mean);
    p=(a[5]-mean)*(a[5]-mean);
    uppervarience=j+k+l+m+o+p;
   varience=uppervarience-(n-1);
    printf("%f",varience);
    sd=sqrt(varience);
    printf("%f",sd);
   
    
}