#include<stdio.h>
#define SIZE 10

int binary_search(int *p,int key)
{
    int low=0,mid,high=SIZE-1;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(*(p+mid)==key)
            return mid;
        else if(key > *(p+mid))
            low = mid + 1;
        else if(key < *(p+mid))
            high = mid - 1;    
    }
    return -1; //if key is not present
}

int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99,100};
    int key,index;
    printf("Specify a key value to search\n");
    scanf("%d",&key);

    index = binary_search(arr,key);

    if(index == -1)
        printf("%d key is not present \n",key);
    else
    {
        printf("%d key is present at %d index location \n",key,index);
    }

} 