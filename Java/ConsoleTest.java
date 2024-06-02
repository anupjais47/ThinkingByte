import java.io.*;
class ConsoleTest
{
	public static void main(String[] args)throws IOException
	{
		Console con=System.console();
	//System.out.println("\n Enter the num");
	
	//System.out.println("\n Enter the);
	
	//str=cn.readLine();
		int num = Integer.parseInt(con.readLine(" Enter Number : "));
		System.out.println("\n Entered number is " +num);	
	}
}