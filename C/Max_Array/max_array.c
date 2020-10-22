#include<stdio.h>
void main()
{
    int a[5],max,maxindex;
    int b[5];
    printf("enter the value for a");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    max=0;
    if(max>a[0]){
        max=a[0];
        maxindex = 0;
    }
    if(max>a[1]){
        max=a[1];
        maxindex = 1;
    }
    if(max<a[2]){
        max=a[2];
         maxindex = 2;
    }
    if(max<a[3]){
        max=a[3];
         maxindex = 3;
    }
    if(max<a[4]){
        max=a[4];
         maxindex = 4;
    }
    a[maxindex] = -1;
   b[0]=max;
    
    
    
    
    printf("%d",b[0]);
    
    
    
    
    
    
    
    
    max=0;
    if(max<a[0]){
        max=a[0];
        maxindex = 0;
    }
    if(max<a[1]){
        max=a[1];
        maxindex = 1;
    }
    if(max<a[2]){
        max=a[2];
         maxindex = 2;
    }
    if(max<a[3]){
        max=a[3];
         maxindex = 3;
    }
    if(max<a[4]){
        max=a[4];
         maxindex = 4;
    }
    a[maxindex] = -1;
   b[1]=max;
    
    
    
    
    printf("%d",b[1]);
    
    
    
    max=0;
    if(max<a[0]){
        max=a[0];
        maxindex = 0;
    }
    if(max<a[1]){
        max=a[1];
        maxindex = 1;
    }
    if(max<a[2]){
        max=a[2];
         maxindex = 2;
    }
    if(max<a[3]){
        max=a[3];
         maxindex = 3;
    }
    if(max<a[4]){
        max=a[4];
         maxindex = 4;
    }
    a[maxindex] = -1;
   b[2]=max;
    
    
    
    
    printf("%d",b[2]);
    
    
    max=0;
    if(max<a[0]){
        max=a[0];
        maxindex = 0;
    }
    if(max<a[1]){
        max=a[1];
        maxindex = 1;
    }
    if(max<a[2]){
        max=a[2];
         maxindex = 2;
    }
    if(max<a[3]){
        max=a[3];
         maxindex = 3;
    }
    if(max<a[4]){
        max=a[4];
         maxindex = 4;
    }
    a[maxindex] = -1;
   b[3]=max;
    
    
    
    
    printf("%d",b[3]);
    
    
    
    
    max=0;
    if(max<a[0]){
        max=a[0];
        maxindex = 0;
    }
    if(max<a[1]){
        max=a[1];
        maxindex = 1;
    }
    if(max<a[2]){
        max=a[2];
         maxindex = 2;
    }
    if(max<a[3]){
        max=a[3];
         maxindex = 3;
    }
    if(max<a[4]){
        max=a[4];
         maxindex = 4;
    }
    a[maxindex] = -1;
   b[4]=max;
    
    
    
    
    printf("%d",b[4]);
}