#include"monopoly.h"
int main()
{
	char choice;
	while(1)
	{
		system("cls");
		choice=MainMenu();
		switch(choice-48)
		{
			case 1:	{
						int count=1;
						while(count)
						{
							system("cls");
							choice=PlayerOption();
							switch(choice-48)
							{
								case 1:	{
											printf("\nThis feature is coming soon");
											sleep(1);
											break;
										}
								case 2:	{
											printf("\nThis feature is coming soon");
											sleep(1);
											break;
										}
								case 3:	{
											printf("\nThis feature is coming soon");
											sleep(1);
											break;
										}
								case 4:	{
											printf("\nThis feature is coming soon");
											sleep(1);
											break;
										}
								case 5:	{
											printf("\nThis feature is coming soon");
											sleep(1);
											break;
										}
								case 6:	{
											count=0;
											break;
										}
								case 0:	{
											exit(1);
										}
							}
						}
						break;
					}
			case 2:	{
						printf("\nThis feature is coming soon");
						sleep(1);
						break;
					}
			case 0:	{
						exit(1);
					}
		}
	}
	
	return 0;
}
