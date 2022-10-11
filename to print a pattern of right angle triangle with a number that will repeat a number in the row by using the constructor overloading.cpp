#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int i,j,n,r;
	public :
		~T4Tutorials()
		{
			cout<<"Enter no of rows : ";
			cin>>n;
			for(i=1 ; i<=n ; i++)
			{
				for(j=1 ; j<=i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
		}
	};
int main()
{
	T4Tutorials a;
}