#include<stdio.h>
int main()
{
    char ch;
    int i;
    for(i=0; i<256; i++)
    {
        printf("Valude %c of ASCII is %d\n",i,i);    
    }
    /*printf("Enter the character to find ASCII : ");
    scanf("%c",&ch);
    printf("Valude %c of ASCII is %d\n",ch,ch);*/
    return 0; 
}