#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
typedef int KeyType;
typedef struct ElementType
{
	KeyType key;
}ElementType;

typedef struct ArrayType
{
	ElementType elements[SIZE];
	int length;
}ArrayType;

int Menu();
ArrayType CreateArray();
int InsertMenu();
int DeleteMenu();
int SearchMenu();
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
