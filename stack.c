#include"stack.h"

void Create(stack* S, int mSize)
{
	S->mSize = mSize;
	S->data_array = (stackdata*)malloc(sizeof(stackdata) * mSize);
	S->bottom = S->top = S->data_array;
}

void Empty(stack* S)
{
	if (S->bottom == S->top)
		return;
}

void Full(stack* S)
{
	if (S->top - S->bottom == S->mSize)
		return;
}

stackdata Pop(stack* S)
{
	Empty(S);

	S->top--;
	return;
}

void Push(stack* S, stackdata X)
{
	Full(S);
	*(S->top) = X;
	S->top++;
	return;
}

void Pr_stack(stack S)
{
	for (int i = 0; i < S.top - S.bottom; i++)
	{
		printf("%d ", S.data_array[i]);
	}
	printf("\n");
	return;
}
