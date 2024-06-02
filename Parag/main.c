#include"array.h"
int main()
{
	int Created=0;
	int choice;
	int choiceI;
	int choices;
	int choiceD;
	int status=-1;
	Boolean flag;
	ArrayType array;
	DataType data;
	KeyType key;
	int loc;
	while(1) 
	{
		choice=MainMenu();
		switch(choice)
	   {
			case 0://Exit
				   {
						cls();
						printf("\nThanks.....\n");
						exit(1);
					}
			case 1: //creation
					{
		            	cls();
						if(!Created)
						{
							array=CreateArray();
							printf("\nArray  Created Succesfully--->>");	
							Created=1;
						}
						else
						{
						  printf("\nArray is already Created");	
						}
						
						break;
		         	}
			case 2://Insertation
		         	
		         	    cls();
		         	   int count=1;
		         	    while(count)
		         	    {
		         	    	choiceI=InsertMen();
		         	    	switch(choiceI)
		         	    	{
		         	    		case 1:cls();//Insert at beggning
		         	    		if(Created)
		         	    	    {
		         	    	    	if(!Isfull(array))
		         	    			{
		         	    			    data=ReadData();
		         	    				array=InsertAtBeg( array, data);
		         	    			
		         	    				printf("Data Insertion Successfull.\n");
		         	    			
									}
									else
									{
										printf("Array is Full\n");
									}
		         	    			
								}
								else
								{
								   printf("Array is not created\n");
								   count=0;
								}
		         	    		break;
		         	    		case 2:cls();//Insert at End 
		         	    		 if(Created)
		         	    	       {
			         	    	     if(!Isfull(array))
			         	    		    {
			         	    			   data=ReadData();
			         	                   //key=data.key;
			         	    			   status = LinearSearch(array,data.key,&data);
	                            		   if(status!=-1)
										    {
										       printData(data);
										       printf("Number is already Exist  ");	
										    }
										   else
									 	    {
											  array=InsertAtEnd( array, data);
			         	    			      printf("Data Insertion Successfull.\n");
										    }
	                            	   }
										else
										{
											printf("Array is Full\n");
											count=0;
										}
									}
									else
									{
									   printf("Array is not created\n");
									   count=0;
									}
		         	    		break;
		         	    		case 3:cls();//Insert at desired location
		         	    		if(Created)
		         	    	    {
		         	    	    	if(!Isfull(array))
		         	    		    {
		         	    				printf("Enter location\n");
		         	    				scanf("%d",&loc);
		         	    				if(loc>0&&loc<array.length+2)
		         	    				{
		         	    				 data=ReadData();
		         	    				 array=InsertAtDesiredlocation( array, data,loc);
		         	    				 printf("Data Insertion Successfull.\n");
		         	    				 count=0;
		         	    			    }
		         	    				else
		         	    				{
		         	    				   printf("Ivailad location.\n");
		         	    				   count=0;
										}
									}
									else
									{
										printf("Array is Full\n");
										count=0;
									}
		         	    		}
								else
								{
								   printf("Array is not created\n");
								   count=0;
								}
		         	    		break;
		         	    		case 4:cls();//Insert at sorted order
		         	    		if(Created)
		         	    	    {
		         	    	    	if(!Isfull(array))
		         	    			{
		         	    				data=ReadData();
		         	    				array=InsertAtSortedOrder( array, data);
		         	    				cls();
		         	    				printf("Data Insertion Successfull.\n");
		         	    				count=0;
									}
									else
									{
										printf("Array is Full\n");
										count=0;
									}
		         	    			
								}
								else
								{
								   printf("Array is not created\n");
								   count=0;
								}
		         	    	    case 5:cls();
						        count=0;
						        break;
						       case 0:
						      Terminate();
							}
						}
						break;
		
			case 3://Display
		            
					   cls();
					  // printf(" Coming soon.....> Display\n");
					  if(Created)
		         	    		{
		         	    			printf(" The elements of array  are\n");
		         	    			Display(array);

								 }
								 else
								 {
								 	printf("Array is not created\n");
								 }
					   break;
					
			case 4://Search
			        cls();
			        count=1;
                	while(count)
					{
						choices=SearchMenu();
						switch(choices)
						{
							case 1:cls();//LinearSearch
							if(Created)
							{
								if(!IsEmpty(array))
								{
									printf("Enter key\n");
									scanf("%d",&key);
									status = LinearSearch(array,key,&data);
									//printf("%d\n",status);
                            		if(status!=-1)
									{
									  printData(data);
									  printf("Is found at index  %d \n",status);	
									
									}
									else
									{
										printf("The data element with key %d is not found\n",key);
									}
								}
								else
								{
								  printf("Array is Empty");	
								  count=0;	
								}	
							}
							else
							{
								printf("Array is not created\n");
								count=0;
							}
							break;
						 case 2:cls();//Binarysearch
						 if(Created)
							{
								if(!IsEmpty(array))
								{
									printf("Enter key\n");
									scanf("%d",&key);
									status = Binarysearch(array,key,&data);
								 
                            		if(status!=-1)
									{
									  printData(data);
									  printf("Is found at index  %d \n",status);	
									
									}
									else
									{
										printf("The data element with key %d is not found\n",key);
									}
								}
								else
								{
								  printf("Array is Empty");	
								  count=0;	
								}	
							}
							else
							{
								printf("Array is not created\n");
								count=0;
							}
							
						 break;
						 case 3:cls();
						 count=0;
						 break;
						 case 0:
						Terminate();
                  	}			 
				}
             	break;
					
			case 5:cls();//Delete
					count=1;
					while(count)
					{
						choiceD=DeleteMenu1();
						switch(choiceD)
						{
							case 1:cls();///DeleteAtBeg
							if(Created)
							{
								if(!IsEmpty(array))
								{
								   array=DeleteAtBeg(array);
		         	    		   printf("Data Deleted Successfull.\n");
									
								}
								else
								{
								  printf("Array is Empty");	
								  count=0;	
								}	
							}
							else
							{
								printf("Array is not created\n");
								count=0;
							}
                         	break;
							case 2:cls();//DeleteAtEnd
							if(Created)
							{
								if(!IsEmpty(array))
								{
									array=DeleteAtEnd( array);
		         	    		   printf("Data Deleted Successfull.\n");
								}
								else
								{
								  printf("Array is Empty");	
								  count=0;	
								}	
							}
							else
							{
								printf("Array is not created\n");
								count=0;
							}
	
							break;
							case 3:cls();//DeleteByElement
							if(Created)
							{
								if(!IsEmpty(array))
								{
									printf("Enter key\n");
									scanf("%d",&key);
									status = LinearSearch(array,key,&data);
                            		if(status!=-1)
									{
									  printData(data);
									  //printf("Is found at index  %d \n",status);	
									  array=DeleteByElement( array,key);
									  printf("Data Deleted Successfull.\n");
									}
									else
									{
										printf("The data element with key %d is not found\n",key);
									}		
								}
								else
								{
								  printf("Array is Empty");	
								  count=0;	
								}			
							}
							else
							{
								printf("Array is not created\n");
								count=0;
							}
							break;
							case 4:cls();//DeletefromDesiredLocation
								if(Created)
							{
								if(!IsEmpty(array))
								{
									printf("Enter location\n");
		         	    			scanf("%d",&loc);
		         	    			if(loc>0&&loc<array.length+2)
		         	    			{
			                        	array=DeleteFromDesiredLocation( array,loc);
		         	    			    printf("Data Deleted Successfull.\n");
		         	    			}
		         	    			else
		         	    			{
		         	    			printf("Ivailad location.\n");
		         	    			count=0;
									}
			                   }
								else
								{
								  printf("Array is Empty");	
								  count=0;	
								}	
								
							}
							else
							{
								printf("Array is not created\n");
								count=0;
							}
							break;
							case 6:
							if(Created)
							{
								if(!IsEmpty(array))
								{
									printf("Enter key \n");
									scanf("%d",&key);
									flag=Deletewithkey(&array,key);
									if(flag==true)
									{
										printf("The data with key %d is deleted succsful");
									}
									else
									{
										printf("The data  deleted unsuccsful");
									}
									
								}
							}
							case 5: cls();
							count=0;
							break;
							case 0:
							Terminate();
						}		
					}
                 	break;
					
			case 6://Merge 
					
		               	cls();
						printf(" Coming soon....> Merge\n");
				    	break;
					
			case 7://Sort
					
		                cls();
						printf(" Coming soon....> Sort\n");
						break;
					
		}
	}
	return 0;
}
