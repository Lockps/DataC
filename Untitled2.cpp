#include<stdio.h>
#include<conio.h>

int  main(){
	char l[10];
	int h, i ;
	
	for(h=0 ;(l[h]=getchar())!='\n';++h);
	i=h ;
	for(h=0 ; h<i ; ++h){
		putchar(l[h]);
	}
}
