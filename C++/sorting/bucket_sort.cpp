// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void display(float a[],int n)
{
    for(int i=0;i<n;i++)
    {cout<<a[i]<<",";
    }
}

void sort(float a[],int n)
{
    vector <float> b[n];
    
    for(int i=0;i<n;i++)
    {
        b[int(n*a[i])].push_back(a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        sort(b[i].begin(),b[i].end());
    }
    
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<b[i].size();j++)
        {
            a[k++]=b[i][j];
            
        }
    }
    

}



int main()
{
    float a[]={0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n=sizeof(a)/sizeof(a[0]);
    
    sort(a,n);
    
    display(a,n);
    
    return 0;
}

