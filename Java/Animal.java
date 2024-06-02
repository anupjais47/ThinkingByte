import java.in.*;
class Animal
{
	void eat()
	{
		System.out.println("eating....");
	}
	class Dog extends Animal
	{
	void bark()
	{
		System.out.println("barking....");
	}
	class BabyDog extends Dog
	{
		System.out.println("weeping...");
	}
	class TestInheritance
	{
		public void main(Stroin args[])
		{
			BabyDog d=new BabyDog();
			d.weep();
			d.bark();
			d.eat();
		}
	}

}
