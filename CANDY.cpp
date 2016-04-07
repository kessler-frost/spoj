#include<iostream>
using namespace std;
int main()
{
    int n,a[10000],sum=0,candies,c=0;
    cin>>n;
    while(n!=(-1))
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        candies=sum/n;             //candies is the no. of candies which have to be there in each packet
        if(sum%n==0)
        {
            c=0;
            for(int j=0;j<n;j++)    //j is the no. of packets a[j] is the no. of candies inside packet j
            {
                while(a[j]<candies)
                {
                    a[j]++;
                    c++;
                }
            }
            cout<<c<<endl;
        }
        else
        {
            cout<<(-1)<<endl;
        }
        cin>>n;
    }
    return 0;
}
