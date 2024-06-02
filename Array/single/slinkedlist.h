#include<stdio.h>
#include<stdlib.h>
typedef int DataType;
typedef struct Nodetype
{
	DataType data;
	struct Nodetype *next;
}NodeType;
typedef struct SlinkedList
{
	NodeType *start;
	int count;
}SlinkedListType;

SlinkedListType creat(void);
SlinkedListType InsertAtBeg(SlinkedListType list,DataType data);
SlinkedListType InsertAtEnd(SlinkedListType list,DataType data);
SlinkedListType InsertAtDesiredLocation(SlinkedListType list,DataType data);
void Display(SlinkedListType list);
SlinkedListType Delete(SlinkedListType list,DataType data);
SlinkedListType sorted(SlinkedListType list,DataType data);
SlinkedListType reverse(SlinkedListType list,DataType data);
