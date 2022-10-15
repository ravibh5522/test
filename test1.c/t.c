#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter number of subject\n");
    scanf("%d6",&a);
    int mark[a-1];
    int i=1;
    while (i<=a)
    {
    printf("mark in subject %d \n",i);
    scanf("%d",&mark[i-1]);
    i++;
    }
    int b=0;
    int sum=0;
    while (b<=a-1)
    {
         sum=sum+mark[b];
         b++;
    }
    printf("total mark=%d",sum);
    
    
    return 0;
}
