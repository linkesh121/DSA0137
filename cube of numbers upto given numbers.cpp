#include<iostream>
#include<conio.h>
using namespace std;
class T4Tutorialst
{
	private:
		int i,n;
		public:
			T4Tutorialst()
	        {
	        	i=1;
	        	n=0;
	        }
	        T4Tutorialst(int p, int q)
	        {
	        	i=p;
	        	n=q;
			}
			void display()
			{
				cout<<"enter the number :"<<endl;
				cin>>n;
				for(i=1; i<=n; i++)
				{
							cout<<" The cube of"<<i<<"is ="<<(i*i*i)<<endl;
					
				}
			}
			~T4Tutorialst()
			{
				cout<<" clear :"<<endl;
			}
		};
int main()
   {
   	int p,q;
	T4Tutorialst obj(p,q);
	obj.display();
	getch();
}