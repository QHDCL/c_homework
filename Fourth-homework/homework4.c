//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<windows.h> 
//int main()
//{
//	int i = 0;
//	int line = 7;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)      
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{             //2*(line-2-i)+1
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//} 
//
//
//2.求0-999中的水仙花,并输出0
//#include<stdio.h>
//#include<Windows.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	int unit = 0;
//	int ten = 0;
//	int hundred = 0;
//	for (i = 1; i < 1000; i++){
//		hundred = i / 100;
//		ten = i / 10 % 10;
//		unit = i % 10;
//		if (i == hundred*hundred*hundred + ten*ten*ten + unit*unit*unit){
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("水仙花个数为:%d\n", count);
//	system("pause");
//	return 0;
//}
//
//
//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
void sn(){
	int num = 0;
	int sum = 0;
	int i = 0;
	int tmp = 0;
	printf("Please Put in an integer\n");
	scanf("%d", &num);
	for (i = 1; i <= 5; i++){
		tmp = tmp * 10 + num;
		sum = sum + tmp;
	}
	printf("sum = %d\n", sum);
}
int main(){
	sn();
	system("pause");
	return 0;

}

//
//4.编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现。 
//#include <stdio.h>
//#include<Windows.h>
//int main()
//{
//		int ch, i = 0;
//		ch = getchar();
//		if (ch == '}')
//			printf("unmatched!");
//		while (ch != EOF)
//		{
//			if (ch == '{')
//				i++;
//			if (ch == '}')
//				i--;
//			ch = getchar();
//		}
//		{
//			if (i == 0)
//				printf("matched!");
//			else
//				printf("unmatched!");
//
//		}
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<Windows.h>
//
////计算一个数的位数
//int main(){
//	int num = 23;
//	int count = 0;
//	while (num){
//		count++;
//		num /= 10;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}