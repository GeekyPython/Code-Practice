#include<stdio.h>
#include<stdlib.h>
typedef struct Node Node;

struct Node
{
    int data;
    Node *right;
    Node *left;
};

Node * newNode(int val)
{
    Node * new = (Node *)malloc(sizeof(Node));
    new->data = val;
    new->left=NULL;
    new->right=NULL;
    
    return new;
}

Node * insert(Node *new, int val)
{
    if(new==NULL)
    {
        new = newNode(val);
        return new;
    }

    if(val<new->data)
    {
        new->left = insert(new->left,val);
    }

    else
    {
        new->right = insert(new->right,val);
    }
    
    return new;
}

void preorder(Node * p)
{
    if(p!=NULL)
    {
        preorder(p->left);
        printf("%d ",p->data);
        preorder(p->right);
        
    }
}

int main()
{
    Node * root=NULL;
    root = insert(root,2);
    root = insert(root,10);
    root = insert(root,9);
    root = insert(root,11);
    preorder(root);

    return 0;
}





/*Node * insert(int val)
{
    Node* new = (struct Node *)malloc(sizeof(struct Node));
    new->data = val;

    if(root==NULL)
    {
        root = new;
    }    

    else
    {
        Node *ptr = root;
        
        while(ptr!=NULL)
        {
            if(val<ptr->data)
            {
                ptr=ptr->left;
            }

            else
            {
                ptr=ptr->right;
            }
        }

        if(ptr->data>val)
        {
            ptr->left = new;
        }

        else
        {
            ptr->right =  new;
        }
        new->left=NULL;
        new->right=NULL;
        
    }
    printf("%d inserted.\n");

    return new;
}

void print(Node *p)
{
    p= root;

    if(p==NULL)
    {
        return;
    }

    printf("%d ",p->data);
    print(p->left);
    print(p->right);    
}


int main()
{
    int temp;
    Node *tg=root;
    int ch;
    
   /* while(ch!=3)
    {
        printf("1.Insert\n2.Display\n3.Quit\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter value to insert: "); 
            scanf("%d",&temp);
            insert(temp);
            break;

            case 2:
            print(tg);
            break;

            case 3:
            ch=3;
            break;

            default:
            printf("Invalid Option");
            break;
        }
    }

    insert(3);
    print(root);

    return 0;
}*/
