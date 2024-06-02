import java.io.*;
public class TwoNum{
	public static void main(String[] args)throws IOException{
		InputStreamReader ir=new InputStreamReader(System.in);
		System.out.print("\n Enter is no:");
		BufferedReader br=new BufferedReader(ir);
		String str=br.readLine();
		String str2=br.readLine();
		int a=Integer.parseInt(str);
		int b=Integer.parseInt(str2);
		int z=a+b;
		System.out.println("Addition of two number"+z);
	}
}  