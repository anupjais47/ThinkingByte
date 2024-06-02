import java.util.Scanner;
public class ArmstrongNum
{
	
	int num=a;
	int check,rem,sum=0;
	System.out.println("Enter the number to be userified:");
	Scanner sc=newScanner(System.in);
	number=sc.nerxtInt();
	check=number;
	while(check!=0)
	{
	   rem=chech%10;
	   sum=sum+(rem*rem*rem);
	   chech=check/10;
	}
	if(sum==number){
	   System.out.println("Given number is an armstrong number:");
`	}
	else{
	    System.out.println(" Given number is not an armstrong number:");
	}
} 