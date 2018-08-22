// Example program
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    
    for(int i=1;i<n;i++)
    {
        int t=a[i];
        int j=i-1;
        
        while(j>0&&a[j]>t)
        {
            a[j+1]=a[j];
            j=j-1;
            
        }
        a[j+1]=t;
        
    }
    
    for(int i=0;i<n;i++)printf("%d,",a[i]);
    return 0;
}

