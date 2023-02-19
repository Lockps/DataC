#include<stdio.h>

int a=20,*b;
int main(){
	b=&a;
	printf("%p",b);
}
