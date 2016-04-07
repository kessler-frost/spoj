#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int col,l,row,k;
    char a[200],b[200][200],temp;
    cin>>col;
    while(col!=0)
    {
        k=0;
        scanf("%s",a);
        l=strlen(a);
        row=l/col;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                b[i][j]=a[k];
                k++;
            }
        }
        for(int i=1;i<row;i=i+2)
        {
            k=col-1;
            for(int j=0;j<(col/2);j++)
            {
                temp=b[i][k-j];
                b[i][k-j]=b[i][j];
                b[i][j]=temp;
            }
        }
        for(int j=0;j<col;j++)
        {
            for(int i=0;i<row;i++)
            {
                cout<<b[i][j];
            }
        }
        cout<<"\n";
        cin>>col;
    }
    return 0;
}
