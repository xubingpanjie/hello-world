//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	system("color 0a");
//	printf("3");
//	Sleep(1000);
//
//	system("cls");
//	printf("2");
//
//
//
//	return 0;
//} 
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	system("color 0a");
//	int a;
//	a = 3;
//	while (a >= 0)
//	{
//		system("cls");
//		printf("%d", a);
//		Sleep(1000);
//		a = a - 1;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	system("color 0a");
//	int a, b;
//	a = 1;
//
//	while (a <= 5)
//	{
//		b = 1;
//		while ( b <= a)
//		{
//			printf("*");
//			b = b + 1;
//
//		}
//		printf("\n");
//		a = a + 1;
//		
//
//
//
//
//	}
//
//	return 0;
//}
//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a, b;
//	a = 0;
//	while (a <= 10)
//	{
//		printf("Hello world");
//		a = a + 1;
//
//
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	system("color 0a");
//	int a, b,c;
//	a = 0;
//	c = 0;
//	while (a <= 10 )
//	{
//		system("cls");
//		b = 1;
//		a = a + 1;
//		c = c + 1;
//		while (b <= a)
//		{
//			printf("\n");
//			b = b + 1;
//		}
//		b = 1;
//		while (b <= c)
//		{
//			printf(" ");
//			b = b + 1;
//		}
//		
//		printf("Hello world");
//		Sleep(1000);
//	}
//
//
//	return 0;
//}
// 
//#include <stdio.h>

//enum Sex
//{
//	MALE = 3,
//	FEMALE,
//	SECERET
//
//};
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECERET);
//}

















#define MAX 10000
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////int main()
//{
//	system("color 0a");
//	char arr1[] = "abd";
//	char arr2[] = { 'a','b','ddd','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Sex
{
	MALE,
	FEMAIE,
	SECERET
};
int main()
{
	system("color 0a");
	const int n = 10;
	enum Sex s = MALE;

	printf("%d\n", MALE);
	printf("%d\n", FEMAIE);
	printf("%d\n", SECERET);
	printf("%d\n", s);

	return 0;
}




