import java.lang.*;
/*class Thread
{
	public void show()
	{
		System.out.println("I'm from thread ");
	}
}*/
class Thread1 implements Runnable
{
	int x;
	public void run()
	{
		for(x=1; x<21; x++)
		System.out.print("Thread1, x= "+x+" ");
	}
}
class Thread2 implements Runnable
{
	int y;
	public void run()
	{
		for(y=1; y<21; y++)
		System.out.print("Thread2, y= "+y+" ");
	}
}
class Thread3 implements Runnable
{
	int z;
	public void run()
	{
		for(z=1; z<21; z++)
		System.out.print("Thread3, z= "+z+" ");
	}
}
class ThreadTest
{
	public static void main(String []a)
	{
		Thread1 t1=new Thread1();
		Thread2 t2=new Thread2();
		Thread3 t3=new Thread3();
		Thread1 th1=new Thread1();
		Thread1 th2=new Thread2();
		Thread1 th3=new Thread3();
		th1.show();
		th2.show();
		th3.show();
	}
}
