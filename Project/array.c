#include"array.h"
/*
ADT			:-For menu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(int)
post		:-none
*/
char Menu()
{
	char choice;
	printf("\n MAIN MENU\n Please enter from the following options");
	printf("\n 1-->Create\n 2-->Insert\n 3-->Delete\n 4-->Short\n 5-->Search\n 6-->Display\n 7-->Exit\n Enter your choice-->");
//	scanf("%d",&choice);
	choice=getch();
	return choice;	
}
/*
ADT			:-For InsertMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(char)
post		:-none
*/
char InsertMenu()
{
	char choice;
	printf("\n INSERT MENU\n please enter from the following options");
	printf("\n 1-->Insert At Begning\n 2-->Insert At end\n 3-->Insert At SortedOrder\n 4-->Insert At Desire Location\n 5-->Display\n 6-->Back to main menu\n 7-->Exit\n Enter your choice-->");
//	scanf("%d",&choice);
	choice=getch();
	return choice;	
}
/*
ADT			:-For DeleteMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(char)
post		:-none
*/
char DeleteMenu()
{
	char choice;
	printf("\n DELETION MENU\n please enter from the following options");
	printf("\n 1-->Delete From Begning\n 2-->Delete From end\n 3-->Delete From Desire Location\n 4-->Delete from element \n 5-->Display\n 6-->Back to main menu\n 7-->Exit\n Enter your choice-->");
//	scanf("%d",&choice);
	choice=getch();
	return choice;	
}
/*
ADT			:-For SearchMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(char)
post		:-none
*/
char SearchMenu()
{
	char choice;
	printf("\n SEARCH MENU\n please enter from the following options");
	printf("\n 1-->LinearSearch\n 2-->BinarySearch\n 3-->Display\n 4-->Back to main menu\n 5-->Exit\n Enter your choice-->");
//	scanf("%d",&choice);
	choice=getch();
	return choice;	
}
/*
ADT			:-For SortMenu
purpose		:-To display and asking for choice
precondition:-none
input		:-none
output		:-choice(char)
post		:-none
*/
char SortMenu()
{
	char choice;
	printf("\n SORT MENU\n please enter from the following options");
	printf("\n 1-->Bubble Sort\n 2-->Selection Sort\n 3--> Insertion sort\n 4-->Merge sort\n 5-->Back to main menu\n 6-->Exit\n Enter your choice-->");
//	scanf("%d",&choice);
	choice=getch();
	return choice;	
}
/*
ADT			:-For craete an array
purpose		:-to create an empty array
precondition:-none
input		:-none
output		:-array(Arraytype)
post		:-an empty array is created.
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
	int flag=0;
	if(array.length==0)
	{
		flag=1;
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
/*
ADT for DeleteFromBegning
purpose		:-to delete an element from begning 
precondition:-array must be created and not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-length is decreased by one
*/
ArrayType DeleteFromBegning(ArrayType array)
{
	int i;
	for(i=0; i<array.length; i++)
	{
		array.elements[i]=array.elements[i+1];
	}
	array.length--;
	return array;
}
/*
ADT for DeleteFromEnd
purpose		:-to delete an element from end 
precondition:-array must be created and not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-length is decreased by one
*/
ArrayType DeleteFromEnd(ArrayType array)
{
	array.length--;
	return array;
}
/*
ADT for DeleteFromDesiredLocation
purpose		:-to delete an element from desired location 
precondition:-array must be created, not empty and location must be valid
input		:-array(ArrayType), location(int)
output		:-array(ArrayType)
post		:-length is decreased by one
*/
ArrayType DeleteFromDesiredLocation(ArrayType array, int location)
{
	int i;
	for(i=location; i<=array.length; i++)
	{
		array.elements[i-1]=array.elements[i];
	}
	array.length--;
	return array;
}
/*
ADT for DeleteFromElement
purpose		:-to delete an existing element from an array 
precondition:-array must be created, not empty and element is found
input		:-array(ArrayType), key(KeyType)
output		:-array(ArrayType), status(BoolType) //1 if delete 2 if not.
post		:-length is decreased by one
*/
BoolType DeleteFromElement(ArrayType *array, KeyType key)
{
	int i;
	BoolType status=0;
	i=LinearSearch(*array, key);
	if(i!=0)
	{
		i--;
		while(i<array->length-1)
		{
			array->elements[i]=array->elements[i+1];
			i++;
		}
		array->length=array->length-1;
		status=1;
	}
	return status;
}
/*
ADT for BubbleSort
purpose		:-to sort the element through bubble sort mecamism
precondition:-array must be created, not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-array is sorted
*/
ArrayType BubbleSort(ArrayType array)
{
	ElementType temp;
	int i,j,count=0;
	BoolType swap;
	for(i=0;i<array.length-1; i++)
	{
		swap=0;
		for(j=0; j<array.length-(i+1); j++)
		{
			if(array.elements[j].key>array.elements[j+1].key)
			{
				temp=array.elements[j];
				array.elements[j]=array.elements[j+1];
				array.elements[j+1]=temp;
				swap=1;
			}
//			count++;
		}
		if(swap==0)
			break;
	}
//	printf("\n %d time",count);
	return array;
}
/*
ADT for SelectionSort
purpose		:-to sort the element through selection sort mecamism
precondition:-array must be created, not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-array is sorted
*/
ArrayType SelectionSort(ArrayType array)
{
	int i,j,min;
	ElementType temp;
	for(i=0; i<array.length-1; i++)
	{
		min=i;
		for(j=i+1; j<array.length; j++)
		{
			if(array.elements[j].key<array.elements[min].key)
				min=j;
		}
		temp=array.elements[i];
		array.elements[i]=array.elements[min];
		array.elements[min]=temp;
	}
	return array;	
}
/*
ADT for InsertionSort
purpose		:-to sort the element through insertion sort mecamism
precondition:-array must be created, not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-array is sorted
*/
/*ArrayType InsertionSort(ArrayType array)
{
	int i,j,min;
	ElementType temp;
	for(i=1; i<array.length; i++)
	{
		for(j=i-1; j>=0; j--)
		{
			min=j+1;
			if(array.elements[j].key<array.elements[min].key)
				min=j;
			temp=array.elements[j];
			array.elements[j]=array.elements[min];
			array.elements[min]=temp;
		}
	}
	return array;	
}*/
ArrayType InsertionSort(ArrayType array)
{
	int i,j;
	ElementType ele;
	BoolType flag;
	for(i=1; i<array.length; i++)
	{
		ele=array.elements[i];
		j=i-1;
		flag=0;
		while(j>=0&& array.elements[j].key>ele.key)
		{
			array.elements[j+1]=array.elements[j];
			j--;
			flag=1;
		}
		if(flag==1)
			array.elements[j+1]=ele;		
	}
	return array;
}
/*
ADT for MergeSort
purpose		:-to sort the element through merge sort mecamism
precondition:-array must be created, not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-array is sorted
*/
ArrayType MergeSort(ArrayType array)
{
	M_Sort(&array,0,array.length-1);
	return array;
}
void M_Sort(ArrayType *array, int start, int end)
{
	int mid;
	if(start<end)
	{
		mid=start+(end-start)/2;//To avoid overflow. it is similsr to (start+end)/2;
		M_Sort(array,start,mid);
		M_Sort(array,mid+1,end);
		Merge(array,start,mid,end);
	}
}
void Merge(ArrayType *array, int start, int mid, int end)
{
	int i,j,k;
	ArrayType array1,array2;
	array1=CreateArray();
	array2=CreateArray();
	for(i=start;i<=mid; i++)
	{
		array1=InsertAtEnd(array1, array->elements[i]);
	}
	for(j=mid+1; j<=end; j++)
	{
		array2=InsertAtEnd(array2, array->elements[j]);
	}
	k=start;
	for(i=0,j=0; i<array1.length&&j<array2.length;)
	{
		if(array1.elements[i].key<array2.elements[j].key)
		{
			array->elements[k++]=array1.elements[i++];
//			i++;
		}
		else
		{
			array->elements[k++]=array2.elements[j++];
//			j++;
		}
	}
	while(i<array1.length)
	{
		array->elements[k++]=array1.elements[i++];
	}
	while(j<array2.length)
	{
		array->elements[k++]=array2.elements[j++];
	}
}	
/*
ADT for QuickSort
purpose		:-to sort the element through quick sort mecamism
precondition:-array must be created, not empty
input		:-array(ArrayType)
output		:-array(ArrayType)
post		:-array is sorted
*/
void QuickSort(ArrayType *array)
{
	Q_Sort(array, 0, array->length-1);
}	
void Q_Sort(ArrayType *array, int left, int right)
{
	int p_point;
	ElementType pivot;
	if(right>left)
	{
		pivot=array->elements[right];
		p_point=Partition(array, left, right, pivot);
		Q_Sort(array, left, p_point-1);
		Q_Sort(array, p_point+1, right);
	}
}
int Partition(ArrayType *array, int left, int right, ElementType pivot)
{
	int i,j;
	ElementType temp;
	i=left-1;
	j=right;
	while(1)
	{
		while(array->elements[++i].key<pivot.key)
		{}
		while(j>0&&array->elements[--j].key>pivot.key)
		{}
		if(i>=j)
			break;
		else
		{
			temp=array->elements[i];
			array->elements[i]=array->elements[j];
			array->elements[j]=temp;
		}
	}
	temp=array->elements[i];
	array->elements[i]=array->elements[right];
	array->elements[right]=temp;
	return i;
}


