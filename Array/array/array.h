#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define true 1
#define false 0
 typedef short BooleanType;
 typedef int KeyType;
 typedef struct DataType
 {
 	KeyType key;
 }DataType;
 
typedef struct ArrayType
{
	DataType elements[SIZE];
	int length;
	
}ArrayType;
int MainMenu();
ArrayType CreateArray();
int InsertMenu();
void InsertAtEnd(ArrayType *array,DataType data);
BooleanType IsFull(ArrayType array);
void ReadData(DataType *data);

void Display(ArrayType array);
void printData(DataType data);
void InsertAtBeg(ArrayType *array ,DataType data);
void InsertAtSortedOrder(ArrayType *array,DataType data);
void InsertAtDesiredLocation(ArrayType *array,DataType data ,int loc);
int LinearSearch(ArrayType array,KeyType key);
int BinarySearch(ArrayType array,KeyType key);
