#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
} ;

void main()
{clrscr();
struct node *start,*temp,*p,*s;
printf("enter element:");
start=(struct node*)malloc(sizeof(struct node));
scanf("%d",&start->data );
start->next=NULL;
p=start;
for(int i=0;i<5;i++)
{ temp=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&temp->data);
      temp->next=NULL;

{ p->next=temp;
p=temp;
}


}

cout<<"-----------------\n";
s=start;

while(s!=NULL)
{
printf("%d\t",s->data);
s=s->next;
}
//insert at last
cout<<"for insertion at last";
s=start;
while(s->next!=NULL)
{
s=s->next;
}
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->next=NULL;
p->next=temp;
p=temp;

s=start;
cout<<"------------\n";
while(s!=NULL)
{
printf("%d\n",s->data);
s=s->next;
}
//insert at perticular val
int val;
printf("insert at pos:");
scanf("%d",&val);
s=start;
p=NULL;
while(s->data!=val&&s->next!=NULL)
{ p=s;
s=s->next;



}
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->next=s;
p->next=temp;

cout<<"----------\n";
s=start;
while(s!=NULL)
{
printf("%d\n",s->data);
s=s->next;

}
getch();
}