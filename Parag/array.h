#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<dir.h>
#define SIZE 10
#define true 1
#define false 0
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
typedef short Boolean;
ArrayType CreateArray();
int MainMen();
int InsertMen();
int SearchMenu();
int DeleteMenu1();
void Terminate();
void Display(ArrayType);
void printData(DataType data);
int IsEmpty(ArrayType array);
ArrayType InsertAtEnd(ArrayType array, DataType element);
ArrayType InsertAtBeg(ArrayType array, DataType element);
ArrayType InsertAtDesiredlocation(ArrayType array,DataType element,int loc);
ArrayType InsertAtSortedOrder(ArrayType array, DataType element);
int LinearSearch(ArrayType array,KeyType key,DataType *element);
int Binarysearch(ArrayType array,KeyType key,DataType *element);
ArrayType DeleteAtEnd(ArrayType array);
ArrayType DeleteAtBeg(ArrayType array);
ArrayType  DeleteByElement(ArrayType array,KeyType key);
ArrayType DeleteFromDesiredLocation(ArrayType array,int loc);
Boolean Deletewithkey(ArrayType *array,KeyType key);
int Isfull(ArrayType array);
DataType ReadData(); 
void cls();
void SetColor1(int ForgC);
void gotoxy(int x,int y);
