#include<iostream>
#include<conio.h>
using namespace std;
class T4Tutorials
{
	private:
		int i,n;
		public:
			T4Tutorials()
	        {
	        	i=1;
	        	n=0;
	        }
	        T4Tutorials(int p, int q)
	        {
	        	i=p;
	        	n=q;
			}
			void display()
			{
				cout<<"Please enter the number:"<<endl;
				cin>>n;
				for(i=1; i<=n; i++)
				{
							cout<<" cube of"<<i<<"is:"<<(i*i*i)<<endl;
					
				}
			}
		};
int main()
   {
   	int p,q;
	T4Tutorials object(p,q);
	T4Tutorials object2;
	object.display();
	getch();
}