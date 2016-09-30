#include <stdio.h>

int main(void) {
    int j=1,t,i=0;
    char a[100];
    printf("enter the times of ip to be entered");
    scanf("%d",&t);
    for(i=0;i<10;i++)
    scanf("%c",a[i]);
    while(j<=t)
    {
        i++;
        for(i=0;i!='\0';i++)
        {
        if(i!=(3*i))
        {

            printf("%c",a[i]);
    }
    else
    printf(".");
    
    j++;
    }
	return 0;
}

