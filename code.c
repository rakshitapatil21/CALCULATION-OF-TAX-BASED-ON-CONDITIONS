#include<stdio.h>
main()
{
    float income,tax;
    printf("Enter the income:");
    scanf("%f",&income);
    if(income<=150000)
    {
        tax=0;
    }
    else if(income>150000 && income<=300000)
    {
        tax=150000*0+(income-150000)*0.10;
    }
    else if(income>300000 && income<=500000)
    {
        tax=0+15000+(income-300000)*0.20;
    }
    else
    {
        tax=0+15000+40000+(income-500000)*0.30;
    }
    printf("TAX=%f",tax);
}
