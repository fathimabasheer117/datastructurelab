#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int n,i,item,k;
struct node *p,*q,*root,*temp;
void inoredersuccessor(struct node *t)
{
	if(t->right!=NULL)
	{
		temp=t->right;
		while(temp->left!=NULL)
		{
			temp=temp->left;
			printf("%d",temp->data);
		}
	}
	else
	{
		struct node *r=root, *s;
		while(r->data!=t->data)
		{
			if(p->data<=r->data)
			{
				s=r;
				r=r->left;
			}
			else
			{
				r=r->right;
			}
			
		}
		printf("%d is the inorder successor",s->data);
	}
}
struct node *minValueNode(struct node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
  current = current->left;
  return current;
}

struct node *deleteNode(struct node *root, int data)
{
 
  if (root == NULL)
{
return root;
}
  if(data< root->data)
{
    root->left = deleteNode(root->left, data);
}
  else if (data > root->data)
{
    root->right = deleteNode(root->right, data);
    printf("deleted node is:%d",data);
}
  else {
   
    if (root->left == NULL)
 {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
else if (root->right == NULL)
 {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

   
    struct node *temp = minValueNode(root->right);
    root->data = temp->data;
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}
void search(struct node *t)
{
	
	if(t->data==k)
	{
		printf("%d is Found",k);
	}
	else if(t->data>k && t->left!=NULL)
	{
		search(t->left);
	}
	else if(t->data<k && t->right!=NULL)
	{
		search(t->right);
	}
	else
	{
		printf("%d is not Found",k);
	}
}
void preorder(struct node *t)
{
	if(t!=NULL)
	{
		printf("%d\t",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
void inorder(struct node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d\t",t->data);
		inorder(t->right);
	}
}
void postorder(struct node *t)
{
	if(t!=NULL)
	{
		
		postorder(t->left);
		postorder(t->right);
		printf("%d\t",t->data);
	}
}
void minimum(struct node *t)
{
	printf("\n Minimum value : ");
	while(t->left!=NULL)
	{
		t=t->left;
	}
	printf("%d",t->data);
}
void maximum(struct node *t)
{
	printf("\n Maximum value : ");
	while(t->right!=NULL)
	{
		t=t->right;
	}
	printf("%d",t->data);
}
void main()
{
	int c=1,option,x;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	printf("Enter the nodes\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&item);
		p=(struct node *)(malloc(sizeof(struct node)));
		p->data=item;
		p->left=NULL;
		p->right=NULL;
		if(i==0)
		{
			root=p;
		}
		else
		{
			q=root;
			while(1)
			{
		
				if(p->data > q->data)
				{
					if(q->right==NULL)
					{
						q->right=p;
						break;
					}
					else
					{
						q=q->right;
					}	
				}
				else
				{
					if(q->left==NULL)
					{
						q->left=p;
						break;
					}
					else
					{
						q=q->left;
					}
				}
			}
		}
	}
	printf("\n**** Binary Search Tree Operation****\n");
	while(c==1)
	{
		printf("\n**** Main Menu ****\n");
		printf("1. Search\n");
		printf("2. Preorder\n");
		printf("3. Inorder\n");
		printf("4. Postorder\n");
		printf("5. Minimum value\n");
		printf("6. Maximum value\n");
		printf("7. Inorder Successor\n");
		printf("8. Deletion\n");
	    	printf("\nEnter your option : ");
	    	scanf("%d",&option);
		switch(option)
		{
			case 1: printf("\nEnter the data to be searched: ");
				scanf("%d",&k);
				search(root);
				break;
			case 2: preorder(root);
				break;
			case 3: inorder(root);
				break;
			case 4: postorder(root);
				break;
			case 5: minimum(root);
				break;
			case 6: maximum(root);
				break;
			case 7: printf("\nEnter the data to find successor: ");
				scanf("%d",&k);
				inoredersuccessor(root);
				break;
			case 8:printf("enter the node to be deleted:");
                   scanf("%d",&x);
                   root = deleteNode(root,x);
 
			
			default: printf("\nInvalid Option");
		}
		printf("\nDo you want to continue(0/1) : ");
		scanf("%d",&c);
	}
}
