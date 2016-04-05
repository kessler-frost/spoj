#include <iostream>
#include<math.h>
using namespace std;
int digit(int x)
{	
	int dgt=0;
	for(int i=0;x!=0;i++)
	{
		x=x/10;
		dgt+=1;
	}
	return dgt;
}
int main()
{
	int n,a,b,sum,i,i1,i2,isum,d,ar=0,br=0,sumr=0,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		d=digit(a);
		for(i1=0;i1<d;i1++)
		{
			t=a%10;
			a=a/10;
			ar=ar+(t*pow(10,d-i1-1));
		}
		d=digit(b);
		for(i2=0;i2<d;i2++)
		{
			t=b%10;
			b=b/10;
			br=br+(t*pow(10,d-i2-1));
		}
		sum=ar+br;
		d=digit(sum);
		for(isum=0;isum<d;isum++)
		{
			t=sum%10;
			sum=sum/10;
			sumr=sumr+(t*pow(10,d-isum-1));
		}
		cout<<sumr<<"\n";
		ar=0;br=0;sumr=0;
	}
	return 0;
}