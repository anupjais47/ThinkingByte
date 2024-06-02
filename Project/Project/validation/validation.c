#include"validation.h"
/*
ADT for login password
purpose		:login password 
precondition: no
input		: no
output		:clear_screen
postcondition:none
*/
int login()
{
	int Auid=857,aID,Cuid=123,cID;
	int Apassword=84835,Cpassword=123456,aP,cP,count=0;

	do{	
		system("cls");
		if(count>0)
	
		printf("\n\t\t\t\twrong uid and password\n\t\t\t***************************************\n");
		printf("\n\t\t\t\tENTER USER ID \n\t\t\t\t");
		scanf("%d",&aID);
		//if(uid!=ID)
		//printf("wrong user id");
		printf("\n\t\t\t\tENTER THE PASSWORD\n\t\t\t\t");
		scanf("%d",&aP);
		count++;
	}while(!(Auid==aID&&Apassword==aP)||(Cuid==cID&&Cpassword==cP));
	
}
/*
ADT for cls
purpose		:clear_screen
precondition: no
input		: no
output		:clear_screen
postcondition:none
*/
int cls()
{
	system("cls");
	//return system;
}
/*
ADT for HEading
purpose		: display Heading
precondition: no
input		: no
output		: 			~~ WELCOME ~~ 
			Vocational Course Management  System
postcondition:none
*/
void Heading()
{
	//system("color 09");
	printf("\n\t\t\t\t\t\t~~ WELCOME ~~\n\t\t\t\t\tVocational Course Management System\n");
	system("color 09");
}
/*
ADT for userMenu
purpose		: display userMenu/user id and password
precondition: to chake userid and password are wrong/correct
input		: uid && password
output		: userid && password
postcondition:none
*/
void PASSWORD()
/*#include<stdio.h>
#include<stdlib.h>
int main()*/
{
	int uid=1234,ID;
	int password=123456,P,count=0;

	do{	
		system("cls");
		if(count>0)
	
		printf("\n\t\t\t\twrong uid and password\n\t\t\t***************************************\n");
		printf("\n\t\t\t\tENTER USER ID \n\t\t\t\t");
		scanf("%d",&ID);
		//if(uid!=ID)
		//printf("wrong user id");
		printf("\n\t\t\t\tENTER THE PASSWORD\n\t\t\t\t");
		scanf("%d",&P);
		count++;
	}while(!(uid==ID&&password==P));
}
/*
ADT for MainMenu
purpose		: display choice menu
precondition: none
input		: none
output		: choice(int)
postcondition:none
*/
//=========================================================================
int MainMenu()
{
	int choice;
	system("color A0");
	printf("\n\t\t\t\t\t\t\tENTER\t\t\t\t\t\n\t\t\t**************************************************************************\n\t\t\t**************************************************************************\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 1. ADMISSION\t\t:-\t\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 2. ACCOUNT\t\t:-\t\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 3.REGISTRATION\t\t:-\t\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 4. EXAMINATION\t\t:-\t\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 5. RESULT\t\t:-\t\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 6. STUDENT LIST/STUDENT INFORMATOIN:-\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 7. DEPARTMENT INFORMATION\t:-\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t** \t\t\t 8 .TEACHER'S INFORMATION\t:-\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t**\t\t\t 9. CALENDAR\t\t:-\t\t\t**\n\t\t\t**\t\t\t\t\t\t\t\t\t**\n\t\t\t**************************************************************************\n\t\t\t**************************************************************************\n");
	printf("\t\t\tEnter Your Choise :-\t");
	scanf("%d",&choice);
	return choice;
}
//=========================================================================
/*int MainMenu()
{
	int choice;
	printf("\nEnter your choice from the list---->\n 1--> ADMISSION\n 2--> ACCOUNT\n 3--> REGISTERTION\n 4--> EXAMINATION\n 5--> RESULT\n 6--> STUDENT LIST/STUDENT INFORMATIN\n 7--> DEPARTMENT INFO\n 8--> TEACHERS INFORMATION\n 9--> CALeNDER-(HOLLYDAY)\n 0-->Exit\nEnter your choice---->");
	scanf("%d",&choice);
	return choice;
}*/
/*
ADT for ADMISSION
purpose		:ADMISSION FORM
precondition: no
input		: FORM OPION
output		: DONE
postcondition:none
*/
int Admission(int choise)
{
	printf("\n Enter yor choise-->\n  1-->Administretor\n  2-->clerck\n  3-->Back\n  0-->Exit\n Enter yor choise-->");
	scanf("%d",&choise);
	system("color 0A");
	return choise;
}
/*
ADT for AdmissionForAdministertor
purpose		:AdmissionForAdministertor
precondition: no
input		: FORM OPION
output		:DONE
postcondition:none
*/
int AdmissionForAdministertor()
{
	printf("\nReady admission form for administertor");
}
/*
ADT for AdmissionForClerck
purpose		:AdmissionForClerck
precondition: no
input		: FORM OPION
output		:DONE
postcondition:none
*/
int AdmissionForClerck()
{
	printf("\nReady admission form for clerck");	
}
/*
ADT for Account
purpose		:Account MAINAGE
precondition: no
input		: no
output		: NO
postcondition:none
*/
int Account(int choise)
{
	printf("Enter your choise-->\n 1-->Fee Collection\n 2-->Pay\n 3-->Back\n 4-->exit\nEnter your choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for FeeCollection
purpose		:FeeCollection
precondition: no
input		: no
output		: DONE
postcondition:none
*/
int FeeCollection()
{
	printf("\nReady for FeeCollection\n");
}
/*
ADT for PAY
purpose		:PAY
precondition: no
input		: no
output		:DONE
postcondition:none
*/
int PAY()
{
	printf("\nReady for pay\n");
}
/*
ADT for Registretion
purpose		:Registretion
precondition: NO
input		: Registretion FORM
output		:Registretion DONE
postcondition:none
*/
int Registretion(int choise)
{
	printf("\nEnter yor choise\n 1-->Administretor\n 2-->clerck\n 3-->back\n 4-->Exit\n\nEnter yor choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for RegistretionForAdministertor
purpose		:Registretion
precondition: NO
input		: Registretion FORM
output		:Registretion DONE
postcondition:none
*/
int RegistretionForAdministertor()
{
	printf("\nReady Registretion form for administertor");
}
/*
ADT for RegistretionForClerck
purpose		:Registretion
precondition: NO
input		: Registretion FORM
output		:Registretion DONE
postcondition:none
*/
int RegistretionForClerck()
{
	printf("\nReady Registretion form for clerck");	
}
/*
ADT for Examination
purpose		:Examination DETAIL
precondition: no
input		: no
output		:Examination INFORMATION
postcondition:none
*/
int Examination(int choise)
{
	printf("\nEnter yor choise\n 1-->Entrence-Exam\n 2-->Main-Exam\n 3-->back\n 4-->Exit\n\nEnter yor choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for EntrenceExam
purpose		:Examination DETAIL
precondition: no
input		: no
output		:Examination INFORMATION
postcondition:none
*/
int EntrenceExam()
{
	printf("\nDate:-\t 05/06/20019\n");
	return;
}
/*
ADT for MainExam
purpose		:Examination DETAIL
precondition: no
input		: no
output		:Examination INFORMATION
postcondition:none
*/
int MainExam()
{
	printf("\nDate:-\t01/10/2019\tHINDI");
	printf("\nDate:-\t04/10/2019\tPHYSICS");
	printf("\nDate:-\t09/10/2019\tHOUN.PAPER1");
	printf("\nDate:-\t012/10/2019\tMATHMETICS");
	printf("\nDate:-\t015/10/2019\tHOUN.PAPER2");
	return;
}
/*
ADT for result
purpose		:result
precondition: no
input		: no
output		:result INFORMATION
postcondition:none
*/
int result(int choise)
{
	printf("\nEnter your choise-->\n 1-->EntrenceExam\n 2-->Part1\n 3-->Back\n4-->Exit\n\nEnter your choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for ResultEntrenceExam
purpose		:result
precondition: no
input		: no
output		:ResultEntrenceExam INFORMATION
postcondition:none
*/
int ResultEntrenceExam()
{
	printf("\nEnter Serial/Roll number :-\n");
	printf("\nRank no.= 1\t Number=99\n");
	return;
}
/*
ADT for ResultMainExam
purpose		:result
precondition: no
input		: no
output		:ResultMainExam INFORMATION
postcondition:none
*/
int ResultMainExam()
{
	printf("\nEnter Serial/Roll number :-\n");	
	printf("\nRank no.= 1\t Number=99\n");
	return;
}
/*
ADT for studentListAndInformation
purpose		:student List And Information
precondition: no
input		: no
output		:student List/ Information
postcondition:none
*/
int studentListAndInformation(int choise)
{
	printf("Enter your choise  -->\n 1-->Student List\n 2-->Student INformation\nEnter your choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for student List And Information For Administretor 
purpose		:student List And Information
precondition: no
input		: no
output		:student List/ Information
postcondition:none
*/
int studentListAndInformationForAdministretor()
{
	int ch;
	printf("Enter your choise-->\n 1-->Administretoe\n 2-->clerck\nEnter your choise-->");
	scanf("%d%d",&ch);
	return ch;
}
/*
ADT for student List And Information For Clerck 
purpose		:student List And Information
precondition: no
input		: no
output		:student List/ Information
postcondition:none
*/
int studentListAndInformationForClerck()
{
	int ch;
	printf("Enter your choise-->\n 1-->Administretor\n 2-->clerck\nEnter your choise-->");
	scanf("%d",&ch);
	
	return ch;
}
/*
ADT for Student List
purpose		:StudentList
precondition: no
input		: CHOISE
output		:StudentList
postcondition:none
*/
void StudentList()
{
	printf("\nall student Roll no. and Name\n ");
}
/*
ADT for student Information
purpose		:StudentList
precondition: no
input		: CHOISE
output		:StudentList
postcondition:none
*/
int studentInformation(int roll)
{
	printf("Enter Roll number:-\t");
	scanf("%d",&roll);
	if(roll==1)
	{
		printf("\nStudent Name\t\t\t:-\tVIVEK KUMAR");
		printf("\nStudent Father's Name\t\t:-\tDHANESH PATEL");
		printf("\nStudent Mother's Name\t\t:-\tSHANTI DEVI");
		printf("\nQualification\t\t:-\tINTERMIDIAT");
		printf("\nBoard/univ\t\t:-\tBSEB PATNA\n");
		printf("\nPassing Year\t\t:-\t2017");
		printf("\nFull Marks\t\t:-\t312");
		printf("\npercentage\t\t:-\t62.2");
		printf("\nAddress\n\nVillage\t\t\t:-\tKHATAURI");
		printf("\nP.O.\t\t\t:-\tGUDGUDI");
		printf("\nP.s.\t\t\t:-\tRAMNAGAR");
		printf("\nDistic\t\t\t:-\tWEST CHAMPARAN");
		printf("\nState\t\t\t:-\tBIHAR");
		printf("\nPincode\t\t\t:-\t845106");
		printf("\nContry\t\t\t:-\tINDIA");
		printf("\nStudent of Relision\t:-\tHINDUSM");
		printf("\nStudent of DOB\t\t:-\t05/10/2000");
		printf("\nADHAR NUMBER\t\t:-\t12455478884");
		printf("\nE-mail Id\t\t:-\tavaranrajbhaipatel@gmail.com");
		printf("\nMobile No.\t\t:-\t9576093580");
		printf("\nACCOUNT NUMBER\t\t:-\t124546415148");
		printf("\nBank name\t\t:-\tSTSTE BANK OF INDIA\n");
	}
	return;
}
/*
ADT for Department Information
purpose		:clear_screen
precondition: no
input		: no
output		:clear_screen
postcondition:none
*/
int DepartmentInformation(int choise)
{
	printf("\n Enter your choise-->\n 1-->Account Information\n 2-->display login/UserId&&password\n 3-->display changing/Time&&date\n 0-->Exit\n Enter your choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for Teachers Information
purpose		:Teachers Information/RUTINE
precondition: no
input		: no
output		:Teachers Information/RUTINE
postcondition:none
*/
int TeachersInformation(int choise)
{
	printf("Enter your choise-->\n 1-->Add Teachers Name\n 2--> Teachers Name List\n 3-->Teachers Class Rutineg\n 4-->Back\n 0-->exit\n Enter your choise-->");
	scanf("%d",&choise);
	return choise;
}
/*
ADT for cls
purpose		:clear_screen
precondition: no
input		: no
output		:clear_screen
postcondition:none
*/


