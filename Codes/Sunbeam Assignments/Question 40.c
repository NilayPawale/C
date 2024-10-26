// Write a function to accept array elements from the user. Write another function to print array 
// elements. Re-use these functions in rest of the assignments wherever required.
// Write a function to reverse the array elements.


#include<stdio.h>

typedef enum {EXIT,ACCEPT,DISPLAY,TOTAL,AVERAGE,MAXIMUM,MINIMUM,REVERSE}MENU;

MENU menu_choice()
{
    MENU mchoice;
    printf("\n 0. Exit \n");
    printf("1. Accept array elements \n");
    printf("2. Display array elements \n");
	printf("3. Display Total of array elements \n");
    printf("4. Display Reverse array elements \n");
    scanf("%d",&mchoice);
    return mchoice;
}
void accept_array_elements(int p[5])
{
    int index;
    printf("Specify Number of Array Elements \n");
    for(index=0;index<5;index++)
    {
        scanf("%d",&p[index]);
    }
}

void display_array_elements(int p[5])
{
    int index;
    printf("Array Elements are \n");
    for(index=0;index<5;index++)
    {
        printf("%4d",p[index]);
    }
}
void total_array_elements(int p[5])
{
	int average,index,sum=0;
	for(index=0;index<5;index++) 
	{
		sum+=p[index];
        average=sum/5;
	}
	printf("\nThe Total Number of Marks = %d\n",sum);
    printf("\nThe Average Total Number of Marks = %d\n",average);
}
void reverse_array_elements(int p[5])
{
    int a,marks[a],index;
    printf("Array Elements are \n");
    for(index=a;index>=0;index--)
    {
        printf("%4d",p[index]);
    }
}
int main()
{
    int arr[5];
	int i=0,sum=0;
    MENU mchoice;

    while ((mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
           case ACCEPT:
                        accept_array_elements(arr);
                        break;
            case DISPLAY:
                        display_array_elements(arr);
                        break;
			
			case TOTAL:
						total_array_elements(arr);
						break;
            case REVERSE:
						reverse_array_elements(arr);
						break;
            //case MINIMUM:

        }
    }
}







