import java.io.*;
public class LeapYear{
	public static void main(String[] args)throws IOException{
		InputStreamReader ir=new InputStreamReader(System.in);
		//System.out.print("\n Enter is no:");
		BufferedReader br=new BufferedReader(ir);
		String str=br.readLine();
			int year=Integer.parseInt(str);
			if(((year%4==0)&&(year%100!=0))||(year%400==0))
			{
				System.out.println("Leap year");
			}
			else
			{
				System.out.println("Not leap year");
			}
		}
}