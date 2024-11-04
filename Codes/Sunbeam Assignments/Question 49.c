#include<stdio.h>

struct node
{
    int head;
    struct node*n;
};

int main()
{
    struct node n;
    n.n=&n;n.n->head=3;
    printf("%d",n.head);
    return 0;
}