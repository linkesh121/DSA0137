#include<iostream>
using namespace std;
class T4Tutorials_Constructor_Overloading
{
	protected :
		int i,k;
		int n,sum;
		int num1, sum1;
		int num2, sum2;
	public :
		T4Tutorials_Constructor_Overloading(int n)
		{	
			i=1;k=9,sum=0;
		for(int i=1;i<=n;i++)
				{
					sum=sum+k;
					k=k*10+9;
				}
                cout<<"sum of series"<<sum;
			}
		
		T4Tutorials_Constructor_Overloading(int num1,int num2)
		{
			i=1;k=9,sum1=0;
		for(int i=1;i<=num1;i++)
				{
					sum1=sum1+k;
					k=k*10+9;
				}
                cout<<"sum os series"<<sum1<<endl;
	    	i=1;k=9,sum2=0;
	     for(int i=1;i<=num2;i++)
				{
					sum2=sum2+k;
					k=k*10+9;
				}
                cout<<"sum os series"<<sum2<<endl;
	}
};
int main()
{
	int option;
	cout<<"Please Enter 1 FOR Single parameter T4Tutorials_Constructor_Overloadingor "<<endl;
	cout<<"Please Enter 2 FOR Multiple Paramter construcor "<<endl;
	cin>>option;
	if(option ==1)
	{
		cout<<"You Have Slected Single Paramater T4Tutorials_Constructor_Overloadingor    "<<endl<<endl;
		int n;
		cout<<"Please Enter a  Number to find series : "<<endl;
		cin>>n;
		T4Tutorials_Constructor_Overloading a(n);
	}
	else if(option==2)
	{
		cout<<"*** You Have slected Multiple Paramater T4Tutorials_Constructor_Overloadingor ***"<<endl<<endl;
		int num1,num2;
		cout<<" Please Enter 1st Number to find series :  ";
		cin>>num1;
		cout<<" Please Enter 2nd  Number to find series :  ";
		cin>>num2;
		T4Tutorials_Constructor_Overloading a(num1, num2);
	}
	else
	cout<<"invalid Input ";
}