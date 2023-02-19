#include<stdio.h>

int main()
{
    char word[15]={'s','u','u','r','c','r','t','a','e','a','t','D','t','_',' '},out[14];
    int index[15]={6,3,4,8,12,2,5,13,14,10,7,9,1,0},first;

    printf("Add first element : "); scanf("%d",&first);

    for (size_t i = 0; i < 14 ; i++)
    {
        out[i]=word[first];
        first=index[first];
        printf("%c",out[i]);
    } 
}