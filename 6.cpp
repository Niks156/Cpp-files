#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any number: ");
    scanf("%d", &num1);
    num2 = (1 << 3)|num1;
    printf("Result:%d",num2);
    return 0;
}
