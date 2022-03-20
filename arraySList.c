#include "array_based.h"
#include <stdio.h>

void StackInit(Stack* pstack) {
	pstack->topindex = -1;
}

int SIsEmpty(Stack* pstack) {
	if (pstack->topindex == -1)
		return 0;
	else
		return 1;
}

void SPush(Stack* pstack, Data pdata) {
	(pstack->topindex)++;
	pstack->arr[pstack->topindex] = pdata;
}

Data SPop(Stack* pstack) {
	if (SIsEmpty(pstack)) {
		printf("Memory Error!\n");
		exit(-1);
	}
	
	
	Data data;
	data = pstack->arr[pstack->topindex];
	(pstack->topindex)--;
	return data;
}

Data SPeek(Stack* pstack) {
	if (pstack->topindex == -1) {
		printf("Can't check data");
		exit(-1);
	}
	
	Data data;
	data = pstack->arr[pstack->topindex];
	return data;
}