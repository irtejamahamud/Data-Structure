#include<stdio.h>

struct node{
int data;
struct node *left;
struct node *right;
};
typedef struct node Node;
Node *root=NULL;

Node* Newnode(int key){
Node *temp=(Node*)malloc(sizeof(Node));
temp->data=key;
temp->left=temp->right=NULL;
return temp;
}

Node* insert(Node* root,int key){
    if(root==NULL){
        return Newnode(key);
    }else if(root->data > key){
        root->left=insert(root->left,key);
    }else if(root->data < key){
        root->right = insert(root->right,key);
    }
   return root;
}

void display(){
int c;
printf("\n1.Inorder\n2.Preorder\n3.Postorder\n");
printf("Enter your choice:");
scanf("%d",&c);
switch(c){
case 1: inorder(root);break;
case 2: preorder(root);break;
case 3: postorder(root);break;
}
}
void inorder(struct node* root){
if(root!=NULL){
    inorder(root->left);
    printf("%d \n",root->data);
    inorder(root->right);
}
}
void postorder(struct node* root){
if (root != NULL) {
 inorder(root->left);
 inorder(root->right);
 printf("%d \n", root->data);
}
}
void preorder(struct node* root){
if (root != NULL) {
 printf("%d \n", root->data);
 inorder(root->left);
 inorder(root->right);
}
}
int main(){
int c,data;
do{
printf("\n");
printf("1.Add elements\n");
printf("2.Display\n");
//printf("3.Search\n");
//printf("4.Delete\n");
printf("enter you choice\n");
scanf("%d",&c);
switch(c){
case 1:
    printf("Enter the value:");
    scanf("%d",&data);
    root=insert(root,data);
    break;
case 2:
    display();
    break;
//case 3:
  //  printf("Enter the data you want to Found");
    //scanf("%d",&data);
    //search(root,data);
    //break;
//case 4:
   // printf("Enter the data you want to Delete");
   // scanf("%d",&data);
   // deleteNode(root,data);
   // break;
}
}while(1);
}
