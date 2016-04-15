#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long b;
	int t,a,power,ld;
	cin>>t;
    for(int i=1;i<=t;i++)
    {
    	cin>>a>>b;
    	if(a==0) {cout<<0<<endl; continue;}
    	if(b==0) {cout<<1<<endl; continue;}
    	a=a%10;
    	b=b%4;
    	if(b==0) b=4;
    	ld=pow(a,b);
    	ld=ld%10;
    	cout<<ld<<endl;
    	ld=0;
    }
    return 0;
}