#include "LL_based.h"
#include <stdio.h>

void StackInit(Stack* pstack) {
	pstack->head = (Node*)malloc(sizeof(Node));
	pstack->numOfData = 0;
}

int SIsEmpty(Stack* pstack) {
	if (pstack->numOfData == 0)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	pstack->numOfData += 1;
	newnode->data = data;
	newnode->next = pstack->head->next;
	pstack->head->next = newnode;
}

Data Spop(Stack* pstack) {
	if (SIsEmpty(pstack)) {
		printf("Memory Error\n");
		exit(-1);
	}
	Node* rnode;
	Data rdata;
	rnode = pstack->head->next;
	rdata = rnode->data;
	pstack->head->next = rnode->next;
	free(rnode);
	pstack->numOfData -= 1;
	return rdata;
}

Data SPeek(Stack* pstack) {
	if (SIsEmpty(pstack)) {
		printf("Can't check data\n");
		exit(-1);
	}
	Data data;
	data = pstack->head->next->data;
	return data;
}
