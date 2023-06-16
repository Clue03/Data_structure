//#include <stdio.h>
//#include <string.h>
//#define SIZE 10
//#define NUL 0
//int queue[SIZE];
//int head = 0;
//int tail = 0;
//
//void Q_push(int data);
//void Q_pop();
//void write();
//void write1();
//void write2();
//
//int main() {
//	int i;
//	for (i = 0; i < 5; i++) {
//		Q_push(i * 100);
//	}
//	write2();
//
//	for (i = 0; i < 5; i++) {
//		Q_pop();
//	}
//	write2();
//
//	return 0;
//}
//
//void Q_push(int data) {
//	if (tail >= SIZE) {
//		printf("Overflow!!!!!\n");
//		return;
//	}
//	queue[tail] = data;
//	write();
//	tail++;
//}
//void Q_pop() {
//	if (head == 0 && tail == 0) {
//		printf("Underflow!!!!!\n");
//		return;
//	}
//	if (head < tail) {
//		queue[head] = NUL;
//		head++;
//		if (head == tail) {
//			printf("Underflow!!!!!\n");
//			return;
//		}
//		write();
//	}
//	if (head > tail) {
//		head = tail = NUL;
//	}
//}
//void write() {
//	printf("head -> %d, tail -> %d, queue[head] -> %3d, queue[tail] -> %3d \n", head, tail, queue[head], queue[tail]);
//}
//void write1() {
//	printf("Poped data ... \n");
//	printf("head -> %d, tail -> %d, queue[head] -> %3d, queue[tail] -> %3d \n", head, tail, queue[head], queue[tail]);
//}
//void write2() {
//	int i;
//	printf("\n\t\t\t Contents of queue\n");
//	for (i = 0; i < SIZE; i++) {
//		printf("\t queue[%2d] = %d \n", i, queue[i]);
//	}
//	printf("\n");
//}