#include<bits/stdc++.h>
using namespace std;

int s;
int c(int arr[],int ss,int se,int* tree,int i)
{
    if(ss==se)
    {
        tree[i]=arr[ss];
        return arr[ss];
    }
    
    int mid=ss+(se-ss)/2;
    tree[i]=(c(arr,ss,mid,tree,2*i+1)+c(arr,mid+1,se,tree,2*i+2));
    return tree[i]; 
}

int* construct(int arr[],int n)
{
    int x=(int)(ceil(log2(n)));
    s=2*(int)pow(2,x);
   
    int * tree=new int[s];
    
    c(arr,0,n-1,tree,0);
    return tree;
}

int sumq(int i,int j,int ss,int se,int *st,int si)
{cout<<"*";
    if(ss>=i&&se<=j)
    {
        return st[si];
    }
    
    if(se<i||ss>j)
    return 0;
    
    int mid=(ss+se)/2;
    return (sumq(i,j,ss,mid,st,2*si+1)+sumq(i,j,mid+1,se,st,2*si+2));
    
    
    
}

int query(int i,int j, int n,int *st)
{
    if(i<0&&j>n)
    return 0;
    
    return sumq(i,j,0,n-1,st,0);
}

void  uval(int *st,int i,int ss,int se,int val)
{
    if(i<ss||i>se)
    return ;
    
    st[i]=st[i]+val;
    
    if(ss!=se)
    {
    int mid=(ss+se)/2;
    uval(st,2*i+1,ss,mid,val);
    uval(st,2*i+2,mid+1,se,val);
    }
}

void update(int *st,int i,int val,int n,int arr[])
{
    int diff=val-arr[i];
    arr[i]=val;
    
    uval(st,0,0,n-1,diff);
 }

int main()
{
    int arr[]={0,1,3,4,2,1,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int *st=construct(arr,n);
    
    for(int i=0;i<=s;i++)
    cout<<st[i]<<",";
    
    cout<<endl<<query(0,7,n,st);
    
    update(st,2,10,n,arr);
    
    cout<<endl;
    for(int i=0;i<=s;i++)
    cout<<st[i]<<",";
    
    
    cout<<endl<<query(0,7,n,st);
    
    return 0;
}
