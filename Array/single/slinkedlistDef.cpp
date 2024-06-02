#include"slinkedlist.h"
int menu()
{
	int n;
	printf("*******************************************************************");
	printf("*   \nenter 1........ for creat list                              *");
	printf("*   \nenter 2........ for insert a data for first position        *");
	printf("*   \nenter 3........ for insert a data for last position         *");
	printf("*   \nenter 4........ for insert a data for desired position      *");
	printf("*   \nenter 5........ delete list                                 *");
	printf("*   \nenter 6........ exit                                        *");
	printf("*******************************************************************");
	scanf("%d",&n);
	return(n);
}

/*
	ADT for creat
	purpos:		list creat
	pre	  :		none
	input :		none
	output:		none
	post  :		list is created
	
*/
SlinkedListType creat(void)
{
	SlinkedList list;
	list.start=NULL;
	list.count=0;
	printf("\nList is created");
	return list;
}

/*
	ADT for InsertAtBeg
	purpose:		To insert element at first position
	pre    :		List is created
	input  :		List(SlinkedListType), DataType data
	output :		List
	post   :		data is inserted at first position and count is increased by 1.
*/
SlinkedListType InsertAtBeg(SlinkedListType list,DataType data)
{
	NodeType *node;
	node=(NodeType*)malloc(sizeof(NodeType));
	if(node==NULL)
	{
		printf("unfortunate error node could not be created");
		exit(0);
	}
	node->data=data;
	node->next=list.start;
	list.start=node;
	list.count++;
	return list;
}

/*
	ADT for InsertAtEnd
	purpose:		To insert element at last position
	pre    :		List is created
	input  :		List(SlinkedListType), DataType data
	output :		List
	post   :		data is inserted at Last position and count is increased by 1.
*/

SlinkedListType InsertAtEnd(SlinkedListType list,DataType data)
{
	NodeType *node,*temp;
	node=(NodeType*)malloc(sizeof(NodeType));
	if(node==NULL)
	{
		printf("unfortunate error node could not be created");
		exit(0);
	}
	temp=list.start;
	while(temp!=NULL)
	{
		temp=temp->next;
	}
	node->data=data;
	temp->next=node;
	list.count++;
	return list;
}

/*
	ADT for InsertAtDesiredLocation
	purpose:		To insert the element at the desired location
	pre    :		list is created and location in range
	input  :		list(slinkedListType), DataType data
	output :		List
	post   :		data is inserted at desired position and count is increased by 1
*/

SlinkedListType InsertAtDesiredLocation(SlinkedListType list,DataType data,int loc)
{
	NodeType *node,*temp;
	node=(NodeType*)malloc(sizeof(NodeType));
	if(node==NULL)
	{
		printf("unfortunate error node could not be created");
		exit(0);
	}
	temp=list.start;
	node->data=data;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	if(loc>=count+1)
	{
		printf("\nDesired position is out of range");
		exit(0);
	}
	if(loc==1)
		SlinkedListType InsertAtBeg(SlinkedListType list,DataType data);
	else if(temp==NULL)
	   SlinkedListType InsertAtEnd(SlinkedListType list,DataType data);
	else
	{
		temp=list.start;
		for(int i=1;i<loc-1 && temp!=NULL;i++)
		{
			temp=temp->next;
		}
		node->next=temp;
		temp->next=node;
		return list;
	}
}

/*
	ADT for Display
	purpose:		Display the list
	pre    :		List is created
	input  :		List(SlinkedListType)
	output :		none
	post   :		data is displayed the screan
*/

void Display(SlinkedListType list)
{
	NodeType *temp;
	if(list.start==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		temp=list.start;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	while(1)
	{
	    switch(n)
	 	{
			case1:
				printf("creat");
			break;
		case2:
			printf("insertAtBeg");
			break;
		case3:
			printf("insertAtEnd");
			break;
		case4:
			printf("insertAtDesiredLocation");
			break;
		case5:
			printf("getpred");
			break;
		case6:
			printf("insertAtSortedOrder");
			break;
		case7:
			printf("sort");
			break;
		defult:
			printf("wrong choice");
	  }
	return 0;
}*/
