
#include"array.h"
//int i,j=178;
/*int get_int(int *px)
{
	scanf("%d",px);
	while (!scanf("%d",px)&& !isspace()&& getchar()!= '\n')
	{
	printf("Please enter an integer value:"); 
	}

}
int Only(int argc, const char *argv[])
{
	int x,i;
	printf("Enter a number Only : \n");
	getchar();
	get_int(&x);
	for (i=0; i <20; i++)
	printf("You input the value: %d\n",x);
	getchar();
	//fflush(stdin);
}*/
void cls()
{
	system("clear");
}

void Light_Red()
{
	printf("\033[91;31m");
}
void Green()
{
	printf("\033[91;32m");
}
void Blinking_Red()
{
	printf("\033[91;5m");
}
void Underline_Red()
{
	printf("\033[91;4m");
}
void Light_Green()
{
	printf("\033[91;36m");
}
void Bold_Red()
{
	printf("\033[91;1m");
}
void Double_Underline_Red2()
{
	printf("\033[91;21m");
}
void Itallic_Red()
{
	printf("\033[91;3m");
}
void Pinck()
{
	printf("\033[91;35m");
}
void Red_Hilight_Black()
{
	printf("\033[91;7m");
}
void Blue()
{
	printf("\033[91;34m");
}
void Yellow()
{
	printf("\033[91;33m");
}
void Red()
{
	printf("\033[91;6m");
}
void Star()
{
	int i;
	Light_Red();
	printf("\n\t\t");
	for(i=0; i<36; i++)
	{
		printf("*");
	}
}
void Hyphen()
{
	int i;
	printf("\n\t\t");
	printf(" ");
	Blinking_Red();
	for(i=0; i<34; i++)
	{
		printf("-");
	}
	printf("\033[0m");
	printf(" ");
}
void Namaste()
{
	int i;
	Bold_Red();
	printf("\n\t\t|\t");
	Red_Hilight_Black();
	for(i=0; i<10; i++)
	{
		printf("🙏️");
	}
	printf("\033[0m");
	Bold_Red();
	printf("\t   |\n");
}
void Welcome()
{
	
	Star();
	Green();
	printf("\n\t\t|\tWELCOME TO MY PROGRAM\t   |");
	//printf("\033[0m");
	Hyphen();
	Namaste();
	printf("\033[0m");
	Hyphen();
	Light_Green();
	printf("\n\t\t|\t Choose Your Option\t   |");
	printf("\033[0m");
	Star();
}
void ChooseOption()
{
	Double_Underline_Red2();
	printf("\nEnter The Choosen Option : ");
	//Red_Hilight_Black();
	printf("\033[0m");
	printf("________\n\t\t\t  |");
	printf("  ");
}
void Invalid()
{
	cls();
	Bold_Red();
	printf("\aInvalid Option😊️😊️😊️ \n");
	printf("\033[0m");
}
void Terminate()
{
	cls();
	Star();
	//printf("*");
	Pinck();
	printf("\n\t\t|  Thank You for Using My Program  |");
	Hyphen();
	//printf("-");
	Pinck();
	printf("\n\t\t|\t Visit Again..😊️😊️😊️\t   |");
	Star();
	printf("\n");
	printf("\033[0m");
	exit(0);
}

void NotCreated()
{
	Bold_Red();
	printf("\a Sorry Array is not Created.🙃️🙃️🙃️🙃️ \n");
	printf("\033[0m");
}
void Full()
{
	printf("\062[1;5m");
	printf("Array is FULL 🤩️🤩️🤩️🤩️🤩️\n");
	//count=0;
}
void DisplayArray(ArrayType array)
{
	int i;
	Bold_Red();
	if(array.length==0)
		printf("\a Empty Array😊️😊️😊️ \n");
	else
	{
		for(i=0; i<array.length; i++)
		{
			PrintData(array.elements[i]);
			printf("  ");
		}
	}
	printf("\033[0m");
	printf("\n");
}
void PrintData(DataType data)
{
	//printf("%d\t",data.key);
	printf("Name : %s \n",data.name);
	getchar();
	printf("Roll : %d \n",data.roll);
	printf("Marks : %f \n",data.marks);
}


int MainMenu()
{
	
	int choice;
	Welcome();
	Pinck();
	printf("\n\t\t 1. Create \n\t\t 2. Insert \n\t\t 3. Display \n\t\t 4. Search \n\t\t 5. Delete \n\t\t 6. Sort \n\t\t 7. Merge \n\t\t 0. EXIT \n");
	ChooseOption();
	scanf("%d",&choice);
	printf("\033[0m");
	return choice;
}
int InsertMenu()
{
	int choiceI;
	Blue();
	printf("\n 1. Insert At Begining \n 2. Insert At End \n 3. Insert in Sorted Order \n 4. Insert At Desired Location \n 5. Back \n 0. EXIT \n");
	ChooseOption();
	scanf("%d",&choiceI);
	return choiceI;
}
int SearchMenu()
{
	int choice;
	Yellow();
	printf("\t 1. Linear Search \n\t 2. Binary Search \n\t 3. Search \n\t 4. Back \n\t 0. EXIT \n");
	ChooseOption();
	scanf("%d",&choice);
	return choice;
}
int SortMenu()
{
	int choice;
	Blue();
	printf("\n 1. Merge Sort \n 2. Bubble Sort \n 3. Selection Sort \n 4. Insertion Sort \n 5. Quick Sort \n 6. Radix Sort \n 7. Shell Sort \n 8. Heap Sort \n 9. Tree Sort \n 11. Back \n 0. EXIT \n");
	ChooseOption();
	scanf("%d",&choice);
	return choice;
	
}
int DeleteMenu()
{
	int choice;
	Red();	
	printf("\t 1. Delete from Begining \n\t 2. Delete from End \n\t 3. Delete from Desired Location \n\t 4. Delete an Element \n\t 5. Back \n\t 0. EXIT \n");
	ChooseOption();
	scanf("%d",&choice);
	return choice;	
}
int IsFull(ArrayType array)
{
	int flag=0;
	if(array.length==SIZE)
		flag=1;
	return flag;
}
int IsEmpty(ArrayType array)
{
	if(array.length==0)
		return 1;
	else
		return 0;
}

/*DataType ReadData()
{
	DataType data;
	printf("\n Enter data : ");
	scanf("%d",&data.key);
	return data;
	
}*/
DataType ReadData()
{
	DataType data;
	printf("Roll Number : ");
	scanf("%d",&data.key);
	printf("Name of the Student : ");
	scanf("%s",&data.name);
	getchar();
	printf("Marks : ");
	scanf("%s",&data.marks);
}
ArrayType ArrayCreation()
{
	ArrayType array;
	array.length=0;
	return array;
}


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
ArrayType InsertAtEnd(ArrayType array, DataType element)
{
	array.elements[array.length]=element;
	array.length++;

	return array;
}
ArrayType InsertAtDesiredLocation(ArrayType array,DataType element,int loc)
{
	int i;
	for(i=array.length; i>loc-1; i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;

	return array;
}
ArrayType InsertInSortedOrder(ArrayType array,DataType element)
{
	int i;
	for(i=array.length; array.elements[i-1].key>element.key&&i>0; i--)
	{
		array.elements[i]=array.elements[i-1];
	}
	array.elements[i]=element;
	array.length++;

	return array;
}
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

void BubbleSort(ArrayType *array)
{
	int i,j,Swap=0;
   DataType temp;
	for(i=0; i < array->length-1 ;i++)
	{
		Swap = 0;
		for(j=0; j<array->length-1-i; j++)
		{
			if(array->elements[j].key > array->elements[j+1].key)
			{
				temp = array->elements[j];
				array->elements[j]= array->elements[j+1];
				array->elements[j+1] = temp;
				Swap++;
			}
		}
		if(Swap==0) //If list is sorted
			break;
	}
	
}
void Merge(DataType elements[],int start1,int mid,int end2)
{
	DataType temparr[SIZE];
	int i,j,start2,end1,k=start1;
	start1=mid+1;
	end1=mid;
	for(i=start1,j=start2; i<=end1 && j<=end2 && k<SIZE; )
	{
		if(elements[i].key<elements[j].key)
		{
			temparr[k]=elements[i];
			k++;
			i++;
		}
		else
		{
			temparr[k]=elements[j];
			k++;
			j++;
		}
	}
	while(i<=end1)
	{
		temparr[k]=elements[i];
		k++;
		i++;
	}
	while(j<=end2)
	{
		temparr[k]=elements[j];
		k++;
		j++;
	}
	for(i=start1; i<=end2; i++)
	{
		elements[i]=temparr[i];
	}

}
void MergeSort(ArrayType *array)
{
	M_Sort(array->elements,0,array->length-1);
}
void M_Sort(DataType element[], int start, int end)
{
	int mid;
	if(start!=end)
	{
		mid=(start+end)/2;
		M_Sort(element,start,mid);
		M_Sort(element,mid+1,end);
		Merge(element,start,mid,end);
	}
}
void QuickSort(ArrayType *array)
{
	_Q_Sort(array->elements,0,(array->length)-1);
}
void _Q_Sort(DataType elements[],int start,int end)
{
	DataType temp;
	int i,j,pivot;
	if(start!=end)
	{
		pivot=start;
		i= start;
		j=end;
		while(i<j)
		{
			while(elements[i].key<=elements[pivot].key)
			{
				i++;
			}
			while(elements[j].key>=elements[pivot].key)
			{
				j--;
			}
			temp=elements[i];
			elements[i]=elements[j];
			elements[j]=temp;
		}
		temp=elements[pivot];
		elements[pivot]=elements[j];
		elements[pivot]=temp;
		//pivot=i;
		_Q_Sort(elements,start,(pivot-1));
		_Q_Sort(elements,pivot+1,end);	
	
	}

}

