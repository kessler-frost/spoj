#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int n,i,t,k,j,f;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		f=0;
		for(k=1;n>=pow(5,k);k++)
		{
			if(n<pow(5,k+1))
			{
				for(j=1;j<=k;j++)
				{
					f+=n/pow(5,j);
				}
			}
		}
		cout<<f<<"\n";
	}
	return 0;
} 