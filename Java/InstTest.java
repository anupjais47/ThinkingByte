public class InstTest
{
	private int x;
	{
		System.out.println("initializer block: x="+x);
		x=5;
	}
	public InstTest()
	{
		System.out.println("constructor:x="+x);
	}
	public static void main(String args[])
	{
		obj=new InstTest();
		obj=new InstTest();
	}
	
	

}
