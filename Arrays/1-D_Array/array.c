#include"array.h"
//int i,j=178;
void cls()
{
	system("clear");
}
void invalid()
{
	cls();
	//int create=0;
	printf("\aInvalid Option😊️😊️😊️ \n");
}
void Terminate()
{
	cls();
	Star();
	printf("*");
	printf("\n\t\t| Thank You for Using My Program | ");
	Hyphen();
	printf("-");
	printf("\n\t\t|\t Visit Again..😊️😊️😊️\t | ");
	Star();
	printf("*\n");
	exit(0);
}
void Star()
{
	int i;
	printf("\n\t\t");
	for(i=0; i<33; i++)
	printf("*");
}
void Hyphen()
{
	int i;
	printf("\n\t\t");
	printf(" ");
	for(i=0; i<31; i++)
	printf("-");
}
void Namaste()
{
	int i;
	printf("\n\t\t|\t");
	for(i=0; i<10; i++)
	{
		printf("🙏️");
	}
	printf("\t| \n");
}
void Successful()
{
	printf("Insertion Successful. \n");
}
void Full()
{
	printf("Array is FULL 🤩️🤩️🤩️🤩️🤩️");
	//count=0;
}
void NotCreated()
{
	printf("\a Sorry Array is not Created.🙃️🙃️🙃️🙃️ \n");
}
void DisplayArray(ArrayType array)
{
	int i;
	if(array.length==0)
		printf("Empty Array😊️😊️😊️ \n");
	else
	{
		for(i=0; i<array.length; i++)
		{
			PrintData(array.elements[i]);
			printf("  ");
		}
	}
	printf("\n");
}
void PrintData(DataType data)
{
	printf("%d\t",data.key);
}

void Welcome()
{
	Star();
	printf("\n\t\t|\tWELCOME TO MY PROGRAM\t| ");
	Hyphen();
	Namaste();
	Hyphen();
	printf("\n\t\t|\t Choose Your Option\t| ");
	Star();
}
int MainMenu()
{
	//cls();
	int choice;
	Welcome();
	//for(i=0; i<10; i++)
	//{
		//printf("%c\n",j);
		printf("\n\t\t 1. Create \n\t\t 2. Insert \n\t\t 3. Display \n\t\t 4. Search \n\t\t 5. Delete \n\t\t 6. Sort \n\t\t 7. Merge \n\t\t 0. EXIT \n\t\t\t\t ________ \n\t\t\t\t|");
		//printf("  ");
		printf("  ");
		scanf("%d",&choice);
	//}
	
	return choice;
	
}

int InsertMenu()
{
	int choiceI;
	printf("\n 1. Insert At Begining \n 2. Insert At End \n 3. Insert At Desired Location \n 4. Insert in Sorted Order \n 5. Back \n 0. EXIT \n\t\t :: ");
	scanf("%d",&choiceI);
	return choiceI;
}
int SearchMenu()
{
	int choice;
	printf("\n 1. Linear Search \n 2. Binary Search \n 3. SEARCH \n 5. Back \n 0. EXIT \n\t\t ______ \n\t\t|");
	printf("  ");
	scanf("%d",&choice);
	return choice;
}
int Sort()
{
	int choice;
	0printf("\n");
	scanf("%d",&choice);
	return choice;
}
ArrayType ArrayCreation()
{
	ArrayType array;
	array.length=0;
	return array;
}
DataType ReadData()
{
	DataType data;
	printf("\n Enter data : ");
	scanf("%d",&data.key);
	return data;
	
}
/*
ArrayType InsertAtBeg(ArrayType array,DataType element)
{
	int i;
	for(i=array.length; i>0; i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;
	return array;
}
ArrayType InsertAtEnd(ArrayType array,DataType element)
{
	
	array.elements[array.length]=element;
	array.length++;
	return array;
}
ArrayType InsertInSortedOrder(ArrayType array,DataType element)
{
	int i;
	for(i=array.length; array.elements[i-1].key>element.key && i>0; i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;
	return array;
}
ArrayType Delete(ArrayType array,int index)
{
	int i;
	for(i=index; i<array.length-1; i++)
	{
		array.elements[i]=array.elements[i+1];
	}
	array.length--;
	return array;
}
Boolean DeleteWithKey(ArrayType *array,KeyType key)
{
	Boolean flag=FALSE;
	int i;
	for(i=0; i<array->length; i++)
	{
		if(array->elements[i].key==key)
		{
			flag=TRUE;
			break;
		}
	}
	if(flag==TRUE)
	{
		for( ; array->length-1; i++)
		{
			array->elements[i]=array->elements[i+1];
		}
		
	}
	(array->length)--;
	return flag;
}

int IsFull(ArrayType array)
{
	int flag=0;
	if(array.length==SIZE)
		flag=1;
	return flag;
}
int LinearSearch(ArrayType array,KeyType key,DataType *element)
{
	int flag=-1,i;
	for(i=0; i<array.length; i++)
	{
		if(array.elements[i].key==key)
		{
			*element=array.elements[i];
			flag=i;
			break;
		}
		else
		{
			printf("\a Sorry Wrong Data. \n");
			DisplayArray(array);
		}
	}
	return flag;
}
/*
	Name of Author		:- 
	Date of Creation	:-
	Date of Modification	:-
	Regards			:-
	Source of Modification	:-
	
	ADT for 
	
	Purpose		:-
	Pre-Condition	:-Array Must be Sorted.
	Input		:-
	Output		:-
	Post-Condition	:-
*
int BinarySearch(ArrayType array,KeyType key,DataType *element)
{
	int flag=-1,start=0,end,mid;
	end=array.length-1;
	while(start<=end)
	//for(i=0; i<array.length; i++)
	{
		mid=start+(end-start)/2;
		
		if(array.elements[mid].key==key)
		{
			*element=array.elements[mid];
			flag=mid;
			break;
		}
		else if(array.elements[mid].key>key)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		{
			printf("\a Sorry Wrong Data. \n");
			DisplayArray(array);
		}
	}
	return flag;
}*/
int IsEmpty(ArrayType array)
{
	if(array.length==0)
		return 1;
	else
		return 0;
}

/*ArrayType array;
DataType data;
KeyType key;*/
/*ADT fr BubbleSort
Purose :- To Sort the given array through Bubblesort Mechanism
Precondition :- Array is created and not empty
Input :- array(ArayType)
Output :- array(ArayType)
Post :- array is sorted
*/
void BubbleSort(ArrayType *array)
{
	int i,j,swap=0;
	DataType temp;
	fori(i=0; i<array->length-1; i++)
	{
		swap=0;
		for(j=0; j<array->length-i-1; i++)
		{
			if(array->elements[j].key>array->elements[j+1].key)
			{
				temp=array->elements[j];
				array->elements[j]=array->elements[j+1];
				array->elements[j+1]=temp;
				swap=1;
			}
		}
		if(swap==0)
		break;
	}
	
}
/*ADT fr SelectionSort
Purose :- To Sort the given array through SelectionSort Mechanism
Precondition :- Array is created and not empty
Input :- array(ArayType)
Output :- array(ArayType)
Post :- array is sorted
*/
void SelectionSort(ArrayType *array)
{
	int i,j,min=0;
	DataType temp;
	fori(i=0; i<array->length; i++)
	{
		min=i;
		swap=0;
		for(j=i+1; j<array->length-i; i++)
		{
			if(array->elements[j].key>array->elements[min].key)
				min=j;
		}
		if(i!=min)
		{
			
			temp=array->elements[j];
			array->elements[j]=array->elements[min];
			array->elements[min]=temp;
		}
		
	}
	
}
