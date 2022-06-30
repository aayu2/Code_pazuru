#include<stdlib.h>
#include <stdio.h>

void create(); void display();
void insert_begin(); void insert_end(); void insert_pos(); void delete_begin(); void delete_end(); void delete_pos(); void search();
int countNodes();

struct node
{
int info;
struct node *next;
};
struct node *start=NULL;

int main()
{
int choice; while(1){

printf("\n	MENU	\n"); printf("\n 1.Create\n");
printf("2.Display\n");
printf("3.Insert at the beginning\n"); printf("4.Insert at the end\n"); printf("5.Insert at specified position\n"); printf("6.Delete from beginning \n"); printf("7.Delete from the end\n"); printf("8.Delete from specified position\n"); printf("9.Search\n");
printf("10.Count the number of elements in list.\n"); printf("11.EXIT\n");
printf("\n-	--	\n");
 
printf("Enter your choice: "); scanf("%d",&choice); switch(choice)
{
 
case 1:


case 2:


case 3:


case 4:


case 5:


case 6:


case 7:


case 8:
 

create(); break;

display(); break;

insert_begin(); break;

insert_end(); break;

insert_pos(); break;

delete_begin(); break;

delete_end(); break;

delete_pos(); break;
 

 
case 9:


case 10:


case 11:
 

search(); break;

countNodes(); break;

exit(0); break;
 

 
default:


}
}
 

printf("\n Wrong Choice: "); break;
 
return 0;
}
void create()
{
 
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node)); if(temp==NULL)
{
printf("\nOut of Memory Space: "); exit(0);
}
printf("\n Enter the data value for the node: "); scanf("%d",&temp->info);
temp->next=NULL; if(start==NULL)
{
 

}
else
{
 
start=temp;



ptr=start;
while(ptr->next!=NULL)
{
 
ptr=ptr->next;
}
ptr->next=temp;
}
}

void display()
{
struct node *ptr; if(start==NULL)
{
 


}
else
{
 
printf("\nList is empty: "); return;



ptr=start;
printf("\nThe List elements are: "); while(ptr!=NULL)
{
 
printf("%d ",ptr->info ); ptr=ptr->next ;
}
}
}

void insert_begin()
{
struct node *temp;
 
temp=(struct node *)malloc(sizeof(struct node)); if(temp==NULL)
{
printf("\nOut of Memory Space: "); return;
}
printf("\nEnter the data value for the node: " ); scanf("%d",&temp->info);
temp->next =NULL; if(start==NULL)
{
 

}
else
{


}
}
 
start=temp;



temp->next=start; start=temp;
 

void insert_end()
{
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node)); if(temp==NULL)
{
printf("\nOut of Memory Space: "); return;
}
printf("\nEnter the data value for the node: " ); scanf("%d",&temp->info );
temp->next =NULL; if(start==NULL)
{
 

}
else
{
 
start=temp;



ptr=start;
while(ptr->next !=NULL)
{
 
ptr=ptr->next ;
}
ptr->next =temp;
}
}

void insert_pos()
 
{
struct node *ptr,*temp; int i,pos;
temp=(struct node *)malloc(sizeof(struct node)); if(temp==NULL)
{
printf("\nOut of Memory Space: "); return;
}
printf("\nEnter the position for the new node to be inserted: "); scanf("%d",&pos);
printf("\nEnter the data value of the node: "); scanf("%d",&temp->info) ;

temp->next=NULL; if(pos==0)
{
 


}
else
{
 
temp->next=start; start=temp;



for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next; if(ptr==NULL)
{
 
printf("\nPosition not found: "); return;
}
}
temp->next =ptr->next ; ptr->next=temp;
}
}

void delete_begin()
{
struct node *ptr; if(ptr==NULL)
{
 


}
else
{
 
printf("\nList is Empty: "); return;



ptr=start; start=start->next ;
printf("\nThe deleted element is :%d ",ptr->info); free(ptr);
 
}
}

void delete_end()
{
struct node *temp,*ptr; if(start==NULL)
{
printf("\nList is Empty: "); exit(0);
}
else if(start->next ==NULL)
{
 




}
else
{
 
ptr=start; start=NULL;
printf("\nThe deleted element is:%d ",ptr->info); free(ptr);



ptr=start;
while(ptr->next!=NULL)
{
 
temp=ptr; ptr=ptr->next;
}
temp->next=NULL;
printf("\nThe deleted element is:%d ",ptr->info); free(ptr);
}
}

void delete_pos()
{
int i,pos;
struct node *temp,*ptr; if(start==NULL)
{
 


}
else
{
 
printf("\nThe List is Empty: "); exit(0);



printf("\nEnter the position of the node to be deleted: "); scanf("%d",&pos);
if(pos==0)
{
 
ptr=start;
 



}
else
{
 
start=start->next ;
printf("\nThe deleted element is:%d ",ptr->info ); free(ptr);



ptr=start;
for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ; if(ptr==NULL)
{
 
printf("\nPosition not Found: "); return;
}
}
temp->next =ptr->next ;
printf("\nThe deleted element is:%dt",ptr->info ); free(ptr);
}
}
}

void search()
{
struct node *ptr; int item,i=0,flag; ptr = start;
if(ptr == NULL)
{
printf("\nEmpty List\n");
}
else
{
printf("\nEnter item which you want to search: \n"); scanf("%d",&item);
while (ptr!=NULL)
{
if(ptr->info == item)
{
printf("item found at location %d ",i+1); flag=0;
}
else
{
flag=1;
}
i++;
ptr = ptr -> next;
}
 
if(flag==1)
{
printf("Item not found!\n");
}
}
}

int countNodes()
{
struct node* temp = start; int i = 0;
while(temp != NULL)
{
i++;
temp = temp->next;
}
printf("Length : %d",i);
}
