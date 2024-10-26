// struct in c
#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void accept_emp_info(struct emp *e);
void display_emp_info(const struct emp *e);
int main(void)
{  
    struct emp e1; 
    
    printf("\n Enter emp info ::\n ");
    accept_emp_info(&e1);

    printf("\n Emp info :: \n");
    display_emp_info(&e1);
    e1.sal=-10000;
    printf("\n Emp info :: \n");
    display_emp_info(&e1);
    
    printf("\n\n\n\n");
    return 0;
}
void accept_emp_info(struct emp *e)
{
    printf("\n Enter Empno 2_0=");
    scanf("%d", &e->empno);

    printf("\n Enter Emp Name =");
    scanf("%s",e->name);

    printf("\n Enter sal =");
    scanf("%f", &e->sal);
    return;
}
void display_emp_info(const struct emp *e)
{
    //e->sal=0; error as e is const
    printf("\n Empno  Name  Sal \n");
    printf("%-10d%-10s%6.2f", e->empno, e->name, e->sal);
    return ;
}
// gcc demo1.c --> a.exe windows a.out linux /mac   c prog
// g++ demo1.cpp --> a.exe windows a.out linux /mac   cpp

 


/*/#include<iostream>
using namespace std;
int main(void)
{
    int num2=4;
    int &num=num2;
    cout<<num;
}*/