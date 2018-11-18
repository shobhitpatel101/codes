#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)cin>>a[i];
    
    int f=a[0],s=-1;
    
    for(int i=1;i<n;i++)
    {
        if(f<a[i])
        {  f=a[i];
        }
        if(a[i]!=f&&s<a[i])
        {
            s=a[i];
        }
    }
    
    if(s==-1)
        cout<<"no second higest number";
    
    
    else
        cout<<endl<<f+s;
        

return 0;
}

