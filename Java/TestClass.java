class TestClass
{
	System.out.println("Inside Instence Block");
	this.intExample=100;
}
TestClass()
{
	super();//constructor of super class (object class)
	System.out println(" Instance Constructor");
	this.intExample=200;
}
public static void main(String args[])
{
	TestClass obj=new TestClass();
	System.out.println("value of instance int variable:"+obj.intExample);
}