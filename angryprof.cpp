#include<iostream>
using namespace std;
int main()
{	
	int t,n,k,minutes[1000],temp,s;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		s=0;
		cin>>n>>k;
		for(int j=0;j<n;j++)
			cin>>minutes[j];
		for(int j=0;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(minutes[j]>minutes[k])
				{
					temp=minutes[j];
					minutes[j]=minutes[k];
					minutes[k]=temp;
				}
			}
		}
		while(minutes[s]<=0)
		{
			s++;
		}
		if((s)<k||n<k)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}