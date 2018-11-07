//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//int arr[]={ 1, 5, 5, 1, 7, 6, 7, 8, 9, 9 };

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

void find_diff_num(int *arr, int sz)
{
	//1.所有数字异或
	int n1 = 0;
	int n2 = 0;
	int num = 0;
	int i = 0;
	int pos = 0;
	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}

	//2.找num的二进制位中的1的位置
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//3.按照pos位为0或者1分组
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			n1^= arr[i];
		}
		else
		{
			n2 ^= arr[i];
		}
	}
	printf("%d %d", n1, n2);
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	find_diff_num(arr, sz);
	
	system("pause");
	return 0;
}
#endif




#if 0
#include<stdio.h>
#include<Windows.h>
//一个数字出现一次
int main()
{
	int arr[] = { 1, 5, 5, 1, 7, 6, 7, 8, 8, 9, 9 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < len; i++)
	{
		arr[0] ^=  arr[i];//^异或运算符，相异为1想同为0.
	}
	printf("the single number is:%d\n", arr[0]);
	system("pause");
	return 0;
}
#endif



//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

#if 0

#include<stdio.h>
#include<stdlib.h>

int drink(int m)
{
	int n = 1, s; 
	int sum = m;
	while (n != 0)
	{
		n = m / 2;  //初始的汽水(空瓶)
		s = m % 2;  //换汽水剩余的空瓶子     
		m = n + s;  //现在的空瓶子

		sum = sum + n;  
	}
	return sum;
}

int main()
{
	int num = drink(20);
	printf("drink=%d", num);
	
	system("pause");
	return 0;
}
#endif




//3.模拟实现strcpy(字符串拷贝)
#if 0

#include<stdio.h>
#include<Windows.h>
#include<assert.h>

char *my_strcpy(char *des,const char *src){
	assert(des);
	assert(src);

	char *ret = des;

	while (*des = *src){
		des++;
		src++;
	}
	return ret;
}
int main(){
	char des[32];
	const char *src = "ABCDEF123";

	my_strcpy(des, src);
	printf("%s\n", des);

	system("pause");
	return 0;
}
#endif


//4.模拟实现strcat

#if 0

#include<stdio.h>
#include<Windows.h>
#include<assert.h>

char *my_strcat(char *des, char *src){
	assert(des);
	assert(src);
	char *ret = des;

	while (*des != 0){
		des++;
	}
	while (*des = *src){
		des++;
		src++;
	}
	return ret;
}

int main(){
	char des[32] = "ABC";
	char src[] = "123";

	printf("%s\n", des);

	my_strcat(des, src);
	printf("%s\n", des);

	system("pause");
	return 0;
}
#endif



#include<stdio.h>
#include<Windows.h>
#include<time.h>

int main(){
	
	//srand((unsigned int)time(NULL));
	//int a = rand()%2+1;    //随机生成数1-2
	//printf("%d\n", a);     //int a=rand()
	system("pause");
	return 0;
}
