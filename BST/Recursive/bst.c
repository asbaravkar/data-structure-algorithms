#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    struct node *left, *right;

}node;



node *insert(node *root, int data)
{
    //create new node and initialize
    // q will follow p
    node *newNode, *p, *q;
    newNode = (node *) malloc(sizeof(struct node));
    newNode->key = data;
    newNode->left = newNode->right = NULL;

    if(root == NULL)
    {
        root = newNode;
        return root;
    }

    //if root not null
    p = root;
    while(p != NULL)
    {
        q = p;
        // q will be one node behind p
        if(p->key == data)
        {
            printf("\nElement already present");
            return root;
        }
        if(p->key > data)
            p = p->left;
        else
            p = p->right;
    }

    //once p is null loop breaks
    // q will be leaf node
    if(q->key > data)
        q->left = newNode;
    else
        q->right = newNode;
    return root;
}



node *delete(node *root, int data)
{
    node *p, *q, *r;

    if(root == NULL)
    {
        printf("\n No tree exist");
        return root;
    }

    p = root;
    while(p != NULL && p->key != data)
    {
        q = p;
        if(p->key > data)
            p = p->left;
        else
            p = p->right;
    }
    //either loop breaks due to p==null or key is found
    if(p == NULL)
    {
        printf("\nElement to be deleted not found");
        return root;
    }

    //both child null of p
    if(p->left == NULL && p->right == NULL)
    {
        //p can be root
        if(p == root)
        {
            root = NULL;
            free(p);
            return root;
        }
        if(q->left == p)
            q->left = NULL;
        else
            q->right = NULL;
        free(q);
        return root;
    }

    //left not null but right null
    if(p->left != NULL && p->right == NULL)
    {
        if(p == root)
        {
            root = p->left;
            free(p);
            return root;
        }

        if(q->left == p)
            q->left = p->left;
        else
            q->right = p->left;
        free(p);
        return root;
    }

    if(p->left == NULL && p->right != NULL)
    {
        if(p == root)
        {
            root = p->right;
            free(p);
            return root;
        }

        if(q->left == p)
            q->left = p->right;
        else
            q->right = p->right;
        free(p);
        return root;
    }

    r = p->right;
    q = p;
    while( r->left != NULL)
    {
        q = r;
        r = r->left;
    }
    p->key = r->key;
    if(q->left == r)
        q->left = r->right;
    else
        q->right = r->right;
    free(r);
    return root;

}



void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);
    }
}




void preorder(node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}




void postorder(node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->key);
    }
}



void display(node *root)
{
    if(root == NULL)
    {
        printf("\nTree is empty");
        return;
    }
    printf("\n Inorder: ");
    inorder(root);
    printf("\n Preorder: ");
    preorder(root);
    printf("\n Postorder: ");
    postorder(root);
}




int main()
{
    node *root;
    int op, x;
    root = NULL;
    while(1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
        printf("\nEnter option: ");
        scanf("%d",&op);
        if(op == 4)
            break;
        switch(op)
        {
            case 1:printf("\nEnter element to insert: ");
                   scanf("%d",&x);
                   root = insert(root,x);
                   break;

            case 2:printf("\nEnter element to be deleted: ");
                    scanf("%d",&x);
                    delete(root, x);
                    break;

            case 3:display(root);
                    break;

            default: printf("\nPlease enter valid option");
        }
    }
    return 0;
}
