////#include "stdafx.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//struct list
//{
//	char* nam;
//	char* tel;
//};
//
//struct list* nalloc();
//struct list* inp(struct list* m);
//
//
//int main()
//{
//	struct list* man, * p;
//	man = NULL;
//	p = nalloc();
//	p = inp(man);
//
//	printf("%s %s\n", p->nam, p->tel);
//	free(p->nam);
//	free(p->tel);
//	free(p);
//
//	return 0;
//}
//
//struct list* nalloc()
//{
//	return ((struct list*)malloc(sizeof(struct list)));
//}
//struct list* inp(struct list* m)
//{
//	char* name1 = (char*)malloc(10);
//	char* p1 = (char*)malloc(10);
//	m = nalloc();
//	scanf_s("%s %s", name1, 10, p1, 10);
//	m->nam = name1;
//	m->tel = p1;
//
//	return (m);
//}
