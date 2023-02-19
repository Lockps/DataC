#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *link;
}node;

main(){
    node *p,*h=NULL;
    int menu;
    while(menu!=6){
        printf("Enter 1 for Add\n");
        printf("Enter 2 for Delete\n");
        printf("Enter 3 for Edit\n");
        printf("Enter 4 for Search\n");
        printf("Enter 5 for show\n");
        printf("Enter 6 for exit\n");
        printf("Enter menu :"); scanf("%d",&menu);
        switch (menu)
        {
        case 1://add
            p = (node *)malloc(sizeof(node));
            printf("Enter value : "); scanf("%d",&p->value);
            p->link=h;
            h=p;
            break;
        case 2 ://delete

            break;
        case 3 ://edit

            break;
        case 4 ://search

            break;

        case 5 ://show

            break;
        case 6 ://exit
            printf("Bye!!!\n");
            break;
        
        default:
            printf("Invalid number\n");
            break;
        }
    }
    return 0;
}