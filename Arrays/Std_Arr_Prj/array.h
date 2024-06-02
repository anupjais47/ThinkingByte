# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <termios.h>
#define TRUE 1
#define FALSE 0
#define SIZE 30
//int ReadOnly(int ch);
/*char getch(void)
{
	struct termios old, new;
	char ch;
	tcgetattr(0, &old);
	new=old;
	new.c_lflag &= ~( ICANON | ECHO );
	tcsetattr( 0, TCSANOW, &new);
	ch=getchar();
	tcsetattr(0, TCSANOW, &old);
	return(ch);
}*/
int IntOnly();
typedef int KeyType;
typedef struct StudentType
{
	KeyType key;
	float marks;
	char name[SIZE];
}StudentType;
typedef struct StudentType DataType;
typedef struct DataType
{
	//int element;
	KeyType key;
}DataType;
typedef struct ArrayType
{
	DataType elements[SIZE];
	int length;
}ArrayType;
typedef struct SElmentType
{
	int row;
	int col;
	DataType data;
	
}SElmentType;
typedef struct SMatrix
{
	SElmentType elements[10];
	int length;
}SMatrixType;
SMatrixType Create Matrix();
Boolean InsertInSM(SMatrixType *sm,DataType data,int row,int col);
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
void Coloring_Stop();

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

int Binarysearch(ArrayType array,KeyType key,DataType *element);
int LinearSearch(ArrayType array,KeyType key,DataType *element);

