#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int data;
    struct list *link;
    /* data */
}list;

int main(int argc, char const *argv[])
{
    list *a,*p=NULL,*d;
    int choice=0;
    int s,i=1;
    while (choice!=8)
    {
        printf("Enter 1 for add data on top(stack)\n"); 
        printf("Enter 2 for insert data to linked-list\n"); 
        printf("Enter 3 for add data bottom(queue)\n"); 
        printf("Enter 4 for show data\n"); 
        printf("Enter 5 for delete \n");
        printf("Enter 6 for search\n");
        printf("Enter 7 for edit\n");
        printf("Enter 8 for exit\n"); 
        printf("Enter your choice : "); scanf("%d",&choice);

        switch (choice)
        {
        case 1 : //stack
            a = (list *)malloc(sizeof(list)); //จอง
            printf("Enter value : "); scanf("%d",&a->data);
            a->link=p;
            p=a;
            printf("Stack successful!\n");
            break;
        case 2 : //insert
            d= (list *)malloc(sizeof(list));
            printf("Enter value : "); scanf("%d",&d->data);
            printf("Insert position :"); scanf("%d",&i);
            a=p;
            for (size_t j = 1; j < i-1; j++)
            {
                printf("aasd");
                a=a->link;
            }
            if(a==NULL) printf("Invalid position!\n");
            else{
                d->link=a->link;
                a->link=d;
                printf("Insert complete!\n");
            }
            break;
        case 3 : //queue
            a=p;
            while (a->link!=NULL)
            {
                a=a->link;
            }
            d = (list *)malloc(sizeof(list));
            a->link=d;
            printf("Enter value : "); scanf("%d",&d->data);
            d->link=NULL;
            break;
        case 4 : //show
            a=p;
            while (a!=NULL)
            {
                printf("{%d} ",a->data);
                a=a->link;
            }
            printf("\nShow successful!\n");
            break;
        case 5 : //delete
            a=p;
            printf("Enter number to delete :"); scanf("%d",&s);
            while (a!=NULL && a->data!=s)
            {
                d=a;
                a=a->link;
            }
            if(a==NULL) printf("Data not found!\n");
            else{
                d->link=a->link;
                free(a);
                printf("\nDelete Complete!\n");
            }            
            break;
        case 6 : //search
            s=NULL,i=1;
            a=p;
            printf("Enter value for search : "); scanf("%d",&s);
            while (a !=NULL&& a->data!=s)
            {
                a=a->link;
                i++;
                /* code */
            }
            if(a==NULL) printf("Doesn't have data\n");
            else printf("Yes, %d is in position %d\n",s,i);
            break;
        case 7: //edit
            s=NULL,i=NULL;
            a=p;
            printf("Enter value for edit : "); scanf("%d",&s);
            while (a !=NULL&& a->data!=s)
            {
                a=a->link;
            }
            if(a==NULL) printf("Doesn't have data\n");
            else {
                printf("Enter number to edit : "); scanf("%d",&a->data);
                printf("Edit complete!!\n");
            }
            break;
        case 8 : //exit
            printf("Bye!!\n");
            break;
        default:
            printf("Invalid number,Try again.\n");
            break;
        }
    }    
    return 0;
}