//#include<stdio.h>
//void addanelement(int *arr,int posn,int no,int lng){
//	int i,j;
//	for(i=lng+1;i>=posn;i--){
//		arr[i]=arr[i-1];	
//	}
//		arr[posn-1]=no;
//		for(i=0;i<=lng;i++){
//		printf("%d\n",arr[i]);
//	}
//}
//void deleteanelement(int *arr,int posn,int lng){
//	int i,j;
//	for(i=posn-1;i<lng;i++){
//		arr[i]=arr[i+1];
//	}
//	for(i=0;i<lng-1;i++){
//		printf("%d\n",arr[i]);J
//	}
//}
//int main(){
//	int i,no,posn,lng;
//	int arr[100];
//	printf("enter length of array");
//	scanf("%d",&lng);
//	printf("enter element of array");
//	for(i=0;i<lng;i++){
//		scanf("%d",&arr[i]);
//	}
//	printf("enter a element to add");
//	scanf("%d",&no);
//	printf("enter a position to add");
//	scanf("%d",&posn);
//	//addanelement(arr,posn,no,lng);
//	deleteanelement(arr,posn,lng);
//
//	return 0;
//}






//linear search
//#include<stdio.h>
//int linear_search(int *arr,int no){
//	int i=0;
//	while(i<5){
//		if(arr[i]==no){
//			return i+1;
//			break;
//		}
//		else{
//			i++;
//		}
//	
//	}
//	return 0;	
//}
//int main(){
//	int no,result;
//	int arr[100]={1,2,3,4,6};
//	no=1;
//	result=linear_search(arr,no);
//	if(result==0){
//		printf("cant found the number");
//	}else{
//		printf("result find at %d posn",result);
//	}
//	
//	return 0;
//	
//}



//binary search

//#include<stdio.h>
//int binary_search(int arr[],int l,int r,int x){
//	if(r >= l){
//		int mid=l+(r-l) /2;
//	if(arr[mid] == x)
//		return mid;
//	if(arr[mid]>x)
//		return binary_search(arr,l,mid-1,x);
//		
//	return binary_search(arr,mid+1,r,x);	
//	
//	}
//	return -1;
//}
//
//int main(void){
//	int arr[]={1,2,3,4,5};
//	int n=sizeof(arr) / sizeof(arr[0]);
//	int x=55 ;
//	int result=binary_search(arr,0,n-1,x);
//	
//	(result == -1) ? printf("elemnet not found")
//				   :printf("element found in %d posn",result);
//	
//	
//	return 0;
//}





//srructure


//#include<stdio.h>
//#include<stdlib.h>
//
//struct node{
//	int data;
//	struct node* next;
//};
//struct node* insertelementatfirst(struct node*head,int no ){
//	struct node*ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=no;
//	ptr->next=head;
//	return ptr;		
//}
//struct node* insertelementatposn(struct node*head,int index,int no ){
//	struct node*ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=no;
//	struct node*p=head;
//	int i=0;
//	while(i!= index-1){
//		p=p->next;
//		i++;
//	}
//	ptr->next=p->next;
//	p->next=ptr;
//	return head;		
//}
//
//struct node* insertelementbeforeposn(struct node*head,struct node*posn,int no ){
//	struct node*ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=no;
//	struct node*p=head;
//	while(p->next!= posn){
//		p=p->next;
//	}
//	p->next=ptr;
//	ptr->next=posn;
//	return head;		
//}
//struct node* insertelementatlast(struct node*head,int no ){
//	struct node*ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=no;
//	struct node* p=head;
//	while(p->next!=NULL){
//		p=p->next;
//	}
//	p->next=ptr;
//	ptr->next=NULL;
//
//	return head;		
//}
//		void linkedlist_traversal(struct node *ptr){
//		while(ptr!= NULL){
//			printf("element %d \n",ptr->data);
//			ptr=ptr->next;
//		}
//	}
//	
//int main(){
//	struct node*head;
//	struct node*second;
//	struct node*third;
//	struct node*fourth;
//	struct node*fifth;
//
//
//
//head=(struct node*)malloc(sizeof(struct node));	
//second=(struct node*)malloc(sizeof(struct node));	
//third=(struct node*)malloc(sizeof(struct node));	
//fourth=(struct node*)malloc(sizeof(struct node));
//fifth=(struct node*)malloc(sizeof(struct node));
//
//head->data=7;
//head->next=second;
//
//second->data=8;
//second->next=third;
//
//third->data=9;
//third->next=fourth;
//
//fourth->data=10;
//fourth->next=NULL;



//head=insertelementatlast(head,11);
//head=insertelementatfirst(head,11);
//head=insertelementbeforeposn(head,third,11);
//head=insertelementatposn(head,3,11);
//linkedlist_traversal(head);
//return 0;
	
//}	





//delete element onlinked list
//#include<stdio.h>
//#include<stdlib.h>
//struct node{
//	int data;
//	struct node* next;
//};
//struct node* deletefirstelement(struct node*head){
//	struct node* ptr=head;
//	head=head->next;
//	free(ptr);
//	return head;
//}
//struct node* deletelastelement(struct node*head){
//	struct node* p=head;
//	struct node* q=head->next;
//	
//	while(q->next!=NULL){
//		p=p->next;
//		q=q->next;
//	}
//	p->next=NULL;
//	free(q);
//	return head;
//}
//struct node* deleteposnelement(struct node*head,struct node*posn){
//	struct node* p=head;
//	struct node* q=head->next;
//	
//	while(q->next!=posn){
//		p=p->next;
//		q=q->next;
//	}
//	p->next=q->next;
//	free(q); 
//	return head;
//}
//void traversal(struct node* ptr){
//	while(ptr!= NULL){
//		printf("elemnet is %d\n",ptr->data);
//		ptr=ptr->next;
//	}
//}
//
//int main()	{
//struct node* head=(struct node*)malloc(sizeof(int));
//struct node* first=(struct node*)malloc(sizeof(int));
//struct node* second=(struct node*)malloc(sizeof(int));
//struct node* third=(struct node*)malloc(sizeof(int));
//
//
//	head->data=11;
//	head->next=first;
//	first->data=12;
//	first->next=second;
//	second->data=13;
//	second->next=third;
//	third->data=14;
//	third->next=NULL;
//	
////head=deletefirstelement(head);	
////head=deletelastelement(head);
//head=deleteposnelement(head,second);
//traversal(head);
//	
//}
//	





//circularlinkelist
//#include<stdio.h>
//#include<stdlib.h>
//
//struct node{
//	int data;
//	struct node*next;
//};
//void traversal(struct node* head){
//	struct node* ptr=head;
//	do{
//		printf("element is %d\n",ptr->data);
//		ptr=ptr->next;
//	}while(ptr!=head);
//}
//int main(){
//struct node* head=(struct node*)malloc(sizeof(int));
//struct node* first=(struct node*)malloc(sizeof(int));
//struct node* second=(struct node*)malloc(sizeof(int));
//struct node* third=(struct node*)malloc(sizeof(int));
//
//
//	head->data=11;
//	head->next=first;
//	first->data=12;
//	first->next=second;
//	second->data=13;
//	second->next=third;
//	third->data=14;
//	third->next=head;
//	
//	
//traversal(head);
//	
//}



//tree in data structure
//#include<stdio.h>
//#include<stdlib.h>
//struct node{
//	int data;
//	struct node* left;
//	struct node* right;
//	
//};
//
//struct node* newnode(int data){
//	struct node* ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=data;
//	ptr->left=NULL;
//	ptr->right=NULL;
//	
//}
//int main(){
//	struct node*head=newnode(5);
//	head->left=newnode(6);
//	head->right=newnode(6);
//	while(head!=NULL){
//		printf("%d",head->right->data);
//		head=head->left;
//		head=head->right;
//	}
//	getchar();
//	return 0;
//}
//

//#include<stdio.h>
//#include<stdlib.h>




// The function returns the root of the BST (currently rooted at 'root') 
// after inserting a new Node with value 'Key' into it. 
//struct Node {
//    int data;
//    Node *left;
//    Node *right;
//
//    Node(int val) {
//        data = val;
//        left = right = NULL;
//    }
//};
//Node* insert(Node* root, int Key)
//{
//    if(Key < root->data){
//        root->left->data=Key;
//    }
//        root->right->data=Key;
//}
//int main(){
//	node(5);
//	insert(root,4);
//}

//#include<stdio.h>
//#include<stdlib.h>

//struct node{
//	int data;
//	struct node* left;
//	struct node* right;
//};
//struct node* newnode(int data){
//	struct node* ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=data;
//	ptr->left=NULL;
//	ptr->right=NULL;
//}
//int depth(struct node* ptr){
//	int d=0;
//	while(ptr->left!=NULL){
//		d++;
//		ptr=ptr->left;	
//	}
//	return d;
//}
//bool isfullbinarytree(struct node* ptr){
//	if(ptr == NULL){
//		return true;
//	}
//	if(ptr->left==NULL && ptr->right==NULL){
//		return true;
//		
//	}
//	if((ptr->left) && (ptr->right)){
//		return (isfullbinarytree(ptr->left) && isfullbinarytree(ptr->right));
//	}
//	return false;
//}
//int noofnodes(struct node* ptr){
//		if(ptr == NULL){
//		return 0;
//	}
//		return(1+noofnodes(ptr->left)+noofnodes(ptr->right));
//}
//void preorder(struct node* ptr){
//	if(ptr == NULL){
//		return ;
//	}
//		printf("%d\n",ptr->data);
//		preorder(ptr->left);
//		preorder(ptr->right);
//		
//		}
//
//void inorder(struct node* ptr){
//	if(ptr == NULL){
//		return ;
//	}
//		inorder(ptr->left);
//		printf("%d\n",ptr->data);
//		inorder(ptr->right);
//		}			
//void postorder(struct node* ptr){
//	if(ptr == NULL){
//		return ;
//	}
//		postorder(ptr->left);
//		postorder(ptr->right);
//		printf("%d\n",ptr->data);
//		}			
//
//int main(){
//	struct node* root=newnode(5);
//	root->left=newnode(6);
//	root->left->left=newnode(8);
//	root->left->left->right=newnode(11);
//	root->right=newnode(7);
//	root->right->left=newnode(21);
//	root->right->right=newnode(22);
//	root->right->left->left=newnode(24);
//	int d=depth(root);
//	printf("depth is %d\n",d);
//	postorder(root);
//	printf("%d\n",isfullbinarytree(root));
//	printf("%d\n",noofnodes(root));
//}













//
////binarysearch tree
//#include<stdio.h>
//#include<stdlib.h>
//
//struct node{
//	int key;
//	struct node* left;
//	struct node* right;
//};
//
//struct node* newnode(int data){
//	struct node* ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->key=data;
//	ptr->left=NULL;
//	ptr->right=NULL;
//	return ptr;	
//}
//struct node* SEARCHKEY(struct node* ptr,int key){
//	if(ptr==NULL || ptr->key== key){
//		return ptr;
//	}
//	if(key< ptr->key){
//		return SEARCHKEY(ptr->left,key);
//	}
//	return SEARCHKEY(ptr->right,key);
//}
//struct node* insert(struct node* ptr,int key){
//	if(ptr == NULL){
//		return newnode(key);
//	}
//	if(key< ptr->key){
//		ptr->left= insert(ptr->left,key);
//	}
//		if(key> ptr->key){
//		ptr->right=insert(ptr->right,key);
//	}
//	return ptr;
//}
//void inorder(struct node* ptr){
//	if(ptr != NULL){
//	
//	inorder(ptr->left);
//	printf("element %d\n",ptr->key);
//	inorder(ptr->right);
//}
//}
//struct node * minValueNode(struct node* node) 
//{ 
//    struct node* current = node; 
//  
//    /* loop down to find the leftmost leaf */
//    while (current && current->left != NULL) 
//        current = current->left; 
//  
//    return current; 
//} 
//  struct node* deleteNode(struct node* root, int key) 
//{ 
//    // base case 
//    if (root == NULL) return root; 
//  
//    // If the key to be deleted is smaller than the root's key, 
//    // then it lies in left subtree 
//    if (key < root->key) 
//        root->left = deleteNode(root->left, key); 
//  
//    // If the key to be deleted is greater than the root's key, 
//    // then it lies in right subtree 
//    else if (key > root->key) 
//        root->right = deleteNode(root->right, key); 
//  
//    // if key is same as root's key, then This is the node 
//    // to be deleted 
//    else
//    { 
//        // node with only one child or no child 
//        if (root->left == NULL) 
//        { 
//            struct node *temp = root->right; 
//            free(root); 
//            return temp; 
//        } 
//        else if (root->right == NULL) 
//        { 
//            struct node *temp = root->left; 
//            free(root); 
//            return temp; 
//        } 
//  
//        // node with two children: Get the inorder successor (smallest 
//        // in the right subtree) 
//        struct node* temp = minValueNode(root->right); 
//  
//        // Copy the inorder successor's content to this node 
//        root->key = temp->key; 
//  
//        // Delete the inorder successor 
//        root->right = deleteNode(root->right, temp->key); 
//    } 
//    return root; 
//} 
//int main(){
//	int ptr;
//	struct node* head = NULL;
//	head=insert(head,56);
//	insert(head,79);
//	insert(head,18);
//	inorder(head);
//	printf("%d",SEARCHKEY(head,56));
//	head = deleteNode(head, 79); 
//    printf("Inorder traversal of the modified tree \n"); 
//    inorder(head); 
//  
//	return 0;
//}
//






















//binary tree  practise
//#include<stdio.h>
//#include<stdlib.h>
//
//struct node{
//	int data;
//	struct node* left;
//	struct node* right;
//};
//
//struct node* newnode(int data){
//	struct node* ptr=(struct node*)malloc(sizeof(struct node));
//	ptr->data=data;
//	ptr->left=ptr->right=NULL;
//}
//struct node* insert(struct node* ptr,int data){
//	if(ptr==NULL){
//		return newnode(data);
//	}
//	if(data<ptr->data){
//		ptr->left= insert(ptr->left,data);
//	}
//	if(data>ptr->data){
//		ptr->right= insert(ptr->right,data);
//	}
//	
//}
//struct node* minvalue(struct node* ptr){
//	struct node* min=ptr;
//	if(ptr == NULL){
//		return ptr;
//	}
//	else if(min->left!=NULL){
//		min=ptr->left;
//	}
//	return min;
//}
//struct node* deletenode(struct node* ptr,int key){
//	if(ptr == NULL && ptr->data== key){
//		return ptr;
//	}
//	else if(key < ptr->data){
//		ptr->left=deletenode(ptr->left,key);
//	}
//	else if(key > ptr->data){
//		ptr->right=deletenode(ptr->right,key);
//	}
//	else{
//		if(ptr->left==NULL){
//			struct node* ptr2=ptr->right;
//			free(ptr);
//			return ptr2;
//		}
//		if(ptr->right==NULL){
//			struct node* ptr2=ptr->left;
//			free(ptr);
//			return ptr2;
//		}
//		struct node* ptr1=minvalue(ptr->right);
//		ptr->data=ptr1->data;
//		ptr->right=deletenode(ptr->right,ptr1->data);
//	}
//	return ptr;
//	
//}
//void inorder(struct node* head){
//	if(head!=NULL){
//	inorder(head->left);
//	printf("element is%d\n",head->data);
//	inorder(head->right);
//}
//}
//
//int main(){
//	struct node* ptr=NULL;
//	ptr=insert(ptr,5);
//	insert(ptr,4);
//	insert(ptr,6);
////	ptr->left=insert(4);
////	ptr->right=newnode(6);
//	inorder(ptr);
//	ptr=deletenode(ptr,6);
//		inorder(ptr);
//	
//	
//	
//}















//stack in datastructure


//#include<stdio.h>
//int maxsize=8;
//int stack[8];
//int top=-1;
//
//int isfull(){
//	if(top==maxsize){
//		return 1;
//	}else{
//		return 0;
//	}
//	
//}
//int isempty(){
//	if(top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//	
//}
//int peak(){
//	return stack[top];
//}
//
//int pop(){
//	if(!isempty()){
//		int data;
//		data=stack[top];
//		top=top-1;
//		return data;
//	}else{
//		printf("stack is empty ,cant able to pop");
//	}
//}
//int push(int data){
//	if(!isfull()){
//		top=top+1;
//		stack[top]=data;
//	}else{
//		printf("stack is full,cant able to insert");
//	}
//}
//int main(){
//	push(5);
//	push(6);
//	push(7);
//	push(8);
//	pop();
//	printf("elements are");
//	while(!isempty()){
//		printf("%d\n",pop());
//	}
//	return 0;
//	
//}














//queue in data structure
//#include<stdio.h>
//#define size 5
//
//void enqueue(int data);
//void dequeue();
//void display();
// 
// int arr[size],front=-1,rear=-1;
// 
//void enqueue(int data){
//	if(rear==size-1){
//		printf("queue is full");
//	}else{
//		if(front==-1)
//			front=0;
//		
//			rear++;
//			arr[rear]=data;
//			printf("\n inserted=%d",data);
//	}
//	
//}
//void dequeue(){
//	if(front==-1){
//		printf("queue is empty");
//	}
//	else{
//		printf("\ndelete>%d",arr[front]);
//		front++;
//		if(front>rear){
//			front=rear=-1;
//		}
//		
//	}
//}
//	void display(){
//		if(rear ==-1){
//			printf("queue is empty");
//		}
//		else{
//			int i;
//			printf("\nelements are");
//			for(i=front;i<=rear;i++){
//				printf("%d\n",arr[i]);
//			}
//			
//		}
//	}
//int main(){
//	enqueue(5);
//	enqueue(6);
//	enqueue(7);
//	enqueue(8);
//	enqueue(9);
//	enqueue(10 );
//	display();
//	dequeue();
//	display();
//	
//	return 0;
//}










//practise array

//
//#include<stdio.h>
//
//void insertanelement(int *arr,int posn,int no,int length){
//	int i;
//	for(i=length;i>=posn-1;i--){
//		arr[i]=arr[i-1];
//	}
//	arr[i]=no;
//	for(i=0;i<=posn;i++){
//		printf("%d",arr[i]);
//	}
//}
//
//int main(){
//	int i,j;
//	int arr[10]={1,2,3,4,6};
//	insertanelement(arr,1,5,5);
//	
//}


//#include<stdio.h>
//#include<stdlib.h>
//void reversearray(int *arr,int length){
//	int i;
//	for(i=length;i>=0;i--){
//		printf("%d",arr[i]);
//	}
//	
//}
//int main(){
//	int i,j,length;
//	int arr[]={1,2,3,4,6};
//	length=sizeof(arr)/sizeof(int);
//	printf("%d\n",length);
//	reversearray(arr,length);
//}


//#include <stdio.h>
//int main(void){
//    // Here your code !
//    int i,arr[10];
//    for(i=0;i<10;i++){
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<10;i++){
//        printf("%d",arr[i]);
//    }
//    
//   return 0; 
//}







// Write a program in C to read n number of values in an array and display it in reverse order


//
//#include<stdio.h>
//int main(){
//	    int i,arr[10];
//    for(i=0;i<10;i++){
//        scanf("%d",&arr[i]);
//    }
//    for(i=9;i>=0;i--){
//        printf("%d",arr[i]);
//    }
//    
//   return 0; 
//}


// Write a program in C to find the sum of all elements of the array

//#include<stdio.h>
//int main(){
//	    int i,arr[10],sum=0;
//    for(i=0;i<3;i++){
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<3;i++){
//    	sum=arr[i]+sum;
//    }
//    printf("%d",sum);
//    
//   return 0; 
//}



//Write a program in C to copy the elements of one array into another array

//#include<stdio.h>
//int main(){
//	    int i,arr[10],sum=0,arr2[10];
//    for(i=0;i<3;i++){
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<3;i++){
//    arr2[i]=arr[i];
//}
//    for(i=0;i<3;i++){
//    printf("%d",arr2[i]);	
//    } 
//   return 0; 
//}

//Write a program in C to count a total number of duplicate elements in an array

//#include<stdio.h>
//int main(){
//	int i,arr[10],arr2[10],arr3[10];
//	int mm=1,ctr=0,j;
//	for(i=0;i<10;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<10;i++){
//		arr2[i]=arr[i];
//		arr3[i]=0;
//	}
//	for(i=0;i<10;i++){
//		for(j=0;j<10;j++){
//			if(arr[i]==arr2[j]){
//				arr3[j]=mm;
//				mm++;
//			}
//		}
//		mm=1;
//	}
//	for(i=0;i<10;i++){
//		if(arr3[i]==2){
//			ctr++;
//		}
//	}
//	printf("The total number of duplicate elements found in the array is: %d \n", ctr);
//    
//	  printf("\n\n");	
//	  return 0;	
//}






// Write a program in C to print all unique elements in an array.


//#include<stdio.h>
//int main(){
//	int i,arr[10],arr2[10],arr3[10];
//	int mm=1,ctr=0,j;
//	for(i=0;i<10;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<10;i++){
//		arr2[i]=arr[i];
//		arr3[i]=0;
//	}
//	for(i=0;i<10;i++){
//		for(j=0;j<10;j++){
//			if(arr[i]==arr2[j]){
//				arr3[j]=mm;
//				mm++;
//			}
//		}
//		
//		mm=1;
//	
//	}
//	for(i=0;i<10;i++){
//		if(arr3[i]==2){	
//			ctr++;
//		}
//	printf("The total number of duplicate elements found in the array is: %d \n", ctr);
//    
//	  printf("\n\n");	
//	  return 0;	
//}
//}








//#include<stdio.h>
//#include<math.h>
//int main(){
//	int a=7.4;
//char b='z',a='u';
//char king=a+b;
//a=pow(2,3);
//printf("%d",a);
//
//}
//printf("%f",a);
//}












//1.
//#include<stdio.h>
//int main(){
//	int b=10,y=5,d=6,x=3,z=7,ans;
//	ans=2*b*y/(d+1)-x/3*(z+y );
//	printf("%d",ans);
//	return 0;
//	
//}




//2.
//#include<stdio.h>
//int main(){
//	int n;
//	float f;
//	printf("enter a integer");
//	scanf("%d",&n);
//	printf("enter a float");
//	scanf("%f",&f);
//	printf("float is %f",(float)n);
//	printf("interger is %d",(int)f);
//	return 0;
//}



////3.
//#include<stdio.h>
//int main(){
//	char c;
//	printf
//#include<s("enter a character");
//	scanf("%c",&c);
//	printf("ASCII CODE IS %d",c);
//	return 0;
//}



//4.
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int no;
//	printf("enter a number");
//	scanf("%d",&no);
//	if(no%3==0){
//		printf("true");
//	}
//	else{
//		no=pow(no,3);
//		printf("%d",no);
//	}
//	return 0;
//}



//5.p=principle_amt,r=rate,t=time
//#include<stdio.h>
//int main(){
//	float p=10,r=20,a=54;
//	int t=6;
//	a=(p*t*r)/100;
//	printf("%f",a);
//	return 0;
//	
//}



//6.
//#include<stdio.h>
//int main(){
//	float total,da;
//	int salary;
//	printf("enter the salary");
//	scanf("%d",&salary);
//	if(salary>1500){
//		da=salary*0.15;
//	}
//	else{
//		da=salary*0.5;
//	}
//	total=salary+da;
//	printf("salary is %f",total);
//	return 0;
//}






//7.
//#include<stdio.h>
//int main(){
//	int no;
//	printf("enter a number");
//	scanf("%d",&no);
//	if(no==50){
//		printf("true");
//	}
//	else if(no<50 && no>40){
//		printf("%d",--no);
//	}
//	else if(no>50 && no<60){
//		printf("%d",no++);
//	}
//		return 0;	
//}







//8.
//#include<stdio.h>
//#include<ctype.h>
//int main(){
//	char c;
//	printf("enter a character");
//	scanf("%c",&c);
//	printf("uparr case is %c and lower case is %c",toupper(c),tolower(c));
//	return 0;
//}

//#include<stdio.h>
//int uncommonadd(int arr1[],int arr2[]){
//	int sum=0,sum1=0,div=0,i,j,no1,no2;
//	no1=sizeof(arr1)/sizeof(arr1[0]);
//	no2=sizeof(arr2)/sizeof(arr2[0]);
//	
//	for(i=0;i<no1-1;i++){
//		for(j=0;j<no2;j++){
//			if(arr1[i]!=arr2[j]){
//				sum=sum+arr2[j];
////				printf("%d\n",arr2[j]);
//				
//				
//			}
//			
//		}
//		
//	}
//	printf("%d\n",sum);
//	while(sum>0 || sum1 > 9){
//		if(sum==0){
//			sum=sum1;
//			sum1=0;
//		}
//		sum1+=sum%10;
//		sum/=10;
//	};
//	return sum1;
//}
//int main(){
//	int ans;
//	int arr1[]={12,45,67,87};
//	int arr2[]={34,23,12,45};
//	ans=uncommonadd(arr1,arr2);
//	printf("%d",ans);
//	return 0;
//	
//}








//
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int h=0,m=0,s=0;
//	printf("please enter a time format in hh:mm:ss");
//	scanf("%d%d%d",&h,&m,&s);
//	start:
//	for(h;h<24;h++)
//	{
//		for(m;m<60;m++){
//			for(s;s<60;s++){
//					system("cls");
//				printf("\n\n\n\n%d%d%d",h,m,s);
//			
//				if(h<12){
//					printf("AM");
//				}
//				else{
//					printf("PM");
//				}
//				for(double i=0;i<3619999;i++)
//				{
//				i++;
//				i--;
//	}
//			}
//			s=0;
//		}
//		m=0;
//	}
//	h=0;
//	goto start;
//	return 0;
//}





//#include<stdio.h>
//int main(){
//	int arr2[]={0,0,0,0,0};
//	int i,n,j;
//	int arr[]={1,2,2,2,5};
//	for(i=0;i<5;i++){
//		arr2[arr[i]-1]++;
//	}
//		for(j=0;i<5;j++){
//		printf("%d",arr2[j]);
//		
//		}
//}



#include<stdio.h>

int refunction(int a,int b,int* c,int* d){
	int sum=a+b;
	if(sum<10){
		*c=a+b;
		*d=a-b;
	}else{
		*c=a;
		*d=b;
	}
	
}
int main(){
	int a=10,b=20,c,d;
	refunction(a,b,&c,&d);
	printf("%d\n%d",c,d);
	return 0;
}






