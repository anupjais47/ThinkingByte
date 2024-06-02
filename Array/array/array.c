#include"array.h"
int MainMenu()
{
	int choice;
	printf("\n Enter 0---> exit\n\t1--->Create Array\n \t 2---> Insert\n \t3---> to display\n\t4--> linear Search \n\t 5---> Binary Search\n Enter your choice  : ");
	scanf("%d",&choice);
	return choice;
}
int InsertMenu()
{
	int choice;
	printf("\n Enter 1--->at end \n\t2--->at beging\n\t3---> desired location\n \t4----> sorted order\n\t5--->back\n\t0---> exit\n\tEnter your choice  : ");
	scanf("%d",&choice);
	return choice;
}
int SearchMenu()
{
	int choice;
	printf("\n Enter 1--->Linear Search \n\t2--->Binary Search\n\t\n\t5--->back\n\t0---> exit\n\tEnter your choice  : ");
	scanf("%d",&choice);
	return choice;
}
/* ADT for create array
purpose:TO create an empty array
precondition:none
imput:none
output:array[array type]
post condition:none

*/
ArrayType CreateArray()
{
	ArrayType array;
	array.length=0;
	return array;
}
/*ADT for insert an end
purpose:to  insert at end
precondition:array is created & array is full.
input: array[Arraytype],element[datatype].
output:array[ArrayType]
post condition:Length is incresed by 1.
complexity:o(1)

*/
void InsertAtEnd(ArrayType *array,DataType data)
{
	array->elements[array->length]=data;
	array->length=array->length+1;
}
/* ADT for IsFull
purpose:To array is isfull
precondition:
input:
output:None
postcondition:None
*/
BooleanType IsFull(ArrayType array)
{
	BooleanType flag=false;
	if(array.length==SIZE)
	    flag=true;
        return flag;
}
void ReadData(DataType *data)
{
	printf("\n Enter data");
	scanf("%d",data);
}
/*ADT for Display
purpose: TO disply an array.
preccondition: array is created.
input:Array (ArrayType)
output:None
post condition:None
*/
void Display(ArrayType array)
{
	int i;
	if(array.length==0)
	{
		printf("Array is Empty");
	}
	else
	{
		for(i=0;i<array.length;i++)
		{
			printData(array.elements[i]);
		}
        }
		

}
void printData(DataType data)
{

 printf("%d\n",data.key);
  }
/*ADT for Insertbeging
purpose:to  element inserted at beging.
precondition:array is created & array is full.
input: array[Arraytype],element[datatype].
output:array[ArrayType]
post condition:Length is incresed by 1.
complexity:-o(n)

*/
void InsertAtBeg(ArrayType *array,DataType data)
{
	int i;
	for(i=array->length;i>0;i--)
	{
		array->elements[i]=array->elements[i-1];	
        }
	array->elements[i]=data;
	array->length=array->length+1;
}
/*
ADT for sorted order
purpose:to  element inserted at sortedorder
precondition:array is created & array is not full.
input: array[Arraytype],element[datatype].
output:array[ArrayType]
post condition:Length is incresed by 0.
complexity:-o(n)

*/
void InsertAtSortedOrder(ArrayType *array,DataType data)
{
	int i;
	for(i=array->length;i>0;i--)
	{
		if(array->elements[i-1].key>data.key)
		{
		
			array->elements[i]=array->elements[i-1];
	        }
	        else
	        {
	        	break;
		}
        }
	array->elements[i]=data;
	array->length=array->length+1;
	
	
}
void InsertAtDesiredLocation(ArrayType *array,DataType data ,int loc)
{
	int i;
	for(i=array->length;i>loc-1;i--)
	{
		if(array->elements[i-1].key>data.key)
		{
		
			array->elements[i]=array->elements[i-1];
	       
	        }
	        else
	        {
	        	break;
		}
        }
	array->elements[i]=data;
	array->length=array->length+1;
}
/*purpose:to  element search in array
precondition:array is created & array is not full.
input: array[Arraytype],key[keytype].
output:location[int]
post condition:none
complexity:-o(n)
*/
int LinearSearch(ArrayType array,KeyType key)
{
	int i;
	for(i=0;i<array.length;i++)
	{
		if(array.elements[i].key==key)
		break;
	}
	if(i==array.length)
	{
	
	  i=-1;
	}
	return i;
}
int BinarySearch(ArrayType array,KeyType key)
{
	int start,end,mid;
	start=0;
	end=array.length-1;
	while(start<=end)
	{
		mid=(start+ end)/2;
		if(array.elements[mid].key==key)
		{
			break;
		}
		else if(array.elements[mid].key >key)
		{
			end=mid-1;
			
		}
		else
		{
			start=mid+1;
		}
		
	}
	if(start>end)
	{
		mid=-1;
	}
	return mid;	

}








