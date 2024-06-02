#include"array.h"
int main()
{
	ArrayType array;
	ElementType element;
	int created=0;
	int choice;
	while(1)
	{
		system("cls");
		choice= Menu();
		switch(choice)
		{
			case 1: if(!created)
					{
						array = CreateArray();
						created=1;
						printf("\n Array created successfully.\n");
					}
					else
					{
						printf("\n Array is already created.\n");
					}
					getch();
					break;
			case 2: if(!created)
					{
						printf("\n Array is not created.\n");
					}
					else
					{
						int count=2;
						while(count)
						{
							system("cls");
							choice=InsertMenu();
							switch(choice)
							{
								case 1:{
											if(!isfull(array))
											{
												printf("\n Enter element:");
												scanf("%d",&element.key);
												array=InsertAtBegning(array,element);
												printf("\n Element inserted successfully.\n");
											}
											else
											{
												printf("\n Array is full.\n");
											}
										break;
										}
								case 2: {
											if(!isfull(array))
											{
												printf("\n Enter element:");
												scanf("%d",&element.key);
												array=InsertAtEnd(array,element);
												printf("\n Element inserted successfully.\n");
											}
											else
											{
												printf("\n Array is full.\n");
											}
										break;
										}
								case 3: {
											if(!isfull(array))
											{
												printf("\n Enter element:");
												scanf("%d",&element.key);
												array=InsertAtSortedOrder(array,element);
												printf("\n Element inserted successfully.\n");
											}
											else
											{
												printf("\n Array is full.\n");
											}
										break;
										}
								case 4: {
											int location;
											if(!isfull(array))
											{
												printf("\n Enter location:");
												scanf("%d",&location);
												if(location>=0&&location<=array.length+1)
												{
													printf("\n Enter element:");
													scanf("%d",&element.key);
													array=InsertAtDesiredLocation(array,element,location);
													printf("\n Element inserted successfully.\n");
												}
												else
												{
													printf("\n Invalid location.\n");
												}
											}
											else
											{
												printf("\n Array is full.\n");
											}
										break;
										}
								case 5:	if(!created)
										{
											printf("\n Array is not created.\n");
										}
										else
										{
											int empty=isempty(array);
											if(empty)
											{
												Display(array);
											}
											else
											{
												printf("\n Array is empty.\n");
											}
										}
										getch();
										break;
								case 6: count=0;
										break;
								case 7: exit(0);
								}
							getch();
						}
					}
			case 3: if(!created)
					{
						printf("\n Array is not created.\n");
					}
					else
					{
						system("cls");
						choice=DeleteMenu();
						switch(choice)
						{
							
						}
					}
					break;
			case 4:
					break;
			case 5:	if(!created)
					{
						printf("\n Array is not created.\n");
					}
					else
					{
						int empty=isempty(array);
						if(1)
						{
							system("cls");
							int choice;
							choice=SearchMenu();
							switch(choice)
							{
								case 1: {
											int key,location;
											printf("\n Enter key:");
											scanf("%d",&key);
											location=LinearSearch(array,key);
											element=GetElement(array, location);
											if(location!=0)
											{
												printf("\n Location=%d",location);
												printf("\n Element=%d",element);
											}
											else
											{
												printf("\n Key not found.");
											}
											getch();
											break;
										}
								case 2:	{
											int key,location;
											printf("\n Enter key:");
											scanf("%d",&key);
											location=BinarySearch(array,key);
											printf("\n Location=%d",location);
											element=GetElement(array, location);
											printf("\n Element=%d",element);
											getch();
											
											break;
										}
										
							}
						}
						else
						{
							printf("\n Array is empty.\n");
						}
					}
					break;
			case 6: if(!created)
					{
						printf("\n Array is not created.\n");
					}
					else
					{
						int empty=isempty(array);
						if(empty)
						{
							Display(array);
						}
						else
						{
							printf("\n Array is empty.\n");
						}
					}
					getch();
					break;
			case 7: exit(0);		
			
		}	
	}
	return 0;	
}
