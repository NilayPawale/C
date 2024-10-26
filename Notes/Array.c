/*Array 1
#include <stdio.h>
int main()
{
	//index 01234
	int a[5] = {1,2,3,4,5};
	printf("%d",a[1]);
}*/

/*Array 2
#include <stdio.h>
int main()
{
	int a;
	int i=0;
	printf("Enter the Value for the size of array\n");
	scanf("%d",&a);
	printf("Enter the Values\n");
	int arr[a];
	for(i=0;i<a;i++)  //for taking values
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++) //for printing values
	{
		printf("%d",arr[i]);
	}
}*/

/*Array 3
#include <stdio.h>
int main()
{
	int a;
	int i=0;
	printf("Enter the Value for array\n");
	scanf("%d",&a);
	int sum=0;
	printf("Enter the Values\n");
	int arr[a];
	for(i=0;i<a;i++)  
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++) 
	{
		printf("%d\n",arr[i]);
	}
	for(i=0;i<a;i++) 
	{
		sum+=arr[i];
	}
	printf("The Total Number of Array=%d\n",sum);
}*/

/*Array 2D 1
#include <stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("Enter 2D Array Elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("2D Array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}*/

/*Array 2D Addition 1
#include <stdio.h>
int main()
{
	int a[2],b[2],c[2];
	int i=0;
	printf("Enter 1st 1D Array Element\n");
	for (i=0;i<2;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("Enter 2nd 1D Array Element\n");
	for (i=0;i<2;i++)
	{
		scanf("%d\n",&b[i]);
	}
	int j;
	for (j=0;j<2;j++)
	{
		c[j]=a[j]+b[j];
	}
	printf("Addition is 2D Array\n");
	for (j=0;j<2;j++)
	{
		printf("%d\t",c[j]);
	}
}*/

/*Array 2D Addition 2
#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter 1st 1D Array Element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd 1D Array Element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition of 2D Array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",c[i][j]);
		}
	}
}*/

/*Array Problem 1 - Store number in array element
#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int pos,data;
	printf("Enter the Position\n");
	scanf("%d",&pos);
	printf("Enter the Element\n");
	scanf("%d",&data);
	a[pos]=data;
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}*/

/*Array Problem 2 - To check repeated values in Array
#include <stdio.h>
int main()
{
	int a[5]={1,1,2,3,4};
	int i=0,temp=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==a[i+1])
		{
			printf("The Value is Found\n");
			temp=1;  //Or temp++
			break;
		}
	}
	if(temp==0)
	{
		printf("The Value is not Found\n");
	}
}*/