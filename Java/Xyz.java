import java.in.*;
class Xyz
{
	void mag()
	{
		System.out.println("Hello");
	}
	class Abc
	{
	void msg()
	{
		System.out.println("Welcome");
	}
	class C extends Xyz,Abc//suppose if it were
	
	public static void main(String args[])
	{
		C obj=new C();
		obj.mag();// Now which mag() method would be invoked
	}
}