#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define SIZE 10
//int ReadOnly(int ch);
int get_int(int *px);
int Only(int argc, const char *argv[]);
typedef struct StudentType
{
	KeyType key;
	char name[SIZE];
	float marks;
}StudentType;
typedef int KeyType;
/*typedef struct DataType
{
	//int element;
	KeyType key;
}DataType;
typedef struct ArrayType
{
	DataType elements[SIZE];
	int length;
}ArrayType;
*/
typedef struct StudentType DataType;
void Light_Red();
void Green();
void Blinking_Red();
void Red_Hilight_Black();
void Underline_Red();
void Double_Underline_Red2();
void Light_Green();
void Bold_Red();
void Pinck();
void Blue();
void Yellow();
void Red();

/*void Blinking_Red()
{
	printf("\033[91;5m");
	printf("Welcome to Thinking Byte \n");
	printf("\033[0m");
}
void Underline_Red()
{
	printf("\033[91;4m");
	printf("Welcome to Thinking Byte \n");
	printf("\033[0m");
}*/
void Welcome();
void Star();
void Hyphen();
void Namaste();
void cls();

void Terminate();
void Invalid();
//void Successful();
void Full();
void NotCreated();
void DisplayArray(ArrayType array);
void PrintData(DataType data);


int IsFull(ArrayType array);
int MainMenu();
int InsertMenu();
int SearchMenu();
int DeleteMenu();
//int OnlyInt();
int SortMenu();
int IsEmpty(ArrayType array);

DataType ReadData();
ArrayType ArrayCreation();

ArrayType InsertAtBeg(ArrayType array,DataType element);
ArrayType InsertAtEnd(ArrayType array,DataType element);
ArrayType InsertAtDesiredLocation(ArrayType array,DataType element,int loc);
ArrayType InsertInSortedOrder(ArrayType array,DataType element);

int Binarysearch(ArrayType array,KeyType key,DataType *element);
int LinearSearch(ArrayType array,KeyType key,DataType *element);

void BubbleSort(ArrayType *array);
void MergeSort(ArrayType *array);
//void Merge(element,start,mid,end);
void M_Sort(DataType element[], int start, int end);
void Merge(DataType elements[],int start1,int mid,int end2);
void QuickSort(ArrayType *array);
void _Q_Sort(DataType elements[],int start,int end);
