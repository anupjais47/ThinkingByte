#include"validation.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int choise,created=0;
	while(1)
	{
		Heading();
		//login();													
		choise=MainMenu();
		cls();
		Heading();
		//PASSWORD();
		switch(choise)
		{
			case 1:
				{	
					cls();
					//PASSWORD();
					choise=Admission(choise);
					switch(choise)
					{
						case 1:
							{
								
								cls();
								PASSWORD();
								cls();
								AdmissionForAdministertor();
								created=1;
								break;
							}
						case 2:
							{
								cls();
								PASSWORD();
								cls();
								 AdmissionForClerck();
								 created=1;
								 break;
							}
						case 3:
							{
								cls();
								int count=0;
								if(count=0)
								{
									MainMenu();
								}
								break;
							}
						case 0:
							{
								cls();
								exit(1);
								break;
							}
						default :
							{
								cls();
								printf("\nInvalid choise\n");
								break;
							}		
					}
					break;
				}
				case 2:
					{
						cls();
						if(created)
						{
							if(Admission(choise))
							{
								int count=1;
								while(count)
								{
									cls();
									choise=Account(choise);
									switch(choise)
									{
										case 1:
											{
												if(created)
												{
													cls();
													if(Admission(choise))
													{
														cls();
														FeeCollection();	
													}
													else
													{
														printf("\nNot admission.");
													}
												}
												break;
											}
										case 2:
											{
												cls();
												if(created)
												{
													if(Admission(choise))
													{
														cls();
														PAY();	
													}
													else
													{
														printf("\nNot admission.");
													}
												}
												break;
											}
										case 3:
											{
												cls();
												count=0;
												if(count=0)
												{
													MainMenu();
												}
												break;
											}
										case 4:
											{
												cls();
												printf("\nThanks for Using This program\n");
												exit(1);
												break;
											}
										default :
											{
												cls();
												printf("\nInvalid choise\n");
												break;
											}
									}
								}
							}
							else
							{
								cls();
								printf("\nadmission is not successfull.");
							}	
						}
						break;
						//printf("\nmy name is vivek\n");
						//break;
					}
					case 3:{
						cls();
						choise=Registretion(choise);
						switch(choise)
						{
							case 1:
								{
									cls();
									RegistretionForAdministertor();
									break;
								}
							case 2:
								{
									cls();
									RegistretionForClerck();
									break;
								}
							case 3:
								{
									
									int count=0;
									cls();
									if(count=0)
									{
										MainMenu();
									}
									break;
								}
							case 4:
								{
									cls();
									printf("\nThanks for Using this program.");
									exit(1);
									break;
								}
							default :
								{
									cls();
									printf("\nInvalid Choise\n");
									break;
								}		
						}
						break;
					}
				case 4:
					{
						int count=1;
						//while(1)
						//{
							cls();
							choise=Examination(choise);
							switch(choise)
							{
								case 1:
									{
										cls();
										EntrenceExam();
										break;
									}
								case 2:
									{
										cls();
										MainExam();
										break;	
									}
								case 3:
									{
										int count=0;
										cls();
										if(count=0)
										MainMenu();
										break;
									}
								case 4:
									{
										cls();
										printf("\nThanks for Using this program.");
										exit(1);
										break;
									}
									default :
									{
										cls();
										printf("\nInvalid Choise\n");
										break;
									}	
							}
						//}
						break;
					}
				case 5:
					{
						int count=1;
						//while(count)
						//{
							cls();
							choise=result(choise);
							switch(choise)
							{
									case 1:
										{
											cls();
											ResultEntrenceExam();
											break;
										}
									case 2:
										{
											cls();
											ResultMainExam();
											break;
										}
									case 3:
										{
											count=0;
											cls();
											MainMenu();
											cls();
											break;
										}
									case 4:
										{
											cls();
											printf("\nThanks for using my program\n");
											exit(1);
											break;
										}
									default :{
										cls();
										printf("\nInvalid choise\n");
										break;
									}
									
							}
		
						//}
						break;
					}
				case 6:
					{
						cls();
						int choise;
						printf("\n Enter your choise-->\n 1-->Administretor\n 2-->clerck\n 3-->Back\n Enter your choise-->");
						scanf("%d",&choise);
						cls();
						switch(choise)
						{
								case 1:
									{
										cls();
										int roll;
										choise=studentListAndInformation(choise);
										cls();
										//int choise=studentListAndInformationForAdministretor();
										//int choise=studentListAndInformation(choise);
											switch(choise)
											{
												case 1:
													{
														cls();
														StudentList();
														printf("\n\n\nadministretor\n\n\n\n");
														break;
													}
												case 2:
													{
														cls();
														int roll;
														studentInformation(roll);
														break;
													}
													default :
													{
														cls();
														printf("\nInvalid choise\n");
														break;
													}
													
											}
																				
									}
								case 2:
									{
										cls();
										int roll;
										choise=studentListAndInformation(choise);
										cls();
										//studentListAndInformationForClerck();
										//choise=studentListAndInformation(choise)
									switch(choise)
											{
												case 1:
													{
														cls();
														StudentList();
														break;
													}
												case 2:
													{
														cls();
														int roll;
														studentInformation(roll);
														break;
													}
													default :
													{
														cls();
														printf("\nInvalid choise\n");
														break;
													}
													
											}
										break;
									}
								case 3:
									{
										cls();
										int count=0;
										if(count=0)
										{
											MainMenu();
										}
										break;
									}
									default :
									{
										cls();
										printf("\nInvalid choise\n");
										break;
									}
						}
						break;
					}
				case 7:
					{
						cls();
						int choise;
						printf("\n\t\t\t\tONLY FOR ADMINISTRETOR\n\t\t\t________________________________\n");
						printf("\nyou want continue Enter:-1\n");
						scanf("%d",&choise);
						cls();
						switch(choise)
						{
							case 1:
								{
									PASSWORD();
									DepartmentInformation(choise);
									break;
								}
							case 0:
								{
									cls();
									printf("\nThanks for using this program.");
									exit(1);
									break;
								}
							default :
								{
									cls();
									printf("\nInvalid choise\n");
									break;
								}
							
						}
						break;
					}
				case 8:
					{
						choise=TeachersInformation(choise);
						int count=1;
						//while(count)
						//{
							switch(choise)
							{
								while(count)
								{
									case 1:
									{
										cls();
										char name[10], sname[10];
										printf("Enetr Teacher Name:-\t");
										scanf("%s %s",&name,&sname);
										break;
									}
								case 2:
									{
										cls();
										printf("\n1 - vivek kumar\n");
										break;
									}
								case 3:
									{
										cls();
										printf("\nEmpty Code\n");
										break;
									}
								case 4:
									{
										cls();
										count=0;
										if(count==0)
										TeachersInformation(choise);
										break;
									}
								case 0:
									{
										cls();
										printf("\nThanks for Using This program\n");
										exit(1);
										break;
									}
									default :
										{
											cls();
											printf("\nInvalid choise\n");
											break;
										}
								}	
							}
							break;
							
						//}
					}
					
				case 0:
					{
						cls();
						system("color A0");
						printf("\nThanks for Using This program\n");
						exit(1);
						break;
					}
				default :{
					cls();
					printf("\nInvalid choise\n");
					break;
				}
		}
	}
	
	return 0;
}
