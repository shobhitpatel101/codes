// Example program
#include <iostream>
#include <string>
using namespace std;

int part(int a[],int s,int n)
{
    int p=a[n];
    int i=s-1;
    
    for(int j=s;j<n;j++)
    {
        if(a[j]<=p)
        {i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        
        
        
        
        
    }
    
    int t=a[i+1];
            a[i+1]=a[n];
            a[n]=t;
            
    return (i+1);
}

void sort(int a[],int s,int n)
{
   if(s<n)
   {
       int p=part(a,s,n);
       
       sort(a,s,p-1);
       sort(a,p+1,n);
   }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}


int main()
{
    int n;
    int a[]={2,3,8,4,2,4,5};
    n=sizeof(a)/sizeof(a[0]);
    
    sort(a,0,n);
    
    display(a,n);
        
    return 0;
}

