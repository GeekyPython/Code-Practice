#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node * right;
};

struct node * root = NULL;


struct node * insert(int val)
{
    struct node * nn = (struct node *)malloc(sizeof(struct node));
    nn->data = val;
    nn->left = NULL;
    nn->right = NULL;

    if(root == NULL)
    {
        root = nn;
    }

    else
    {
        struct node *ptr = root;

        while(ptr->left!=NULL && ptr->right!=NULL)
        {
            if(nn->data<ptr->data)
            {
                ptr = ptr->left;
            }

            else
            {
                ptr = ptr->right;
            }
        }

        if(ptr->data<nn->data)
        {
            ptr->right = nn;
        }

        else
        {
            ptr->left = nn;
        }
    }

    return nn;
}

void display(struct node *n)
{
    if(n!=NULL)
    {
        printf("%d\n",n->data);
        display(n->left);
        display(n->right);
    }    
}

int main()
{
    int ch,val;

    while(ch!=3)
    {
        printf("1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
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
            break;

            case 3:
            ch=3;
            printf("Exiting....\n");
            break;

            default:
            printf("Invalid choice, please try again\n");
            break;
        }
    }

    return 0;
}