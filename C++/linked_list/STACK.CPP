#include <iostream.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node *next;
}*top;
int count=0;

void create(){
top=NULL;
}

void pop()
{
if(top==NULL)
cout<<"/nempty";
else
{
top=top->next;
cout<<"/ndeleted";
count--;
}
}

void push()
{
struct node *temp=(struct node*)malloc(sizeof(node));

temp->next=NULL;
cout<<"enter value";
cin>>temp->data;
temp->next=top;
top=temp;
count++;
}

void disp()
{     struct node *s;
s=top;
for(int i=0;i<count;i++)
{
cout<<"->>"<<s->data;
s=s->next;
}
}

void main()
{
pop();
push();
push();
disp();
push();
push();
push();
pop();
disp();
getch();
}
