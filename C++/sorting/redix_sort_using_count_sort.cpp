// Example program
#include <iostream>
#include <string>
using namespace std;


void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

void countsort(int a[],int n,int exp)
{
    int count[10]={0};
    int i;
    
    for(i=0;i<n;i++)count[(a[i]/exp)%10]++;
    
    int sum=0;
    
    for(i=0;i<10;i++){
        sum =sum+count[i];
        count[i] =sum;
    }
    
    int c[n]={0};
    
    for(i=0;i<n;i++)
    {
        c[count[(a[i]/exp)%10]]=(a[i]/exp)%10;
        count[(a[i]/exp)%10]--;
    }
    
    display(c,n);
}

void sort(int a[],int n)
{int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
    for(int e=1;max/e>0;e=e*10)
    {
        countsort(a,n,e);
    }
    
}

int main()
{
    int n;
    int a[]={2,3,8,4,2,4,5};
    n=sizeof(a)/sizeof(a[0]);
    
    sort(a,n);
    
    display(a,n);
        
    return 0;
}

