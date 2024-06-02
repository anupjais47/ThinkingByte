import java.util.*;
public class Area
{
	public float a,r;
	Scanner s = new Scanner(System.in);
	public void Circle()
	{
		System.out.println("Enter the radious of a circle : ");
		r=s.nextFloat();
		a=(float)3.14*r*r;
		System.out.println("The area is "+a);
	}
}
class Main
{
	public static void main(String []s)
	{
		Area ob=new Area();
		ob.Circle();
	}
}
