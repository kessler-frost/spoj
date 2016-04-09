#include<iostream>
using namespace std;
int main()
{
    int a[1000],b[1000],n,temp,t,sum;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        sum=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
         cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
             if(a[k]<a[j])
             {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(b[k]<b[j])
                {
                    temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            sum+=(a[j]*b[j]);
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
