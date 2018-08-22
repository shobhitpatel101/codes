#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node *left;
struct node *right;
}*f,*r;

void create()
{
f=NULL;
r=NULL;
}

void df()
{
if(f==NULL&&r==NULL)
{
r=NULL;
f=NULL;
printf("\nempty");
 }
else{
if( f->right==NULL)
printf("\ndeleted");
else{
f=f->right;
printf("\ndeleted");
    }
}

}

void dr()
{

if(f==NULL&&r==NULL)
printf("\nempty");
else{
if(r->left==NULL)
{
r=NULL;
f=NULL;
printf("\ndeleted");
}
else{
r=r->left;
printf("\ndeleleted");
     }
}
}


void af()
{
printf("enter value:");
struct node *t=(struct node *)malloc(sizeof(node));
scanf("%d",&t->data);
t->left=NULL;
t->right=NULL;
if(f==NULL&&r==NULL)
{
r=t;
f=t;
}
else{
f->left=t;
t->right=f;
f=t;
     }
}

void ar()
{
printf("enter value(r):");
struct node *t=(struct node*)malloc(sizeof(node));
scanf("%d",&t->data);
t->left=NULL;
t->right=NULL;
if(f==NULL&&r==NULL)
{f=t;

}

{
r->right=t;
t->left=r;
r=t;
}
}

void show()
{
struct node *s;
s=f;
while(s!=r->right)
{
printf("==>%d",s->data);
s=s->right;
}
}

void main()
{
clrscr();

af();
af();
ar();
ar();
show();
dr();
dr();dr();
dr();
dr();
show();
getch();

}