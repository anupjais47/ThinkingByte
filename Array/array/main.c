#include"array.h"
int main()
{
	int choice,flag;
	ArrayType array;
	int created=0,loc;
	DataType data;
	
	while(1)
	{
		choice=MainMenu();
		switch(choice)
		{
			case 0:system("cls");
		      	printf("\n Thank you for using our program\n");
			      exit(1);
			case 1:system("cls");
			      	if(!created)
			      	{
				      	array=CreateArray();
				      	created=1;
				      	printf("\n Array is created successfully");
			      	
			      	}
				else
				{
				    printf("\n Array is already created");
				}
				break;
			case 2:system("cls");
			       if(created)
			     	{
				       	flag=1;
					while(flag)
					{
						choice=InsertMenu();
						switch(choice)
					        {
						       			
				         		case 1: system("cls");
				         	 		if(!IsFull(array))
				         	 		{
						         	 	ReadData(&data);
						         	 	InsertAtEnd(&array,data);
				         	 	
				         	 	
						  		}
						  		else
						 		{
				  					printf("\n Array is all ready Full");
				  	
				 				}
				     				// printf("\n Array is inserted at end");
				      				 break;
							case 2: system("cls");
								if(!IsFull(array))
					         	 	{
						         	 	ReadData(&data);
						         	 	InsertAtBeg(&array,data);
						         	 	printf("\n data inserted at begining successfully");
						         	 	
					         	 	
							 	}
								else
								{
								  	printf("\n Array is all ready Full");
								  	
								}
								break;
						        case 3:system("cls");
						                if(!IsFull(array))
					         	 	{
						         	 	//ReadData(&data);
						         	 	//InsertAtDesiredLocation(&array,data,loc);
						         	 	printf("\n print enter location:");
						         	 	scanf("%%d",&loc);
						         	 	if(loc>0&&loc<=array.length+1)
						         	 	{
									 	ReadData(&data);
						         	 		InsertAtDesiredLocation(&array,data,loc);
						         	 		printf("\n The data is inserted at %d successfully",loc);
									 
									}
									else
									{
										printf("\n Invalid location");
									}
						         	 	
						         	 	
					         	 	
							 	}
								else
								{
								  	printf("\n Array is all ready Full");
								  	
								}
							      	//printf("\n Array is insertd desired location");
							        break;
							case 4:system("cls");
								if(!IsFull(array))
					         	 	{
						         	 	ReadData(&data);
						         	 	InsertAtSortedOrder(&array,data);
						         	 	printf("\n data inserted successfully");
						         	 	
					         	 	
							 	}
								else
								{
								  	printf("\n Array is all ready Full");
								  	
								}
								break;
				       			case 5:system("cls");
							       flag=0;       //printf("\n Inserted at begining");
					             	 	break;
							case 0 :system("cls");
					                      printf("\n Thank you for using our program");
						        	 exit(1);
						        
							 default :system("cls");
							      printf("\n Invalid choice");
													       	
				 		}
				 
			        	}
	                 	 }	                   
				else
				{
				     printf("\n Array is not created");
				}
				break;
			case 3:system("cls");
			       if(created)
			       {
			        	printf("\n The element\n");
			       	        Display(array);
			       }
			       else
			       {
			       		printf("No created");
			       }
			       
			       //printf("\n Array is display ");
			       break;
			case 4:system("cls");
			        
				if(created)
				{
					KeyType key;
					int index;
					printf("\n Enter key to search");
					scanf("%d",&key);
					index=LinearSearch(array,key);
					if(index==-1)
					{
						printf("\n Data with key %d is not found",key,index);
						
					}
					else
					{
						printf("\n Data with key %d is found ata%d index ",key,index);
						
					}
				}
				else
				{
						printf("\n array is not created");
				}
			      //printf("\n Array is searched");
			      break;
			case 5:system("cls");
			        
				if(created)
				{
					KeyType key;
					int index;
					printf("\n Enter key to search");
					scanf("%d",&key);
					index=BinarySearch(array,key);
					if(index==-1)
					{
						printf("\n Data with key %d is not found",key,index);
						
					}
					else
					{
						printf("\n Data with key %d is found ata%d index ",key,index);
						
					}
				}
				else
				{
						printf("\n array is not created");
				}
			      //printf("\n Array is searched");
			      break;
			default:system("cls");
			       printf("\n Invalid choice");
					
		}
		
	} 
	return 0;  
	
}
