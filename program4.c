// write a program to find greatest of all the numbers entered by the users 
#include<stdio.h>

int main() {
    int a, b, c,d ;

printf("Enter four numbers \n");
scanf("%d %d %d %d",&a,&b, &c, &d);


if(a>b)
{
    if(a>c)
    {
        if(a>d)
        {
            printf("%d a is greatest of all numbers", a);
        }
    }
}
else if(b>c)
{
        if(b>d)
        {
            printf("%d is greatest os all numbers", b);
        }
    
}
else if(c>d)
{
    printf("%d is greatest of all numbers", c);
}
else
{
    printf("%d is greatest of all numbers",d);
}






    return 0;
}