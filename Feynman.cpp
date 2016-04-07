#include<iostream>
using namespace std;
int main()
{
	int n,result;
	cin>>n;
	while(n!=0)
	{
		result=(n*(n+1)*(2*n+1))/6;
		cout<<result<<endl;
		cin>>n;
	}
	return 0;
}