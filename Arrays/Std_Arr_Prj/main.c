#include"array.h"
int main()
{
	int choiceM,choiceI,created=0;
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
					printf("Admission Register Creation Successfull.👍️👍️👍️ \n");
					created=1;
				}
				else
				{
					printf("Admission Register is Already Created.😊️😊️😊️😊️ \n");
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
					int row,col,data;
					printf("\n Enter row col and data : ");
					scanf("%d%d%d",&row,&col,&data);
					flag=InsertInSM(&sm,data,row,col);
					if(flag)
					{
					
					}
					else
					{
						printf("\n Index is Occupied. \n");
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
					
					printf("The Srudents Are...\n");
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
					printf(" Sort Function Coming Soon..\n");
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
