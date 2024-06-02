#include"quiz.h"
//#include<stdlib.h>int main()
{
	int choice, count=1;
	while(count)
	{
		choice=MainMenu();

		switch(choice)
		{
			case 1 :{
				
						system("cls");	
					 	printf("\n Introduction is coming soon");
				    	break;
			        }
			case 2 :{
					
						while(count)
						{
							choice = UserMenu();
							switch(choice)
							{
								case 1 :{
											system("cls");
										 	printf("\n Sign up is coming soon");
								      	 	break;
								        }
								case 2 :{
											
										 	while(count)
										 	{
										 		choice= SignIn();
										 		switch(choice)
										 		{
										 			case 1 :{
										 						system("cls");
										 						printf("\n Read user detail is coming soon");
													        	break;
													        }
													case 2 :{
																system("cls");
										 						printf("\n Interface of Authenticate user is coming soon");
													        	break;
													        }
													case 0 :{
										 						printf("\n thank you for using my program");
										 						count=0;
													        	break;
													        }		        
												}
										 	
								
											}
										 	
										 		
										 	
								      	 	break;
								        }
								case 0 :{
											printf("\n thank you for using my program");
									    	count=0;
									     	break;
								        }		        
							}
						}
				    	break;
			        }
			case 3 :{
						while(count)
						{
							choice=StartGame();
							switch(choice)
							{
								case 1 :{
											system("cls");
											printf("Display rule is coming soon");
											break;
										}
								case 2 :{
											system("cls");
											printf("Question slection is coming soon");
											break;
										}
								case 3 :{
											while(count)
											{
												choice=RecordResponce();
												switch(choice)
												{
													case 1 :{
																system("cls");
																printf("\n valid responce is coming soon");
																break;
															}
													case 2 :{
																system("cls");
																printf("\n calculate score is coming soon");
									
																break;
															}
													case 0 :{
																printf("\n thank you for using my program");
																count=1;
																break;
															}				
												}
											}
											break;
										}
								case 0 :{
											printf("\n thank you for using my program");
											count=1;
											break;
										}						
							}
						}
				    	break;
			        }
			case 4 :{
						system("cls");
						printf("\n Interface of Display resault is coming soon");
				    	break;
			        }				       
			case 5 :{
						system("cls");
						printf("\n Interface of Terminatin is coming soon");
				    	break;
			        }
			case 0 :{
						system("cls");
				     	printf("\n thank you for using my program");
				     	count=0;
				    	break;
			        }
			default:{
						printf("\n invalid choice");		
				        break;
			        }						 
		}
	}
	return 0;
}
