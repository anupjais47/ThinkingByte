#include"array.h"
int main()
{
	ArrayType array;
	ElementType element;
	int created=0;
	char choice;
	while(1)
	{
		system("cls");
//		Display array line 11 to 27
		if(!created)
			{
				printf("\n Array is not created, Please create array.\n");
			}
			else
			{
				int empty=isempty(array);
				if(!empty)
				{
					Display(array);
				}
				else
				{
				printf("\n Array is empty, Please insert element.\n");
				}
			}
		choice= Menu();
		switch(choice-48)
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
					sleep(1);
					break;
			case 2: if(!created)
					{
						printf("\n Array is not created, Please create array.\n");
						sleep(1);
					}
					else
					{
						int count=1;
						while(count)
						{
							system("cls");
							if(!created)
							{
								printf("\n Array is not created, Please create array.\n");
							}
							else
							{
								int empty=isempty(array);
								if(!empty)
								{
									Display(array);
								}
								else
								{
								printf("\n Array is empty, Enter elements.\n");
								}
							}
							choice=InsertMenu();
							switch(choice-48)
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
											sleep(1);
										break;
										}
								case 2: {
											if(!isfull(array))
											{
												printf("\n Enter element:");
												scanf("%d",&element.key);
												array=InsertAtEnd(array,element);
												printf("\n Element insertCADDDed successfully.\n");
											}
											else
											{
												printf("\n Array is full.\n");
											}
											sleep(1);
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
											sleep(1);
										break;
										}
								case 4: {
											int location;
											if(!isfull(array))
											{
												printf("\n Enter location:");
												scanf("%d",&location);
												if(location>0&&location<=array.length+1)
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
											sleep(1);
										break;
										}
								case 5:	if(!created)
										{
											printf("\n Array is not created, Please create array.\n");
											sleep(1);
										}
										else
										{
											int empty=isempty(array);
											if(!empty)
											{
												Display(array);
												getch();
											}
											else
											{
												printf("\n Array is empty.\n");
												sleep(1);
											}
										}
										break;
								case 6: count=0;
										break;
								case 7: exit(0);
								}
						}
					}
					break;
			case 3: if(!created)
					{
						printf("\n Array is not created, Please create array.\n");
						sleep(1);
					}
					else
					{
						int empty,location;
						empty=isempty(array);
						if(!empty)
						{
							int count=1;
							while(count)
							{
								system("cls");
								if(!created)
								{
									printf("\n Array is not created, Please create array.\n");
								}
								else
								{
									int empty=isempty(array);
									if(!empty)
									{
										Display(array);
									}
									else
									{
										printf("\n Array is empty.\n");
										break;
									}
								}
								choice=DeleteMenu();
								switch(choice-48)
								{
									case 1:	array=DeleteFromBegning(array);
											printf("\n Deletion successfull.");
											sleep(1);
											break;
									case 2:	array=DeleteFromEnd(array);
											printf("\n Deletion successfull.");
											sleep(1);
											break;
									case 3: printf("\n Enter location:");
											scanf("%d",&location);
											if(location<1&&location>=array.length)
											{
												printf("\n Invalid location.");
												sleep(1);
											}
											else
											{
												array=DeleteFromDesiredLocation(array,location);
												printf("\n Deletion successfull.");
												sleep(1);
											}
											break;
									case 4:	{
												KeyType key;
												printf("\n Enter key to delete:");
												scanf("%d",&key);
												BoolType status;
												status=DeleteFromElement(&array, key);
												if(status==1)
												{
													printf("\n element deletion successfull.");
													sleep(1);
												}
												else
												{
													printf("\n element is not found.");
													sleep(1);
												}
												break;
											}
									case 5:	{
												break;
											}
									case 6:	{
												count=0;
												break;
											}
								}
							}
						}
						else
						{
							printf("\n Array is empty.");
							sleep(1);
						}
					}
					break;
			case 4:	if(!created)
					{
						printf("\n Array is not created, Please create array.\n");
						sleep(1);
					}
					else if(!isempty)
					{
						printf("\n Array is empty.\n");
						sleep(1);
					}
					else
					{
						int count=1;
						while(count)
						{
							system("cls");
							if(!created)
							{
								printf("\n Array is not created, Please create array.\n");
							}
							else
							{
								int empty=isempty(array);
								if(!empty)
								{
									Display(array);
								}
								else
								{
								printf("\n Array is empty.\n");
								}
							}
							choice=SortMenu();
							switch(choice-48)
							{
								case 1:	{
											array=BubbleSort(array);
											printf("\n Array sorted successfull.");
											sleep(1);
											break;
										}
								case 2:	{
											array=SelectionSort(array);
											printf("\n Array sorted successfull.");
											sleep(1);
											break;
										}
								case 3:	{
											array = InsertionSort(array);
											printf("\n Array sorted successfull.");
											sleep(1);
											break;
										}
								case 4:	{
											array = MergeSort(array);
											printf("\n Array sorted successfull.");
											sleep(1);
											break;
										}
								case 5:	{
											count=0;
											break;
										}
							}
						}
					}
					break;
			case 5:	if(!created)
					{
						printf("\n Array is not created, Please create array.\n");
					}
					else
					{
						int empty=isempty(array);
						if(!empty)
						{
							int count=1;
							while(count)
							{
							
								system("cls");
								if(!created)
								{
									printf("\n Array is not created, Please create array.\n");
								}
								else
								{
									int empty=isempty(array);
									if(!empty)
									{
										Display(array);
									}
									else
									{
									printf("\n Array is empty.\n");
									}
								}
								choice=SearchMenu();
								switch(choice-48)
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
													getch();
												}
												else
												{
													printf("\n Key not found.");
													sleep(1);
												}
												break;
											}
									case 2:	{
												int key,location;
												printf("\n Enter key:");
												scanf("%d",&key);
												location=BinarySearch(array,key);
												element=GetElement(array, location);
												if(location!=0)
												{
													printf("\n Location=%d",location);
													printf("\n Element=%d",element);
													getch();
												}
												else
												{
													printf("\n Key not found.");
													sleep(1);
												}
												break;
											}
								case 3:	{
											
											break;
										}
								case 4:	{
											count=0;	
											break;
										}		
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
						printf("\n Array is not created, Please create array.\n");
					}
					else
					{
						int empty=isempty(array);
						if(!empty)
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
					break;		
			case 8:	{
						QuickSort(&array);
						printf("\n Array sorted successfull.");
						sleep(1);
						break;
					}
		}	
	}
	return 0;	
}
