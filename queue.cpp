#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *getNode(int data)
{
	Node *p = new Node;
	p->data = data;
	p->next = NULL;
	
	return p;
}


void addHead(Node *&head, int data)
{
	Node *p = getNode(data);
	if(head == NULL)
	{
		head = p;
	} else 
	{
		p->next = head;
		head = p;
	}
	
}


bool isEmty(Node *head)
{
	return head == NULL;
}

int front(Node *head)
{
	return head->data;
}

void pop(Node *&head)
{
	Node *x = head->next;
	head = head->next;
	head = x;
}

int main()
{
	Node *head;
	head =NULL;
	int n;
	cin >> n;
	for (int i =0; i < n; i++)
	{
		int x;
		cin >>x;
		addHead(head, x);
	}
	
	while(isEmty(head) == false)
	{
		int x = front(head);
		cout << x << " ";
		pop(head);
	}
	
	return 0;
}
