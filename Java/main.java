import java.io.*;
class A
{
	static int x;
	A()
	{
		x=0;
		System.out.println("A");
	}
	void display()
	{
		System.out.println("value of x = "+x);
	}
	{
		x=100;
		System.out.println("Block A");
		System.out.println("value of x = "+x);
	}
}
class B extends A
{
	B()
	{
		System.out.println("B");
	}
	{
		System.out.println("Block B");
	}
}
class main
{
	public static void main (String args[])
	{
		B obj = new B();
		System.out.println(A.x);
	}
}

