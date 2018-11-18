#include<bits/stdc++.h>
using namespace std;

struct ver{
    int v;
    int dist;
};

int getMin(int moves[],int n)
{
   queue<ver>q;
   
   bool *vis=new bool[n];
   
   memset(vis,false,sizeof(vis));
   
   q.push({0,0});
   vis[0]=true;
   
   
   int dist;
   while(!q.empty())
   {
       int v=q.front().v;
       
       if(v==n-1)
        break;
       
       dist=q.front().dist;
       
       q.pop();
       
       for(int j=v+1;j<v+7&&j<n;++j)
       {
          
          if(!vis[j])
          {ver a;
          
           a.dist=dist+1;
           vis[j]=true;
           
           if(moves[j]!=-1)
           {
               a.v=moves[j];
           }
           else
           a.v=j;
           
           q.push(a);
          }
              
          
           
       }
       
   }
   
   return dist;
}


int main() 
{ 
    // Let us construct the board given in above diagram 
    int N = 30; 
    int moves[N]; 
    for (int i = 0; i<N; i++) 
        moves[i] = -1; 
  
    // Ladders 
    moves[2] = 21; 
    moves[4] = 7; 
    moves[10] = 25; 
    moves[19] = 28; 
  
    // Snakes 
    moves[26] = 0; 
    moves[20] = 8; 
    moves[16] = 3; 
    moves[18] = 6; 
  
    cout << "Min Dice throws required is " << getMin(moves, N); 
    return 0; 
} 
