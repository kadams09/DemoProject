#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter 3 value");
    scanf("%d%d%d",&a,&b,&c);


    printf("max is %.2f",fmax(a,fmax(b,c)));
    return 0;
}

