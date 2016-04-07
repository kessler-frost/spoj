#include<iostream>
using namespace std;
int main()
{
	long x,y;
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>x>>y;
		if((y==x)||(y==(x-2)))
		{
			if(y%2==0)
			{
				cout<<(x+y)<<"\n";
			}
			else if(y%2==1)
			{
				cout<<(x+y-1)<<"\n";
			}
			else
			{
				cout<<"No Number\n";
			}
		}
		else
			cout<<"No Number\n";
	}
	return 0;
}