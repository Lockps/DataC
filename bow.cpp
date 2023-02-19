#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int value; //data
    struct list *link; //link
}list; //nick_name

int main(int argc, char const *argv[])
{
    list *p,*h=NULL,*d; //pointer_varr
    int choice=0,s=NULL; //condition_for_exit
    while (choice!=4) //loop_for_choose
    {
        printf("Enter 1 for add data \n");
        printf("Enter 2 for delete data \n");
        printf("Enter 3 for show data \n");
        printf("Enter 4 for exit\n");
        printf("\nselect your choice : "); scanf("%d",&choice); //choose
        switch (choice) //activate_condition
        {
        case 1: //add
            p = (list *)malloc(sizeof(list)); //reserve_Ram
            printf("Enter data : "); scanf("%d",&p->value); //add_data
            p->link=h; //link_to_another_pointer
            h=p; //link_next_node
            printf("\nAdd successful!!\n");
            break;

        case 2 : //delete
            printf("Enter data to delete : "); scanf("%d",&s); //add data to delete
            p=h; //select pointer to check linked list
            while (p!=NULL && p->value!=s) //check utill found s
            {
                d=p; //d = node before node to delete
                p=p->link; //check next node
            }
            if (p==NULL) printf("Data not found\n"); //last node (p->link) is NULL if p=NULL mean doesn't have that input data(s)
            else//if can found
            {
                d->link=p->link; // d is before node and link to next node to delete this node like 1 2 3 if delete 2 mean 1 link to 3
                free(p); //free memmory
                printf("\nDelete successful!!\n"); 
            }
            break;

        case 3 : //show
            p=h; //selection
            while (p!=NULL)
            {
                printf("{%d} ",p->value);
                p=p->link;
            }
            printf("\n\nShow successful!!\n\n");
            break;

        case 4 : //exit
            printf("Bye!!!\n");
            break;        

        default:
            printf("Enter again!!\n");
            break;
        }
    }
        
    return 0;
}

