#include <stdio.h>
 #include<stdlib.h>
struct studentdetails
{
    int rollno;
    char name[10];
    int mark1,mark2,mark3;
    float per;
}student[5];

void search(int x)
{
    int roll,i;
    printf("\nEnter Student's Roll no to be Searched : ");
    scanf("%d",&roll);
    printf("------------------------------------\n");
    for(i=0;i<x;i++)
    {
          if(student[i].rollno==roll)
            {
                 printf("\nName         : %s\n",student[i].name);
                 printf("\nRoll no      : %d\n",student[i].rollno);
                 printf("\nMarks 1      : %d\n",student[i].mark1);
                 printf("\nMarks 2      : %d\n",student[i].mark2);
                 printf("\nMarks 3      : %d\n",student[i].mark3);
            } 
    }
}
void modify(int x)
{
    int i;
     for(i=0;i<x;i++)
       {
            printf("-----------------------------------------");
            printf("\n\tEnter Details of Student=%d",i+1);
            printf("\n-----------------------------------------");
            printf("\nName of the student : ");
            scanf("%s",&student[i].name);
            printf("Roll no of the student   : ");
            scanf("%d",&student[i].rollno);
            printf("Marks 1 of the student  : ");
            scanf("%d",&student[i].mark1);
            printf("Marks 2 of the student  : ");
            scanf("%d",&student[i].mark2);
            printf("Marks 3 of the student  : ");
            scanf("%d",&student[i].mark3);
       }
}

 void display(int x)
  {
       int i;
       printf("\nList of All Students:\n");
       printf("-------------------------------\n");
       printf("Name \tRollno Phone_no     Marks   \n");
       printf("--------------------------------\n");
       for(i=0;i<x;i++)
       {
            printf("%s\t  %d\t  %d\t %d\n",student[i].name,student[i].rollno,student[i].mark1,student[i].mark2,student[i].mark3);
       }
       printf("\n");
  }

int main()
  {
       int n,i,ch;
       printf("How Many Student's Record You Want to Add\nEnter Limit  : ");
       scanf("\n %d",&n);
       for(i=0;i<n;i++)
       {
            printf("-----------------------------------------");
            printf("\n\tEnter Details of Student=%d",i+1);
            printf("\n-----------------------------------------");
            printf("\nName of the student : ");
            scanf("%s",&student[i].name);
            printf("Roll no of the student   : ");
            scanf("%d",&student[i].rollno);
            printf("Marks 1 of the student  : ");
            scanf("%d",&student[i].mark1);
            printf("Marks 2 of the student  : ");
            scanf("%d",&student[i].mark2);
            printf("Marks 3 of the student  : ");
            scanf("%d",&student[i].mark3);
       }
        while(1)
            {
                    printf("-----------------------------------------\n");
                    printf("----------Main Menu--------------\n");
        
                    printf("\n 1:Search Student by Roll no");
                    printf("\n 2:Modify");
                    printf("\n 3:Display all student details");
                    printf("\n 4:Display all student having percentage > 80 ");
                    printf("\n 5:Display student having maximum percentage ");
                    printf("\n 6:Exit");
                    printf("\n----------------------------------------\n");
                    printf("Enter Your Choice : ");
                    scanf("\n %d",&ch);
                    switch(ch)
                    {
                        case 1: search(n);
                        break;
                        case 2: modify(n);
                        break;
                        case 3: display(n);
                        break;
                        case 4: 
                        break;
                    }
            }
} 