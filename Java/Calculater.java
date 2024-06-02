 import java.io.*;
public class TwoNum{
	public static void main(String[] args)throws IOException{
		InputStreamReader ir=new InputStreamReader(System.in);
		System.out.print("\n Enter is no:");
		BufferedReader br=new BufferedReader(ir);
		String str1=br.readLine();
		String str2=br.readLine();
		int a=Integer.parseInt(str1);
		int b=Integer.parseInt(str2);
		switch(opr)
		{
		    case'+':
			System.out.println("a+b");
		    case'-':
			System.out.println("a-b");
		   case'*':
			System.out.println("a*b");
		   case'/':
			if(b!=0)
			{
				System.out.println(a/b);
			}
			else
			{
				System.out.println(Divieded by zreo error);
			}
			defaut:
				System.out.printfln("invialed operater");
		}
}