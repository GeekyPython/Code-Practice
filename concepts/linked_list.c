#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * root = NULL;

void append(int val)
{
    struct node *ln = (struct node*)malloc(sizeof(struct node));
    ln->next=NULL;
    ln->data=val;

    if(root==NULL)
    {
        root=ln;
        printf("%d Entered into list successfully\n",val);
    }

    else
    {
        struct node *ptr = root;

        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        
        ptr->next = ln;
        printf("%d Entered into list successfully\n",val);
    }
}

void display()
{
    struct node *ptr;
    
    if(root==NULL)
    {
        printf("Empty List");
    }

    else
    {
        ptr=root;

        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }

        printf("\n");
    }
}

void delete(int val)
{
    struct node *ptr,*preptr;

    ptr=root;
    preptr=root;

    if(root==NULL)
    {
        printf("Empty List\n");
    }

    else if(ptr->next==NULL)
    {
        if(ptr->data!=val)
        {
            printf("ELement Not Found\n");
        }

        else
        {
            ptr->next=NULL;
        }
    }
    
    else
    {
        while(ptr->data!=val && ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }

        if(preptr==root && preptr->data==val)
        {
            printf("Deleting %d...\n",preptr->data);
            root = preptr->next;
            printf("Deletion Completed\n");
        }

        else if(ptr->next==NULL && ptr->data!=val)
        {
            printf("Element Not Found\n");
        }

        else
        {
            printf("Deleting %d...\n",ptr->data);
            preptr->next = ptr->next;
            printf("Deletion Completed\n");
        }
    }
}

void insert_begin(int val)
{
    struct node *ln = (struct node *)malloc(sizeof(struct node));
    ln->data=val;

    if(root==NULL)
    {
        ln->next=NULL;
        root=ln;
    }

    else
    {
        ln->next=root;
        root=ln;
    }
}

int main()
{   
    int ch,val;
    

    while(ch!=5)
    {
        printf("Enter your choice:\n1. Append\n2. Insert At Beginning\n3. Display\n4. Delete\n5. Exit ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("Enter value to be appended: ");
            scanf("%d",&val);
            append(val);
            break;

            case 2:
            printf("Enter value to be inserted: ");
            scanf("%d",&val);
            printf("Inserting %d\n",val);
            insert_begin(val);
            printf("Insertion Completed\n");
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Enter value to be deleted: ");
            scanf("%d",&val);
            delete(val);
            break;

            case 5:
            printf("Exiting...\n");
            ch=5;
            break;

            default:
            printf("Invalid Input, please try again\n");
            break;
        }
    }

    return 0;
}

