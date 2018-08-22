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



void sort(int a[],int n)
{
  int count[10]={0};
  int i=0;
  int j=0;
  
  
 
  
  
  for(i=0;i<n;i++)
  {
        j=a[i];
        count[j]++;
        
  }
  int sum=0;
  
  for(i=0;i<n;i++)
  {
      sum=count[i]+sum;
      count[i]=sum;
  }
  
  int c[n]={0};
  
  for(i=0;i<n;i++)
  {
      c[count[a[i]]]=a[i];
      count[a[i]]--;
  }
  
  display(c,n);
  
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

