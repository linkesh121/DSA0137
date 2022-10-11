#include<iostream>
using namespace std;
class T4Tutorials
{
	private:
		int i;
		public:
	T4Tutorials(int n)
	{
		cout<<endl<<"The reverse of the Entered number: ";
		for(i=n;n>0;n=n/10)
		{
			cout<<n%10;
		}
	}
	T4Tutorials(long int a)
	{
		cout<<endl<<" The reverse  of the Entered number: ";
		for(i=a;a>0;a=a/10)
		{
			cout<<a%10;
		}
	}
};
int main()
{
	int choice;
	cout<<"Enter choice: ";
	cin>>choice;
	switch(choice)
	{
		case 0:
		{
			int n;
			cout<<"Enter a number to Display T4Tutorials: ";
			cin>>n;
			T4Tutorials r(n);
			break;
		}
		case 1:
			{
			 long int a ;
			 cout<<"Enter  Number to Display T4Tutorials: ";
			 cin>>a;
			 T4Tutorials r(a);
		     break;
		   }
				default:
					cout<<"Invilide Choice:";	
	}
}