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


//����һ������ܴ洢mSize��Ԫ�صĿ�ջ
void Create(stack* S, int mSize);
//��ջ������Ԫ��
stackdata Pop(stack* S);
//ѹ��Ԫ��
void Push(stack* S,stackdata X);
//�ж�ջ��
void Empty(stack* S);
//�ж�ջ��
void Full(stack* S);
//��ӡջ
void Pr_stack(stack S);