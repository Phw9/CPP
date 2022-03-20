#ifndef __LL_based_h__
#define __LL_based_h__

#define TRUE	0
#define FALSE	1

typedef int Data;

typedef struct _node 
{
	Data data;
	struct _node * next;
}Node;

typedef struct _LLStack {
	Node* head;
	Node* cur;
	Node* before;
	int numOfData;
}LLStack;

typedef LLStack	Stack;

void StackInit(Stack* pstack);

int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);

Data Spop(Stack* pstack);

Data SPeek(Stack* pstack);

#endif
