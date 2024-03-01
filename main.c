#include <stdio.h>


struct treeNode {                                           
   struct treeNode *leftPtr; // pointer to left subtree 
   int data; // node value                               
   struct treeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode         
typedef struct treeNode TreeNode; // synonym for struct treeNode
typedef TreeNode *TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
	int size,;
	TreeNodePtr root;
}BST;

// prototypes
void insertNode( TreeNodePtr *treePtr, int value );

void insertNode( BTS *b, int value ){
	 TreeNodePtr t =b->root,new_node;
	 int inserted=0;
new_node=(TreeNodePtr) malloc(sizeof(TreeNode));
	if(new_node){
		new_node->leftPtr=NULL;
		new_node->rigthPtr=NULL;
		new_node->data=value;
	/*First Node*/
	if(!b->root)	b->root=new_node;
	else {
        while(!inserted){
   if(t->data >value){
  
  }
   else{

	}	

  }//end while		
  }//end else;
}//end function

		
