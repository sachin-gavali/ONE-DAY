#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
// display node
void display(struct node *temp)
{
    if (temp == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        printf("Linklist is : ");
        while (temp != NULL)
        {
            printf(" -> %d", temp->data);
            temp = temp->next;
        }
    }
}

/* int newNode(struct node *temp)
{
    if (temp == NULL)
    {
        temp = head;
    }
    else
    {
int i = 5;
        while (i>0)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter data");
            scanf("%d", &temp->data);
            temp = temp->next;
            printf("Linklist is : ");
            while (temp != NULL)
            {
                printf(" -> %d", temp->data);
                temp = temp->next;
            }
            display(head);
            i = i - 1;
        }
    }
} */

void insertNode(struct node*temp){
    // get data for new node 
    temp = (struct node*)malloc(sizeof(struct node));
    printf(" \n Enter Data ");
    scanf("%d",&temp->data);
    temp->next= head;
    head = temp;
}

void delateNode(struct node*temp){
    temp = (struct node*)malloc (sizeof(struct node));
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    printf("Node Delated");
    ptr = head;
    ptr->next = temp;
    head = temp;
    free(temp);
    display(head);
}

int main()
{
    struct node *node2;
    head = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    // get input for node2 or head node
    printf("Enter Data for Head Node ");
    scanf("%d", &head->data);
    head->next = node2;
    printf("Enter data for node 2 ");
    scanf("%d", &node2->data);
    node2->next = NULL;
    insertNode(head);
    display(head);
    insertNode(head);
    display(head);
    delateNode(head);
    delateNode(head);
 
   
    return 0;
}