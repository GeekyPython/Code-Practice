#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int val)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;

    if(root == NULL)
    {
        root = n;
    }

    else
    {
        struct node *ptr = root;
        
        while(ptr->left!=NULL && ptr->right!=NULL)
        {
            if(ptr->data>n->data)
            {
                ptr = ptr->left;
            }

            else
            {
                ptr = ptr->right;
            }
        }

        if(ptr->data>n->data)
        {
            ptr->left = n;
        }

        else
        {
            ptr->right = n;
        }
    }
}

void display(struct node *n)
{
    if(root == NULL)
    {
        printf("Tree is empty\n");
    }

    else
    {
        if(n)
        {
            printf("%d ",n->data);
            display(n->left);
            display(n->right);
        }
    }
}

int main()
{
    int ch,val;
    while(ch!=3)
    {
        printf("1. Insert\n2. Display\n3.Exit\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("Enter value to be inserted: ");
            scanf("%d",&val);
            insert(val);
            break;

            case 2:
            display(root);
            printf("\n");
            break;

            case 3:
            ch = 3;
            printf("Exiting....\n");
            break;

            default:
            printf("Invalid input, please try again\n");
            break;
        }
    }
    return 0;
}