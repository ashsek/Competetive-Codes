#include <bits/stdc++.h> 

#define lli long long int

using namespace std; 

struct Node 
{ 
	struct Node *left, *right; 
	int data; 
}; 

// Create and return a pointer of new Node. 
Node *createNode(int x) 
{ 
	Node *p = new Node; 
	p -> data = x; 
	p -> left = p -> right = NULL; 
	return p; 
} 

// Insert a new Node in Binary Search Tree. 
void insertNode(struct Node *root, int x) 
{ 
	Node *p = root, *q = NULL; 

	while (p != NULL) 
	{ 
		q = p; 
		if (p -> data < x) 
			p = p -> right; 
		else
			p = p -> left; 
	} 

	if (q == NULL) 
		p = createNode(x); 
	else
	{ 
		if (q -> data < x) 
			q -> right = createNode(x); 
		else
			q -> left = createNode(x); 
	} 
} 

// Return the maximum element between a Node 
// and its given ancestor. 
int maxelpath(Node *q, int x) 
{ 
	Node *p = q; 

	int mx = INT_MIN; 

	// Traversing the path between ansector and 
	// Node and finding maximum element. 
	while (p -> data != x) 
	{ 
		if (p -> data > x) 
		{ 
			mx = max(mx, p -> data); 
			p = p -> left; 
		} 
		else
		{ 
			mx = max(mx, p -> data); 
			p = p -> right; 
		} 
	} 

	return max(mx, x); 
} 

// Return maximum element in the path between 
// two given Node of BST. 
int maximumElement(struct Node *root, int x, int y) 
{ 
	Node *p = root; 

	// Finding the LCA of Node x and Node y 
	while ((x < p -> data && y < p -> data) || 
		(x > p -> data && y > p -> data)) 
	{ 
		// Checking if both the Node lie on the 
		// left side of the parent p. 
		if (x < p -> data && y < p -> data) 
			p = p -> left; 

		// Checking if both the Node lie on the 
		// right side of the parent p. 
		else if (x > p -> data && y > p -> data) 
			p = p -> right; 
	} 

	// Return the maximum of maximum elements occur 
	// in path from ancestor to both Node. 
	return max(maxelpath(p, x), maxelpath(p, y)); 
} 


// Driver Code 
int main() 
{ 
	lli n;
	cin >> n;
	lli a[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	struct Node *root = createNode(a[0]); 
	for (int i = 1; i < n; ++i)
	{
		insertNode(root, a[i]);
	}

	lli x,y;
	cin >> x >> y;

	cout << maximumElement(root, x, y) << endl; 

	return 0; 
} 
