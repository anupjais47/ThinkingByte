#include<iostream>
using namespace std;
class Number
{
	public:
		void Print(int i)
		{
			cout<<"\nInteger="<<i<<endl;
		}
		void Print(float i)
		{
			cout<<"\nFloat="<<i<<endl;
		}
		void Print(char i)
		{
			cout<<"\nCharecter="<<i<<endl;
		}
};
int main()
{
	int i=5;
	float j=6.0;
	char ch='a';
	Number obj;
	obj.Print(i);
	obj.Print(j);
	obj.Print(ch);
	return 0;
}
