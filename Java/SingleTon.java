import java.io.*;
class SingleTon
{
	static void main(String args[])
	{
		TestSingleton obj1=new tastsingleton.getInstence();
		TestSingleton obj2=new tastsingleton.getInstence();
		
		System.out.println(obj1) = +obj1.tostring();
		System.out.println(obj2) = +obj2.tostring();
	}
}
class TestSingleTon
{
	static TestSingleTon obj =new TestSingleTon();
	
	private TestSingleTon()
	{


	}
	public static TestSingleTon getInstence()
	{
		return obj;	
	}


} 