#include<iostream>
using namespace std;
int main()
{
    int a,b[100],c=0,d=0,i;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>b[i];
        if(b[i]%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(c>d)
    {
        cout<<"READY FOR BATTLE";
    }
    else
    {
        cout<<"NOT READY";
    }
    return 0;
}
