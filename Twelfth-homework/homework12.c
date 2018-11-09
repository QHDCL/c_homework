//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#if 0
#include<stdio.h>
#include<Windows.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int sum = 0;
	int i = 0;
	for (i = 0; i < sizeof(value)* 8; i++)
	{
		sum += ((value >> i) & 1) << (31 - i);
	}
	return sum;

}
int main()
{
	unsigned int num = 25;
	printf("反转后：%u\n", reverse_bit(num));
	system("pause");
	return 0;
}
#endif



//2.不使用（a + b） / 2这种方式，求两个数的平均值。
#if 0
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int mean_num(int num1, int num2){
	
	printf("Please Enter Two Number:");
	scanf("%d %d", &num1, &num2);
	int avg = 0;
	avg = num1 + ((num2 - num1) >> 1);
	return avg;
}

int main(){
	int num1 = 0;
	int num2 = 0;
	int avg = mean_num(num1, num2);
	printf("%d\n", avg);
	system("pause");
	return 0;
}
#endif


//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#if 0
#include<stdio.h>
#include<Windows.h>

void diff(int *arr,int sz){
	int i = 0;
	for (i = 1; i < sz; i++){
		arr[0] ^= arr[i];
	}
}

int main(){
	int arr[] = { 1, 2, 4, 6, 4, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	diff(arr, sz);
	printf("different number:%d\n", arr[0]);
	system("pause");
	return 0;
}
#endif




//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include<Windows.h>

void swap(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse(char *arr)
{
	
	int len = strlen(arr);
	swap(arr, arr + len - 1);

	while (*arr != '\0')
	{
		char *start = arr;
		char *end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		swap(start, end - 1);
		
		if (*end != '\0')
			arr = end + 1;
		
		else
			arr = end;

	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
#endif





//#include<stdio.h>
//#include<Windows.h>
//
//void swap(int *a, int *b){
//	*a = *a^*b;
//	*b = *a^*b;
//	*a = *a^*b;
//}
//
//int main(){
//	int a = 2;
//	int b = 3;
//	swap(&a, &b);
//	printf("%d,%d\n", a,b);
//	system("pause");
//	return 0;
//}



//
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}

//
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//int count_one_bits(unsigned int value){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < sizeof(value)*8; i++){
//		if ((value >> i) & 1 == 1){
//		count++;
//		}
//	}
//	return count;
//}
//int main(){
//	unsigned int value = 0;
//	printf("Please Input One Number:");
//	scanf("%d", &value);
//    int c=	count_one_bits(value);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}


//3. 输出一个整数的每一位。 
//#include<stdio.h>
//#include<Windows.h>
//int main(){
//	int i = 827;
//	int bit = 0;
//	while (i){
//
//	bit = i % 10;
//	i /= 10;
//	printf("%d ",bit);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}