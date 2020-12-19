#include<stdio.h>
#include<stdlib.h>
typedef struct node node;

struct node
{
    int data;
    struct node * left;
    struct node * right;
};


node * newNode(int temp)
{
    node *n=(node *)malloc(sizeof(node));
    n->data = temp;
    n->left=NULL;
    n->right=NULL;

    return n;
}

node *insert(node* temp,int val)
{
    if(temp==NULL)
    {
        temp = newNode(val);
        return temp;
    }

    
        if(val<temp->data)
        {
            temp->left = insert(temp->left,val);
        }

        else
        {
            temp->right = insert(temp->right,val);
        }
        
        return temp;
}

void inorder(node * n)
{

    if(n!=NULL)
    {
        inorder(n->left);
        printf("%d ",n->data);
        inorder(n->right);
    }
}

int main()
{
    int ch,val;
    node *root=NULL;

    while(ch!=3)
    {
        printf("1. Insert\n2. Display\n3. Quit\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("Enter value to be inserted: ");
            scanf("%d",&val);
            root = insert(root,val);
            printf("%d Inserted.\n",val);
            break;

            case 2:
            inorder(root);
            printf("\n");
            break;

            case 3:
            ch=3;
            break;

            default:
            printf("Invalid Option\n");
            break;
        }
    }

return 0;
}