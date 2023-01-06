// DAY - 3
// Manu Driven program for Doubly linklist
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void create();
void display();
void insertAtfrist();
void insertAtlast();
int  searchNode();
struct node *head = NULL;
int main()
{
    create();
    insertAtfrist();
   printf("How many Nodes You want : ");
   int nodes;
   scanf("%d",&nodes);
   for(int i = 0; i < nodes ; i++){
    insertAtlast();
   }
   int ans = searchNode();
   if(ans == -1){
    printf("\n Data is Not found");
   }
   else{
    printf(" \n Data Found in Index :- %d ",ans);
   }
}

void display()
{
    struct node *ptr;

    if (head == NULL)
    {
        printf("list is Empty");
    }
    else
    {
        printf("Linklist is :- ");
        ptr = head;
        while (ptr != NULL)
        {
            printf(" %d->", ptr->data);
            ptr = ptr->next;
        }
    }
}
void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf(" \n Enter Data in Node : ");
    scanf("%d", &temp->data);
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        display();
    }
}

void insertAtfrist()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf(" \n Enter Data for New Node : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    display();
}

void insertAtlast()
{
    struct node *temp;
    struct node *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    printf(" \n Enter Data for last Node  : ");
    scanf("%d", &temp->data);
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        temp->prev = ptr;
        ptr->next = temp;
    }
    display();
}

int searchNode()
{

    struct node *ptr;
    ptr = head;
    int element;
    printf("\n Enter Element Search in Linklist : ");
    scanf("%d",&element);
    int idx = 0;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        idx = idx + 1;
        if (ptr->data == element)
        {
          return idx;
        }
       
    }
    return -1;
}