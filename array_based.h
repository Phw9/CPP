#ifndef __array_based_h__
#define __array_based_h__

#define TRUE	0
#define FALSE	1
#define array_length	100


typedef int Data;



typedef struct _ArrayStack {
	Data arr[array_length];
	int topindex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack* pstack);

int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data pdata);

Data SPop(Stack* pstack);

Data SPeek(Stack* pstack);

#endif
