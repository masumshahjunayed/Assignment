#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *n,*newNode,*nodenext;
};
typedef struct node node;
int main()
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->data = 12;
    p->newNode =(node*)malloc(sizeof(node));
    p->newNode->data = 37;
    printf("before adding newnode:\n%d\n%d\n",p->data,p->newNode->data);
    p->newNode->nodenext =(node*)malloc(sizeof(node));
    p->newNode->nodenext->data = 99;
    printf("after adding newnode:\n%d\n%d\n%d\n", p->data,p->newNode->data,p->newNode->nodenext->data);
    return 0;
}
