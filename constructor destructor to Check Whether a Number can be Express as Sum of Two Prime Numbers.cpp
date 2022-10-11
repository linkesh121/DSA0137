#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int n, i, num1,num2,num3,j;
	public :
		T4Tutorials()
		{
			num1=1,num2=1,num3=0;
			cout<<"Check Whether a Number can be Express as Sum of Two Prime Numbers:"<<endl;
			cout<<"----\n";
			cout<<"Input  a positive integer: "<<endl;
			cin>>n;
			  for(i=3; i<=n/2; i++)
		     {     
		      num1=1;
		      num2=1;
		      for(j=2; j<i; j++)
		       {     
		         if(i%j==0)
		           { num1=0;j=i;}
		        }
		      for(j=2; j<n-i; j++)
		       {     
		         if((n-i)%j==0)
		           { num2=0;j=n-i;}
		        }
		         if(num1==1 && num2==1)
		           { printf("%d =  %d + %d  \n",n,i,n-i); 
		           num3=1;}
		    }
         if(num3==0)
           {
				cout<<"can not be expressed as sum of two prime numbers."<<endl;
			}
		}
};
int main()
{
	T4Tutorials a;
}