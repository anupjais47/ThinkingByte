#include"array.h"
int main()
{
	int choiceM,choiceI,created=0;
	//int array=0,key,status,choiceS;
	//int loc,status,element,array;
	ArrayType array;
	DataType data;
	KeyType key;
	
	while(1)
	{
		choiceM=MainMenu();//choiceM for main menu.
		switch(choiceM)
		{
			case 0://Terminate
				Terminate();
			case 1://Array Creation
				cls();
				if(!created)
				{
					array=ArrayCreation();
					printf("Array Creation Successfull.👍️👍️👍️ \n");
					created=1;
				}
				else
				{
					printf("Array is Already Created.😊️😊️😊️😊️ \n");
				}
				break;
			case 2://Insert Menu
				cls();
				//countI=1;
				if(!created)
				{
					NotCreated();
				}
				else
				{
					int countI=1;
					while(countI)
					{
						choiceI=InsertMenu();
						switch(choiceI)
						{
							case 1://Insert At begining
								cls();
								if(!IsFull(array))
								{
									data=ReadData();
									array=InsertAtBeg(array,data);
									printf("Insertion AT Begining Successful. \n");
								}
								else
								{
									Full();
								}
								break;
							case 2://Insert At End
								cls();
								int status;
								if(!IsFull(array))
								{
									data=ReadData();
									//status=LinearSearch(array,data.key,&data);
									//if(status!=-1)
									array=InsertAtEnd(array,data);
									printf("Insertion At End Successful. \n");
								}
								else
								{
									Full();
								}
								countI=0;
								break;
							case 3://Insert in Sorted Order
								cls();
								if(!IsFull(array))
								{
									data=ReadData();
									array=InsertInSortedOrder(array,data);
									cls();
									printf("Insertion In Sorted Order Successful. \n");
								}
								else
								{
									Full();
								}
								countI=0;
								break;
							case 4://Insert At Desired Location 
								cls();
								if(!IsFull(array))
								{
									int loc;
									printf("Enter Location : ");
									scanf("%d",&loc);
									if(loc>0 && loc<array.length+2)
									{
										data=ReadData();
										array=InsertAtDesiredLocation( array, data,loc);
										printf("Insertion Desired Location Successful. \n");
									}
									else
									{
										printf("\aSorry The Location can't be Existed.🤩️🤩️🤩️🤩️🤩️🤩️🤩️ \n");
									}
								}
								else
								{
									Full();
								}
								countI=0;
								break;
							case 5://Back
								cls();
								countI=0;
								break;
							case 0://EXIT
								cls();
								Terminate();
								break;
							default :
								Invalid();
						}
					}
					
				}
				break;
			case 3://Display
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				//printf("Display Function is coming soon..\n");
				{
					printf("The Elements Are...\n");
					DisplayArray(array);
				}
				
				break;
			case 4://Search
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				{	
					int countSe=1,choiceS,status,key;
					while(countSe)
					{
						choiceS=SearchMenu();
						switch(choiceS)
						{
							case 1://Linear Search
								cls();
								if(!IsEmpty(array))
								{
									printf("Enter key\n");
									scanf("%d",&key);
									status = LinearSearch(array,key,&data);
									//printf("%d\n",status);
                            						if(status!=-1)
									{
									  PrintData(data);
									  printf("Is found at index  %d \n",status);	
									
									}
									else
									{
										printf("The data element with key %d is not found\n",key);
									}
								}
								countSe=0;
								break;
							case 2://Binary Search
								cls();
								printf("Coming Soon...\n");
								countSe=0;
								break;
							case 3://Seach
								cls();
								printf("Coming Soon...\n");
								countSe=0;
								break;
							case 4://Back
								cls();
								countSe=0;
								break;
							case 0://EXIT
								cls();
								Terminate();
								break;
							default :
								Invalid();
						}
					}
				}
				break;
			case 5://Delete
				cls();
				//countI=1;
				if(!created)
				{
					NotCreated();
				}
				else
				{
					printf("Delete Function is coming soon..\n");	
				}
				break;
			case 6://Sort
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				{
					int ChoiceSt=1,CountSt;
					ChoiceSt=SortMenu();
					while(CountSt)
					{
						switch(ChoiceSt)
						{
							case 1://Merge Sort
								cls();
								if(!IsEmpty(array))
								{
									//printf("Coming Soon..\n");
									//printf("2");
									MergeSort(&array);
									printf("The Element of array are Successfully Sorted by Merge sort.\n");
									DisplayArray(array);
								}
								else
								{
									printf("Array is Empty");	
								}
								CountSt=0;
								break;
							case 2://Bubble Sort
								cls();
								if(!IsEmpty(array))
								{
									
									BubbleSort(&array);
									printf("The Element of array are Successfully Sorted by Bubble sort.\n");
									
									
								}
								else
								{
									printf("Array is Empty");
								}
								CountSt=0;	
								break;
							case 3://Selection Sort
								cls();
								if(!IsEmpty(array))
								{
									printf("Coming Soon..\n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 4://Insertion Sort
								cls();
								if(!IsEmpty(array))
								{
									printf("Coming Soon..\n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 5://Quick Sort
								cls();
								if(!IsEmpty(array))
								{
									QuickSort(&array);
									printf("Quick Sorted Successful. \n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 6://Radix Sort
								cls();
								if(!IsEmpty(array))
								{
									printf("Coming Soon..\n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 7://Shell Sort
								cls();
								if(!IsEmpty(array))
								{
									printf("Coming Soon..\n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 8://Heap Sort
								cls();
								if(!IsEmpty(array))
								{
									printf("Coming Soon..\n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 9://Tree Sort
								cls();
								if(!IsEmpty(array))
								{
									printf("Coming Soon..\n");
								}
								else
								{
									printf("Array is Empty");	
									CountSt=0;
								}
								break;
							case 11://
								cls();
								CountSt=0;
								break;
							case 0://EXIT
								cls();
								Terminate();
								break;
							default :
								cls();
								Invalid();
							
						}
					}
				
				}
				
				break;
			case 7://Merge
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				{
					printf("Merge Function is coming soon..\n");	
				}
				break;
			
			default ://Wrong Input/Invalid Input
				Invalid();
		}
	}
}
