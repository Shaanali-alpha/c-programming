#include<stdio.h>

int main()
{
    /*
     Name: Shaan Ali
    UIN: 251P013
    Roll No: 12
    Division: C
    Class: Comps_1
    */

    int num1, num2;
    int sum = 0;

    printf("Enter the Number to Start from: ");
    scanf("%d", &num1);

    printf("Enter the Number to End at: ");
    scanf("%d", &num2);
    
    for (int i = num1; i<=num2; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum +i;
        }
    }
    printf("Sum of all the Odd Numbers between the 2 numbers is: %d", sum);

    return 0;

}
