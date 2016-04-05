#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	long int m,n,p,j,f=0;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		for(p=m;p<=n;p++)
		{
			for(j=1;j<=sqrt(p);j++)
			{
				if(p%j==0&&p!=1)
				{f+=1;}
				if(f==2)
				{break;}
			}
			if(f==1)
			{cout<<p<<"\n";}
			f=0;
		}
		cout<<"\n\n";
	}
	return 0;
} 