// Example program
#include <iostream>
#include <string>
#include<vector>

using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {cout<<a[i]<<",";
    }
}

void sort(int a[],int n)
{
    int max=a[0];
    int min=a[0];
    
    for(int i=0;i<n;i++)
    {
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    
    int range=max-min+1;
    vector<int>holes[range];
    
    for(int i=0;i<n;i++)
    {
        holes[a[i]-min].push_back(a[i]);
    }
    
    int k=0;
    for(int i=0;i<range;i++)
    {
        vector<int> ::iterator it;
        
        for(it=holes[i].begin();it!=holes[i].end();++it)
        {
            a[k++]=*it;
        }
    }

}



int main()
{
    int a[]={3,2,10,4,9,4,4,0};
    int n=sizeof(a)/sizeof(a[0]);
    
    sort(a,n);
    display(a,n);
    return 0;
}

