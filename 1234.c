 #include<stdio.h>


 struct node
 {
   int data;
    struct node * next;
    };
    typedef struct node node;
    int main()
    {
      node *n;node*temp;
      node*newnode;
      n=(node*)malloc(sizeof(node));
      n->data=12;
      n->next=(node*)malloc(sizeof(node));
      n->next->data=99;
      printf("before adding new node %d %d\n",n->data,n->next->data);
     n->next->next;

      n=(node*)malloc(sizeof(node));
      temp=n;
      newnode=(node*)malloc(sizeof(node));
      newnode->data=37;
      newnode->next=temp->next;
      temp->next=newnode;
      printf("after adding newnode %d %d %d",n->data=12,n->next->data=99,newnode->data=37);
      return 0;
      }
