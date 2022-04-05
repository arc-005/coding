// write a program to find grade of a student given his marks based on below 90-100 = A, 80-90 = B, 70-80 = C, 60-70 = D, <60 = F
#include <stdio.h>

int main()
{
    int number;
    printf("Enter your marks \n");
    scanf("%d", &number);

    if ((number < 0) || number > 100)
    {
        printf("wRONG ENTRY ");
    }

   
    else if ((number <= 100) && number > 90)
    {
        printf("Your grade is A");
    }
    else if ((number <= 90) && number > 80)
    {
        printf("Your grade is B");
    }

    else if ((number <= 80) && number > 70)
    {
        printf("Your grade is C");
    }

    else if ((number <= 70) && number > 60)
    {
        printf("Your grade is D");
    }

    else
    {
        printf("You are fail.");
    }

    return 0;
}
