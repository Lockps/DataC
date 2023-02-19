#include<stdio.h>

int a[]={12, 18, 24, 31, 46, 52, 68, 87, 91,0};
int s =9;
void add(int number,int index){
	for(int i = 0;i>=index;i--){
		a[i+1]=a[i];	
	}
	a[index]=number;
	s++;
}
void del(int index){
	for(int i = index ;i<s;i++){
		a[i]=a[i+1];
	}
	s--;
}
int main(){
	int choice,number,index;
	while(1){
	printf("Enter 1 to add number\n");
	printf("Enter 2 to delete number\n");
	printf("Enter 3 to show array\n");	
	printf("Enter 4 to sorting\n");
	printf("Enter 5 to exit\n");
	printf("Enter your option : ");

	scanf("%d",&choice);
	switch (choice){
		case 1 :
			printf("Enter the number do you want to add : ");
			scanf("%d",&number);
			printf("\nEnter the index to add : ");
			scanf("%d",&index);
			add(number , index);
			printf("\nadd complete\n");
			break;
		case 2 :
			printf("Enter the index do you want to delete : ");
			scanf("%d",&index);
			del(index);
			printf("\ndelete complete\n");
			break;
		case 3 :
			for(int i = 0 ;i<s;i++){
				printf("{%d} ",a[i]);
			}
			printf("\n");
			break;
		case 4:
			for(int i=0;i<s;i++){
				for(int j=i+1;j<s;j++){
					if(a[i]>a[j]){
						int samp = a[i];
						a[i]=a[j];
						a[j]=samp;
					}
				}
			}
			printf("Sorting success\n");
			break;
		case 5 :
            printf("Bye!!!\n");
			return 0;
		default:
			printf("Enter again.");
			break;
	}
}
}