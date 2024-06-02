class A
{
	int a;
	A(int a)
	{
		this.a=a;
	}
}
class B extends A
{
	int x;
	int y;
	B(int x)
	{	
		this.x=x;
	}
	B(int x, int y)
	{
		this(x);
		this.y=y;
	}
	B(int a, int x, int y)
	{
		this(x,y);
		super(a);
		
	}
}

public class AB
{
	public static void main(String args[])
	{
		B obj=new B(1,2,3);
		//obj.display();
				
	}			
}
