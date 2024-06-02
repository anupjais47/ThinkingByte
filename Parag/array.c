#include"array.h"

/*
	Name: PARAG CHANDRA RAI
	Copyright: 
	Author: PARAG CHANDRA RAI
	Date: 02/09/19 17:59
	Description: 
*/

/*ADT for  MainMenu
Purpose:To display the menu on the screen and read choice from user.
Precoditio:None
Input:None
Output:choice(int)
Postcondition:None
*/

int MainMenu()
{
	int choice,count=0;int i, j=219;////this is for xb2
	count++;
    SetColor1(2);
    for(printf("\n\n\n \t\t\t"),i=0; i<27&&printf("%c",j); i++);
    printf("\n\t\t\t%c PLEASE ENTER YOUR CHOICE%c\n",j,j);
	SetColor1(3);
	for(printf("\t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c1--> creatation\t  %c\n",j,j);
    SetColor1(4);
    for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c2-->Insertion\t\t  \%c\n",j,j);
	SetColor1(5);
	for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c3-->Display\t\t  \%c\n",j,j);
	SetColor1(6);
	for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c4-->Search\t\t  \%c\n",j,j);
	SetColor1(7);
	for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c5-->Delete\t\t  \%c\n",j,j);
	SetColor1(9);
		for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c6-->Sort\t\t  \%c\n",j,j);
	SetColor1(10);
	for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c7-->Merge\t\t  \%c\n",j,j);
	SetColor1(11);
	
	for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c0--> Exit\t\t  \%c\n",j,j);
	SetColor1(6);
	for(printf(" \t\t\t"),i=0; i<27&&printf("%c",j); i++);
	printf("\n\t\t\t%c Enter your choice-->\t  \%c\n",j,j);
	SetColor1(5);
	for(printf("\t\t\t"),i=0; i<27&&printf("%c",j); i++);
	if(count==1)
    {
    	gotoxy(46,22);
	}
    else if (count>1)
    {

    	gotoxy(87,24);
	}
   
	while(1)
	{
	    choice=getch();
		if(choice>='0' &&  choice<'8')
		{
		    printf("%c",choice);
			break;
		}
	}
	return (choice-48);
   	
}
void cls()
{
	system("cls");
}
 
/*ADT for  CreateArray
Purpose:To create an empty array
Precoditio:None
Input:None
Output:array(ArrayType)
Postcondition:None
*/

ArrayType CreateArray()
{
	ArrayType array;
	array.length=0;
	return array;
	
}

/*
ADT for InsertMenu
purpose		: display choice menu
precondition: none
input		: none
output		: choice(int)
postcondition:none
*/

int InsertMen()
{
	int count=1;
	count++;
	int choice;int i, j=219;////this is for xb
    SetColor1(2);
    for(printf("\n\n\n \t\t\t"),i=0; i<32&&printf("%c",j); i++);
    printf("\n\t\t\t%c PLEASE ENTER YOUR CHOICE     %c\n",j,j);
	SetColor1(3);
	for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c1--> Insert at beggning       %c\n",j,j);
    SetColor1(4);
    for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c2-->Insert at End\t       %c\n",j,j);
	SetColor1(5);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c3-->Insert at desired location %c\n",j,j);
	SetColor1(6);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c4-->Insert at sorted order    %c\n",j,j);
	SetColor1(7);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c5-->back                      %c\n",j,j);
	SetColor1(3);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c0--> Exit\t\t       \%c\n",j,j);
	SetColor1(8);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c Enter your choice-->\t       %c\n",j,j);	SetColor1(5);
	for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	
    gotoxy(49,18);

   while(1)
	{
	    choice=getch();
		if(choice>='0' &&  choice<'6')
		{
		    printf("%c",choice);
			break;
		}
	}
	return (choice-48);
   	
	
	
}
int SearchMenu()
{
	
	int choice;
	int i, j=219;
	SetColor1(1);
	for(printf("\n\n\n \t\t\t"),i=0; i<32&&printf("%c",j); i++);
    printf("\n\t\t\t%c PLEASE ENTER YOUR CHOICE     %c\n",j,j);
	SetColor1(1);
	for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c1--> linera search            %c\n",j,j);
    SetColor1(1);
    for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c2--> Binary Search            %c\n",j,j);
    SetColor1(1);
    for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c3-->back                      %c\n",j,j);
	SetColor1(1);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
		printf("\n\t\t\t%c0--> Exit\t\t       \%c\n",j,j);
	SetColor1(1);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	SetColor1(1);
	while(1)
	{
	    choice=getch();
		if(choice>='0' &&  choice<'4')
		{
		    printf("%c",choice);
			break;
		}
	}
	return (choice-48);
	
}

/*
ADT for DeleteMenu
purpose		: display choice menu
precondition: none
input		: none
output		: choice(int)
postcondition:none
*/

int DeleteMenu1()
{
	
	int choice;
	int i, j=219;
	SetColor1(7);
	for(printf("\n\n\n \t\t\t"),i=0; i<32&&printf("%c",j); i++);
    printf("\n\t\t\t%c PLEASE ENTER YOUR CHOICE     %c\n",j,j);
	SetColor1(1);
	for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c1--> Delete from beggining    %c\n",j,j);
    SetColor1(2);
    for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c2--> Delete from End          %c\n",j,j);
    SetColor1(9);
    for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c3-->Delete from Element       %c\n",j,j);
    SetColor1(10);
    for(printf("\t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c4->Delete from DesiredLocation%c\n",j,j);
    SetColor1(11);
    for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	printf("\n\t\t\t%c5-->back                      %c\n",j,j);
	SetColor1(12);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
		printf("\n\t\t\t%c0--> Exit\t\t       \%c\n",j,j);
	SetColor1(13);
	for(printf(" \t\t\t"),i=0; i<32&&printf("%c",j); i++);
	SetColor1(14);
	while(1)
	{
	    choice=getch();
		if(choice>='0' &&  choice<'8')
		{
		    printf("%c",choice);
			break;
		}
	}
	return (choice-48);
	
}

int IsEmpty(ArrayType array)
{
	if(array.length==0)
	return 1;
	else
	return 0;
}

/*
ADT for Display
purpose		: to display the cotet of array
precondition: array is created
input		: array(ArrayType)
output		: none
postcondition:none
*/
void Display(ArrayType array)
{
	int i;
	if(array.length==0)
	
	{
		printf("Array is Empty");
		
	}
	else
	
	for(i=0; i<array.length; i++)
	{
		printData(array.elements[i]);
		printf("\t");
	}
}
void printData(DataType data)
{
	printf("%d\t",data.key);
}



void Terminate()
{
	cls();
	printf("thanks...");
	exit(1);
	getch();
	
}

/*
ADT for InsertAtEnd
purpose		: to insert an element at the end of array;
precondition: array is created and not full
input		: array(int), element(int), length(int)
output		: array(int), length(int)
postcondition:element inserted and length is increased by 1.
*/
ArrayType InsertAtEnd(ArrayType array, DataType element)
{
	array.elements[array.length]=element;
	array.length++;

	return array;
}

/*
ADT for InsertAtBeg
purpose		: to insert an element at the Beg of array;
precondition: array is created and not full
input		: array(int), element(int), length(int)
output		: array(int), length(int)
postcondition:element inserted and length is increased by 1.
*/
ArrayType InsertAtBeg(ArrayType array, DataType element)
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
ADT for InsertAtDesiredlocation
purpose		: to insert an element at the desired location of array;
precondition: array is created, not full and location must be valid
input		: array(ArrayType),element(DataType),int loc
output		: array (ArrayType)
postcondition:element inserted and length is increased by 1.
*/
ArrayType InsertAtDesiredlocation(ArrayType array,DataType element,int loc)
{
	int i;
	for(i=array.length;i>loc-1;i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;

	return array;
}
/* 
ADT for InsertAtSortedOrder
purpose		: to insert an element at SortedOrder;
precondition: array is created,and sorted order 
input		: array(ArrayType),element(DataType),int loc
output		: array (ArrayType)
postcondition:element inserted and length is increased by 1.
*/
ArrayType InsertAtSortedOrder(ArrayType array,DataType element)
{
	int i;
	for(i=array.length;array.elements[i-1].key>element.key&&i>0;i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;

	return array;
}
/*
ADT for liear search 
purpose		: to insert an element at the start of array;
precondition: array is created and not empty
input		: array(ArrayType), key(KeyType)
output		: status(int),element(DataType)
postcondition:none
*/
int LinearSearch(ArrayType array,KeyType key,DataType *element)
{
	int flag=-1,i;
	for(i=0;i<array.length;i++)
	{
		if(array.elements[i].key==key)
	    {
	     *element=array.elements[i];
		 flag=i;
		 break;
		}
	}
	return flag;
}

/*
ADT for  Binarysearch 
purpose		: Array should be sorted,to search an element of array;
precondition: array is created and not empty
input		: array(ArrayType), key(KeyType)
output		: status(int),element(DataType)
postcondition:none
*/

int Binarysearch(ArrayType array,KeyType key,DataType *element)
{
	int start=0,end,mid,count=0,flag=-1;
	end=array.length-1;
	while(start<=end)
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
		count++;
	}
	//printf("search count=%d \n",count);
	return flag;
	
	
}
/*
ADT for DeleteAtBeg
purpose		: to Delete an element at the beggining of array;
precondition: array is created and not empty
input		: array (ArrayType)
output		: array (ArrayType)
postcondition:element deleted and length is decreased by 1.
*/
ArrayType DeleteAtBeg(ArrayType array)
{
	int i;
	for(i=array.length-1;i>0;i--)
	{
		array.elements[i-1]=array.elements[i];
	}
     array.length--;

	return array;
	
}


/*
ADT for DeleteAtEnd
purpose		: to Delete an element at the end of array;
precondition: array is created and not empty
input		: array (ArrayType)
output		: array (ArrayType)
postcondition:element deleted and length is decreased by 1.
*/

ArrayType DeleteAtEnd(ArrayType array)
{
	array.length--;
	return array;
	
}

/*
ADT for DeleteAtElement
purpose		: to Dele te an element  of array;
precondition: array is created and not empty
input		: array (ArrayType), key(KeyType)
output		: array (ArrayType)
postcondition:element deleted and length is decreased by 1.
*/
Boolean Deletewithkey(ArrayType *array,KeyType key)
{
	Boolean flag=false;
	int i;
	for(i=0;i<array->elements;i++)
	{
		if(array->elements[i].key==key)
		{
			flag=true;
			break;
		}
		if(flag==true)
		{
			for( ;i<array->elements-1;i++)
			{
				array->elements[i]=array->elements[i+1];
			}
			
		}
	}
	(array->length)--;
	return flag;
}

/*
ArrayType Delete(ArrayType array,int index)
{
	int i;
	for(i=index;i<array.length;i++)
	{
		array.elements[i]=array.length[i+1];
	}
		array.length--;
		return array;
}
*/
ArrayType  DeleteByElement(ArrayType array,KeyType key)
{
	int i,j;
	for(i=0;i<array.length;i++)
	{
		if(array.elements[i].key==key)
		{
			for(j=i;j<array.length-1;j++)
			{
				array.elements[j]=array.elements[j+1];
			}
			array.length--;
		}
	}
	return array;
}
/*
ADT for DeleteFromDesiredLocation
purpose		: to Delete an element the of array from Desiredlocation;
precondition: array is created and not empty
input		: array (ArrayType), int loc
output		: array (ArrayType)
postcondition:element deleted and length is decreased by 1.
*/

ArrayType DeleteFromDesiredLocation(ArrayType array,int loc)
{
		int i;
	for(i=loc-1;i<array.length;i++)
	{
		array.elements[i]=array.elements[i+1];
	}

		array.length--;
	return array;
}




int Isfull(ArrayType array)
{
	int flag=0;
	if(array.length==SIZE)
	flag=1;
	return flag;
}

DataType ReadData()
{
	DataType data;
	printf("\nEnter data::>\n");
	scanf("%d",&data.key);
	return data;
	
}
void SetColor1(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}


void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



















