#include"slinkedlist.h"
#include"slinkedlistDef.h"
int main()
{
	while(1)
	{
		switch(menu(int n))
		{
			case 1:
				SlinkedListType creat(void);
				break;
			case 2:
				SlinkedListType InsertAtBeg(SlinkedListType list,DataType data);
				break;
			case 3:
				SlinkedListType InsertAtEnd(SlinkedListType list,DataType data);
				break;
			case 4:
				SlinkedListType InsertAtDesiredLocation(SlinkedListType list,DataType data);
				break;
			case 5:
				void Display(SlinkedListType list);
				break;
			case 6:
				SlinkedListType Delete(SlinkedListType list,DataType data);
				break;
			case 7:
				SlinkedListType sorted(SlinkedListType list,DataType data);
				break;
			case 8:
				SlinkedListType reverse(SlinkedListType list,DataType data);
				break;
			case 9:
				exit(1);
				break;
			default:
				printf("wrong choice");
		}
	}
	return 0;
}
