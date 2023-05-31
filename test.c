#include"stack.h"

int main()
{
	stack S;
	Create(&S, 10);
	Push(&S, 5);
	Push(&S, 4);
	Push(&S, 3);
	Push(&S, 2);
	Push(&S, 1);
	Pr_stack(S);
	stackdata x=Pop(&S);
	Pr_stack(S);
	return 0;
}

