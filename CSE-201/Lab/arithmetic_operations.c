#include<stdio.h>
#include"First.c"
#include"Second.c"

int main()
{
    int a=10,b=5;


    print();

    greeting("Hasnain");

    printf("Summation of a & b is : %d\n",sum(a,b));

    printf("Subtraction of a from b is : %d\n",sub(a,b));

    printf("Product of a & b is : %d\n",multiply(a,b));



    return 0;
}
