#include<stdio.h>
//#define SIZE 5
int main()
{
        int s=0,;
        char str[0];
        printf("Enter Name :");
        scanf("%s",str);
        while(str[s]!='\0')
                {
                        s++;
                }
        printf("Words are %d \n",s);
        return 0;
}
