//Write a program toacceptintegervalues of base and index and calculate powerof base to index.

#include<stdio.h>

int main()
{
    int i,base,index,prod=2;//OR prod=1
    printf("Enter Base Number\n");
    scanf("%d",&base);
    printf("Enter Index Number\n");
    scanf("%d",&index);

    for (i = 1; i<index; i++)//OR for (i = 1; i<=index; i++)
    {
        prod = prod*base;           
    }
    printf("%d is Output of %d is Base with %d Index\n",prod,base,index);
}