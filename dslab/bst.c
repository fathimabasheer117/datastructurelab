#include<stdio.h>
#include<stdlib.h>
	struct node
      {
        int data;
        struct node *left,*right;
      };
     struct node*createtree()
     { 
	int val;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data to insert(enter 0 if no data to be inserted)");
	scanf("%d",&val);
     if(val==0)
    {
	return NULL;
    }
	temp->data=val;
	printf("\n enter the left child of %d",temp->data);
	temp->left=createtree();
	printf("\nenter right child of %d",temp->data);
	temp->right=createtree();
	return temp;
    }
	void preorder(struct node *pre)
   {
     if(pre!=NULL)
   {
 	printf("%d",pre->data);
	preorder(pre->left);
	preorder(pre->right);
   }
  }
       void inorder(struct node *in)
   {
     if(in!=NULL)
   {
	inorder(in->left);
	printf("%d",in->data);
	inorder(in->right);
   }
   }
      void postorder(struct node *post)
   { 
    if(post!=NULL)
   {
	postorder(post->left);
	postorder(post->right);
	printf("%d",post->data);
   }
    }
	void main()
   {
	struct node *root;
	root=createtree();
	printf("\n preorder traversal:\t");
	preorder(root);
	printf("\n inorder traversal:\t");
	inorder(root);
	printf("\n postorder traversal:\t");
	postorder(root);
   }
