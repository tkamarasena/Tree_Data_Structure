//Trees code


# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

struct node{
	int data;
	struct node*left;
	struct node*right;
};


int main(){
	
	
	struct node*one,*two,*three,*four,*five,*six;			//inizialisation nodes
	

	one=(struct node*) malloc(sizeof(struct node));    // memory allocaation 
	two=(struct node*) malloc(sizeof(struct node));
	three=(struct node*) malloc(sizeof(struct node));
	four=(struct node*) malloc(sizeof(struct node));
	five=(struct node*) malloc(sizeof(struct node));
	six=(struct node*) malloc(sizeof(struct node));
	
	
	one->data=40;				//Assign valuse
	two->data=33;
	three->data=60;
	four->data=11;
	five->data=50;
	six->data=55;
	
	one->left=two;
	one->right=three;
	two->left=four;
	two->right=NULL;
	three->left=five;
	three->right=NULL;
	four->left=NULL;
	four->right=NULL;
	five->left=NULL;
	five->right=six;
	six->left=NULL;
	six->right=NULL;
	
	
	printf("Data=%d\t Left=%p\t Right=%p\n", one->data, one->left, one->right);	
	printf("Data=%d\t Left=%p\t Right=%p\n", two->data, two->left, two->right);
	printf("Data=%d\t Left=%p\t Right=%p\n", three->data, three->left, three->right);
	printf("Data=%d\t Left=%p\t Right=%p\n", four->data, four->left, four->right);
	printf("Data=%d\t Left=%p\t Right=%p\n", five->data, five->left, five->right);
	printf("Data=%d\t Left=%p\t Right=%p\n", six->data, six->left, six->right);
	
	
	
	
	
	
	
	getch();
	return 0;
}




