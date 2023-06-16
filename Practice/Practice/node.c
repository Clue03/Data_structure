//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct list {
//	char name[10];
//	int score;
//	struct list* link;
//};
//
//int main()
//{
//	struct list* list1, * head, * pre, * next;
//	pre = NULL;
//	head = NULL;
//	for (int i = 0; i < 3; i++)
//	{
//		list1 = (return(struct list*)malloc(sizeof(struct list)));
//		scanf_s("%s %d", list1->name, 10, &(list1->score));
//		if (head == NULL)
//			head = list1;
//		else
//			pre->link = NULL;
//		list1->link = NULL;
//		pre = list1;
//	}
//
//	for (next = head; next != NULL; next = next->link)
//		printf("%s %d\n", next->name, next->score);
//	while (head != NULL)
//	{
//		next = head->link;
//		printf("%s %d\n", next->name, next->score);
//		free(head);
//		head = next;
//	}
//	return 0;
//}