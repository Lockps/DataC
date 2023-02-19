#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
    /* data */
}node;

int main()
{
   node *temp,*p ;
   temp = (node *)malloc(sizeof(node));

   temp = p->next;
   free(temp);
    
    

    
}