////#define CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define STACK_SIZE 100
//#define NUL 0
//int top = 0;
//int cnt = 0;
//char stack[STACK_SIZE];
//
//void pop();
//void push(char data);
//void write();
//
//int main() {
//	int i;
//	char value;
//	for (value = 'A'; value < 'E'; value++) {
//		write();
//		push(value);
//		cnt++;
//	}
//	write();
//	for (i = 0; i < cnt; i++) {
//		pop();
//		write();
//	}
//	return 0;
//}
//
//void pop() {
//	if (top == NUL) {
//		printf("Stack is underflow...\n");
//	}
//	else
//		stack[--top] = NUL;
//}
//void push(char data) {
//	if (top >= STACK_SIZE) {
//		printf("Stack is overflow...\n");
//	}
//	else
//		stack[top++] = data;
//	stack[top] = NUL;
//}
//void write() {
//	printf("stack -> %6s, top -> %d \n", stack, top);
//}
