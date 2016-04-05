#include<iostream>
using namespace std;
int main()
{
	int a[200],t,n,m,temp,index,x;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		a[0]=1;
		m=1;
		temp=0;
		for(int i=n;i>=1;i--)
		{
			index=0;
			while(index<m)
			{
				x=a[index]*i+temp;
				a[index]=x%10;
				temp=x/10;
				index++;
			}
			while(temp!=0)
			{
				a[m]=temp%10;
				temp=temp/10;
				m++;
			}
		}
		for(int i=(m-1);i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<"\n";
	}
}