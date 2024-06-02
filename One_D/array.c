#include"array.h"
/*
ADT			:-For menu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(int)
post		:-none
*/
int Menu()
{
	int choice;
	printf("\n please enter from the following options");
	
	printf("\n 1-->For Create\n 2-->Insert\n 3-->Delete\n 4-->Short\n 5-->Search\n 6-->Display\n 7-->Exit\n Enter your choice-->");
	scanf("%d",&choice);
	return choice;	
}
/*
ADT			:-For InsertMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(int)
post		:-none
*/
int InsertMenu()
{
	int choice;
	printf("\n please enter from the following options");
	printf("\n 1-->For InsertAtBegning\n 2-->InsertAtend\n 3-->InsertAtSortedOrder\n 4-->InsertAtDesire Location\n 5-->Display\n 6-->back\n 7-->Exit\n Enter your choice-->");
	scanf("%d",&choice);
	return choice;	
}
/*
ADT			:-For DeleteMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(int)
post		:-none
*/
int DeleteMenu()
{
	int choice;
	printf("\n please enter from the following options");
	printf("\n 1-->For DeleteAtBegning\n 2-->DeleteAtend\n 3-->InserttAtDesire Location\n 4-->Display\n 5-->back\n 7-->Exit\n Enter your choice-->");
	scanf("%d",&choice);
	return choice;	
}
/*
ADT			:-For SearchMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(int)
post		:-none
*/
int SearchMenu()
{
	int choice;
	printf("\n please enter from the following options");
	printf("\n 1-->For LinearSearch\n 2-->BinarySearch\n 3-->Display\n 4-->back\n 5-->Exit\n Enter your choice-->");
	scanf("%d",&choice);
	return choice;	
}
/*
ADT			:-For craete an array
purpose		:-to create an empty array
precondition:-none
input		:-none
output		:-array(Arraytype)
post		:-an emopty arry is created and increased.
*/
ArrayType CreateArray()
{
	ArrayType array;
	array.length=0;
	return array;
}
/*
ADT for isfull
purpose		:-to check array is full or not
precondition:-array must be created
input		:-array(Arraytype)
output		:-status
post		:-none
*/
int isfull(ArrayType array)
{
	int flag=0;
	if(SIZE==array.length)
	{
		flag=1;
	}
	return flag;
}
/*ADT for isempty
purpose		:-to check array is isempty
precondition:-array must be created
input		:-array(Arraytype)
output		:-status
post		:-none
*/
int isempty(ArrayType array)
{
	int flag=1;
	if(array.length==0)
	{
		flag=0;
	}
	return flag;
}
/*
ADT for Display
purpose		:-to display array elements
precondition:-array must be created and not empty
input		:-array(Arraytype)
output		:-array(ArrayType)
post		:-none
*/
void Display(ArrayType array)
{
	int i;
	printf("\n Enements of array are: ");
	for(i=0;i<array.length;i++)
	{
		printf(" %d ",array.elements[i].key);
	}
	printf("\n");
}
/*
ADT for InsertAtEnd
purpose		:-to insert an element at end of the array
precondition:-array must be created and not full
input		:-array(ArrayType), element(ElementType)
output		:-array(Arraytype)
post		:-length is increased by one.
*/
ArrayType InsertAtEnd(ArrayType array,ElementType element)
{
	array.elements[array.length]=element;
	array.length++;
	return array;
}
/*
ADT for InsertAtBegning
purpose		:-to insert an element at begning of the array
precondition:-array must be created and not full
input		:-array(ArrayType), element(ElementType)
output		:-array(Arraytype)
post		:-length is increased by one.
*/
ArrayType InsertAtBegning(ArrayType array,ElementType element)
{
	int i;
	for(i=array.length;i>0;i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;
	return array;
}
/*
ADT for InsertAtSortedOrder
purpose		:-to insert an element at sorted order of the array
precondition:-array must be created and not full
input		:-array(ArrayType), element(ElementType)
output		:-array(Arraytype)
post		:-element is inserted length is increased by one.
*/
ArrayType InsertAtSortedOrder(ArrayType array,ElementType element)
{
	int i;
	for(i=array.length-1; i>=0&&(array.elements[i].key>element.key); i--)
	{
		array.elements[i+1]=array.elements[i];
	}
	array.elements[i+1]=element;
	array.length++;
	return array;
}
/*
ADT for InsertAtDesidedLocation
purpose		:-to insert an element at desired position of the array
precondition:-array must be created, not full and location must be valid
input		:-array(ArrayType), element(ElementType), location(int)
output		:-array(Arraytype)
post		:-element is inserted and length is increased by one.
*/
ArrayType InsertAtDesiredLocation(ArrayType array,ElementType element, int location)
{
	int i;
	for(i=array.length;i>location-1;i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;
	return array;
}
/*
ADT for LinearSearch
purpose		:-to search an element linearly 
precondition:-array must be created
input		:-array(ArrayType), key(KeyType)
output		:-location(int),//location is 0 if not found otherwise location.
post		:-none
*/
int LinearSearch(ArrayType array, KeyType key)
{
	int i;
	while(i<array.length)
	{
		if(array.elements[i].key==key)
		{
			break;
		}
		i++;
	}
	if(i==array.length)
	{
		i=-1;
	}
	return i+1;
}
/*
ADT for GetElement
purpose		:-to get an element from array
precondition:-element is found
input		:-array(ArrayType), location(int)
output		:-elements(ElementType)
post		:-none
*/
ElementType GetElement(ArrayType array, int location)
{
	return array.elements[location-1];
}
/*
ADT for BinarySearch
purpose		:-to search an element to binary 
precondition:-array must be created and sorted
input		:-array(ArrayType), key(KeyType)
output		:-location(int),//location is 0 if not found otherwise location.
post		:-none
*/
int BinarySearch(ArrayType array, KeyType key)
{
	int start=0;
	int end=array.length-1;
	int mid;
	if(end>=0)
	{
		while(start<=end)
		{
			mid=(start+end)/2;
			if(array.elements[mid].key==key)
			{
				break;
			}
			else
			{
				if(array.elements[mid].key>key)
				{
					end=mid-1;
				}
				else
				{
					start=mid+1;
				}
			}
		}
		if(start>end)
		{
			mid=0;
		}
		else
		{
			mid=mid+1;
		}
	}
	return mid;
}





