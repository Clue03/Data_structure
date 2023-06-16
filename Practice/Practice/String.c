//#include <stdio.h>
//
//int main()
//{
//	/*기본적인 for*/
//	char** p;
//	int i, k = 0;
//	char* c[3] = { "abc","def","hijk" };
//
//	char* p1;
//	p1 = c[0];
//	printf("%p\n", p1);
//	printf("%s \n", p1);
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("c[%d] = %p\n", i, c + i);
//		printf("c[%d] = %s\n", i, c[i]);
//	}
//
//	/*포인터를 이용한 for*/
//	for (p = c; p < c + 3; p++)
//	{
//		printf("c[%d] = %p\n", k, p);
//		printf("c[%d] = %s\n", k, *p);
//		k++;
//	}
//
//
//	return 0;
//}