#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node* link;
  };
  int item;
void insert_begin();
void insert_end();
void insert_anyloc();
void delete_begin();
void delete_end();
void delete_any_loc();
void display();

void main(){

int choice;
printf("Enter Choice 1) Insert At Beggining 2) Insert At End 3) Insert At Any location 4) Delete at Beggining 5) Delete at end 6) Delete at any location 7) Display 8)Exit  \n");
scanf("%d",&choice);
while(choice!=8){
switch(choice){
 case 1 :{
  insert_begin();
  break;
  
 }
 case 2 :{
  insert_end();
  break;
}
 case 3 :{
  insert_anyloc();
  break;
}
 case 4 :{
  delete_begin();
  break;
}
 case 5 :{
  delete_end();
  break;
}
 case 6 :{
  delete_any_loc();
  break;
}
case 7 :{
 display();
}

}
}
}

void insert_begin(){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter Data to be Entered : \n");
  scanf("%d",&item);
  
}

void insert_end(){
 struct node *temp,*ptr;
 temp=(struct node*)malloc(sizeof struct node);
 ptr=head;
 while(ptr->link!=NULL){
  ptr=ptr->link;
 }
 printf("Enter Data to be Entered : \n");
  scanf("%d",&item);
 ptr->link=temp;
 temp->data=item;
 temp->link=NULL;
 }
 
 void insert_anyloc(){
  int key;
  struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof struct node);
  printf("Enter Data After which new data should be Entered : \n");
  scanf("%d",&key);
  ptr=head;
  while(ptr->data==key && ptr->link!=NULL){
   ptr=ptr->link;
   }
   if(ptr->link==NULL){
   printf("Search Fails \n");
   }
   else{
   temp->link=ptr->link;
   ptr->link=temp;
   }
  }
  
void delete_begin(){
 struct node *ptr;
 if(head==NULL){
  break;
 }
 else {
  ptr=head;
  head=ptr->link;
  free(ptr);
}
}

void delete_end(){
 struct node *ptr,*temp;
 if(head->link==NULL){
   ptr=head;
   head=NULL;
   free(ptr);
 }
 ptr=head;
 temp=head->link;
 while(temp->link!=NULL){
   ptr=temp;
   temp=temp->link;
   }
  ptr->link=NULL;
  free(temp)
  }
  
void delete_any_loc(){
 int key;
 printf("Enter Key to be deleted  \n");
 scanf("%d",&key);
 struct node *ptr,*temp;
 ptr=head;
 if(head=NULL){
  break;
 }
 temp=ptr;
 while(ptr->link!=NULL){
  if(ptr->data==key){
   temp->link=ptr->link;
   free(ptr);
   }
   temp=ptr;
   ptr->ptr->link;
   }
   } 

void display(){

}
  
  
  
  
  
