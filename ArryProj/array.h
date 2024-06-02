#include<stdio.h>
#include<stdlib.h>
//#include<windows.h>
#define SIZE 10
typedef int KeyType;
typedef short BoolType;
typedef struct ElementType
{
	KeyType key;
}ElementType;

typedef struct ArrayType
{
	ElementType elements[SIZE];
	int length;
}ArrayType;

char Menu();
ArrayType CreateArray();
char InsertMenu();
char DeleteMenu();
char SearchMenu();
char SortMenu();
ArrayType InsertAtEnd(ArrayType array,ElementType element);
int isfull(ArrayType array);
int isempty(ArrayType array);
void Display(ArrayType array);
ArrayType InsertAtBegning(ArrayType array,ElementType element);
ArrayType InsertAtSortedOrder(ArrayType array,ElementType element);
ArrayType InsertAtDesiredLocation(ArrayType array,ElementType element, int location);
ElementType GetElement(ArrayType array, int location);
int LinearSearch(ArrayType array, KeyType key);
int BinarySearch(ArrayType array, KeyType key);
ArrayType DeleteFromBegning(ArrayType array);
ArrayType DeleteFromEnd(ArrayType array);
ArrayType DeleteFromDesiredLocation(ArrayType array, int location);
BoolType DeleteFromElement(ArrayType *array, KeyType key);
ArrayType BubbleSort(ArrayType array);
ArrayType SelectionSort(ArrayType array);
ArrayType InsertionSort(ArrayType array);
void M_Sort(ArrayType *array, int start, int end);
void Merge(ArrayType *array, int start, int mid, int end);
ArrayType MergeSort(ArrayType array);
void QuickSort(ArrayType *array);
void Q_Sort(ArrayType *array, int left, int right);
int Partition(ArrayType *array, int left, int right, ElementType pivot);



