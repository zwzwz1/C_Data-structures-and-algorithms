#include<stdio.h>
#include<malloc.h>
typedef int stackdata;

typedef struct 
{
	stackdata* data_array;
	stackdata* bottom;
	stackdata* top;
	int mSize;
}stack;


//创建一个最多能存储mSize个元素的空栈
void Create(stack* S, int mSize);
//从栈顶弹出元素
stackdata Pop(stack* S);
//压入元素
void Push(stack* S,stackdata X);
//判断栈空
void Empty(stack* S);
//判断栈满
void Full(stack* S);
//打印栈
void Pr_stack(stack S);