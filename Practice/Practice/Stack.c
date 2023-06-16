//#include <stdio.h>
//#define STACK_SIZE 100
//#define NULL 0
//
//int top = 0;
//int cnt = 0;
//char stack[STACK_SIZE];
//void push(char data);
//void pop();
//void write();
//
//int main()
//{
//	int i;
//	char value;
//	for (value = 'A'; value < 'E'; value++)
//	{
//		write();
//		push(value);
//		cnt++;
//	}
//
//	write();
//	for (i = 0; i < cnt; i++)
//	{
//		pop();
//		write();
//	}
//	return 0;
//}
//void push(char data)
//{
//	if (top >= STACK_SIZE)
//		printf("Stack is Overflow.\n");
//	else
//		stack[top++] = data;
//	stack[top] = NULL;
//}
//void pop()
//{
//	if (top == NULL)
//		printf("Stack is Underflow.\n");
//	else
//		stack[--top] = NULL;
//}
//void write()
//{
//	printf("stack >> %6s,   top >> %d \n", stack, top);
//}
