/*File Handling 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
  
   fptr = fopen("d:\\disha.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}*/

/*File Handling 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("d:\\disha.txt","r")) == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }
   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}*/