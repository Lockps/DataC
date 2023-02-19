#include<stdio.h>

int main(){
	int a[10]={93,5,26,1,90,7,54,8};
	int b[10]={23,50,6,1,9,67,4,48};
	int c[10]={13,75,6,16,29,7,4,81};
 	int d[10]={32,5,64,71,59,7,44,8};
	int *ptr[4];
	ptr[0]=a;
	ptr[1]=b;
	ptr[2]=c;
	ptr[3]=d;
	for(int i = 0; i<4; i++){
		for(int j = 0;j<8;j++){
			printf("%d\n",*ptr[i]++);
	}
	
	}
}
