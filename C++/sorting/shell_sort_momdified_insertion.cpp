// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {cout<<a[i]<<",";
    }
}

void sort(int a[],int n)
{
   
   
   for(int gap=n/2;gap>0;gap=gap/2)
   {
       for(int i=gap;i<n;i++)
       {
           int t=a[i];
           int j;
           
           for(j=i;j>=gap&&a[j-gap]>t;j=j-gap)
           {
               a[i]=a[j-gap];
           }
           a[j]=t;
       }
   }
}



int main()
{
    int a[] = {12, 34, 54, 2, 3};
    int n=sizeof(a)/sizeof(a[0]);
    
    sort(a,n);
    
    display(a,n);
    
    return 0;
}

