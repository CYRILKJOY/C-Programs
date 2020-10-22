#include<stdio.h>
main()
{
    char name[5];
    char adress[5];
    printf("enter the name");
    scanf("%s %s %s %s %s",&name[0],&name[1],&name[2],&name[3],&name[4]);
    printf("enter the adress");
    scanf("%s %s %s %s %s",&adress[0],&adress[1],&adress[2],&adress[3],&adress[4]);
    printf("%c %c %c %c %c",name[0],name[1],name[2],name[3],name[4]);
    printf("%c %c %c %c %c",adress[0],adress[1],adress[2],adress[3],adress[4]);
    
    
    
}