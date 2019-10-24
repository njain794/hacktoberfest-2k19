#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,5,10,50,100};
    int b,c,d=0,i,j,k,s;
    cin>>k;
    for(j=0;j<k;j++)
    {
        d=0;
    cin>>b;
    for(i=5;i>=0;i--)
    {
        if(b/a[i]>0)
        {
            c=b/a[i];
            b=b%a[i];
            d=d+c;
        }
    }
    cout<<d<<"\n";
    }
    return 0;
}
