// 1-insert an element in an unsorted array
// C program to implement insert 
 
#include<stdio.h> 

// Inserts a key in arr[] of given capacity. 
// n is current size of arr[]. This 
// function returns n + 1 if insertion 
// is successful, else n. 
int insertSorted(int arr[], int n, 
				int key, 
				int capacity) 
{ 

	// Cannot insert more elements if n is already more than or equal to capcity 
	 if (n >= capacity) 
	return n; 

	arr[n] = key; 

	return (n + 1); 
} 

// main funcion  
int main() 
{ 
	int arr[20] = {2, 6, 20, 41, 53, 70}; 
	int capacity = sizeof(arr) / sizeof(arr[0]); 
	int n = 6; 
	int i, key = 26; 

	printf("\n Before Insertion: "); 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 

	// Inserting key 
	n = insertSorted(arr, n, key, capacity); 

	printf("\n After Insertion: "); 
	for (i = 0; i < n; i++) 
		printf("%d ",arr[i]); 

	return 0; 
} 
// USING THIS METHOD TIME COMPLEXITY OF PROGRAM IS O(n)

// 2-insert a node  in a linkedlist:Any postion //


void insertAfter(struct Node* prev_node, int new_data) 
{ 
	/* check if the given prev_node is NULL */
	if (prev_node == NULL) 
	{ 
	printf("the given previous node cannot be NULL");	 
	return; 
	} 
		
	/* allocate new node dynamically */
	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node)); 

	/*  put in the data */
	new_node->data = new_data; 

	/* Make next of new node as next of prev_node */
	new_node->next = prev_node->next; 

	/*  move the next of prev_node as new_node */
	prev_node->next = new_node; 
} 
// USING THIS METHOD TIME COMPLEXITY OF PROGRAM IS O(1)
 
// Here to comarison between Array and Linkedlist type data strucure 
// Where inserting an element into an array taking more time then
// Inserting a node into Linkedlist 
// So I just want to say one thing how we can use various Data Structures so that we can optimize the time 
// In above we use Linkedlist