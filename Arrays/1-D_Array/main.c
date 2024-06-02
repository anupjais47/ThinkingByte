#include"array.h"
int main()
{
	int choice,choiceS,countS;
	//int array=0,key,status,choiceS;
	int status,element;
	int array=0;
	ArrayType array;
	DataType data;
	KeyType key;
	Boolean flag;
	while(1)
	{
		choice=MainMenu();
		switch(choice)
		{
			case 0:
				Terminate();
			case 1:
				cls();
				int created=0;
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
			case 2:
				cls();
				int countI=1;
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
							case 1:
								cls();
								//printf("Insert at Begining is on the way.\n");
								if(!Isfull(array))
				 	    			{
				 	    			    data=ReadData();
				 	    			    array=InsertAtBeg( array, data);
				 	    			    printf("Data Insertion Successfull.\n");
	         	    			
								}
								else
								{
									Full();
								}
								break;
							case 2:
								cls();
								//printf("Insert at End is on the way.\n");
								//int array=0;
								if(!IsFull(array))
								{
									data=ReadData();
									array=InsertAtEnd(array,data);
									Successful();
								}
								else
								{
									Full();
								}
								//count=0;
								break;
							case 3:
								cls();
								//printf("Insert at Desired Location is on the way.\n");
								int loc;
								if(!Isfull(array))
				 	    		   	{
				 	    		   	 	printf("Enter location\n");
				 	    		   	 	scanf("%d",&loc);
									if(loc>0&&loc<array.length+2)
									{
										data=ReadData();
										array=InsertAtDesiredlocation( array, data,loc);
										printf("Data Insertion Successfull.\n");
										
									}
									else
									{
										printf("Ivailad location.\n");
										
									}
								}
								else
								{
									Full();
									
								}
								countI=0;
								break;
							case 4:
								cls();
								//printf("Insert in Sorted Order is on the way.\n");
								if(!Isfull(array))
								{
									data=ReadData();
									array=InsertAtSortedOrder( array, data);
									printf("Data Insertion Successfull.\n");
								}
								else
								{
									Full();
									
								}
								countI=0;
								break;
							case 5:
								cls();
								//printf("Back.\n");
								countI=0;
								break;
							case 0:
								cls();
								//printf("EXIT.\n");
								Terminate();
								break;
							default :
								invalid();
						}
						count=0;	
							
					}
				
				}
				break;
			case 3:
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				//printf("Display Function is coming soon..\n");
				printf("The Elements Are...\n");
				DisplayArray(array);
				break;
			/*case 4:
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				//printf("Search Function is coming soon..\n");
				//int countS;
				countS=1;
				while(countS)
				{
					choiceS=SearchMenu();
					
					switch(choiceS)
					{
						case 1:
							cls();
							if(!IsEmpty(array))
							{
								printf("Enter Key : ");
								scanf("%d",&key);
								status=LinearSearch(array,key,&data);
								if(status!=-1)
								{
									PrintData(data);
									printf(" is founded at index %d.\n",status);										
								}
								else
								{
									printf("The element with key %d is not found. \n",key);
								}
							}
							else
							{
								printf("Array is Empty");	
							}
							countS=0;
							break;
						case 2:
							cls();
							//printf("Binary Search Function is coming soon..\n");
							if(!IsEmpty(array))
							{
								printf("Enter Key : ");
								scanf("%d",&key);
								status = Binarysearch(array,key,&data);
								if(status!=-1)
								{
									PrintData(data);
									printf(" is founded at index %d.\n",status);										
								}
								else
								{
									printf("The element with key %d is not found. \n",key);
								}
							}
							else
							{
								printf("Array is Empty");	
							}
							countS=0;
							break;
						case 3:
							printf("SEARCH Function is coming soon..\n");
							break;
						case 4:
							cls();
							countS=0;
							break;
						case 0:
							cls();
							//printf("EXIT.\n");
							Terminate();
							break;
						default :
							invalid();
					}
				}
				
				break;
			case 5:
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				//printf("Delete Function is coming soon..\n");
				{
					if(!IsEmpty(array))
					{
						printf("\n Enter Key to delete : ");
						scanf("%d",&key);
						flag=DeleteWithKey(&array, key);
						if(flag==TRUE)
						{
							printf("The data with key %d is deleted successfull \n",key);
						}
						else
						{
							printf("The data with key %d is deleted successfull \n",key);
						}
					}
					else
					{
						printf("Array is empty \n");
					}
				}
				break;*/
			case 6:
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				printf("Sort Function is coming soon..\n");
				break;
			case 7:
				cls();
				if(!created)
				{
					NotCreated();
				}
				else
				printf("Merge Function is coming soon..\n");
				break;
			default :
				//cls();
				invalid();
			
		}
	}
}
