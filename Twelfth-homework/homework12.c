//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
	printf("��ת��%u\n", reverse_bit(num));
	system("pause");
	return 0;
}
#endif



//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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


//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
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


//3. ���һ��������ÿһλ�� 
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