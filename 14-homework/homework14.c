//1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<Assert.h>
//void levo(char *pstr, int SZ, int key)
//{
//	assert(pstr);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < key; i++)
//	{
//		char tmp = pstr[0];
//		for (j = 0; j < SZ - 1; j++)
//		{
//			pstr[j] = pstr[j + 1];
//		}
//		pstr[SZ - 1] = tmp;
//	}
//}
//int main()
//{
//	char str[] = "ABCDEFGH";
//	printf("ԭʼ:%s\n", str);
//	int key = 0;
//	int SZ = strlen(str);
//
//	printf("��������Ҫ��ת�ַ��ĸ���");
//	scanf("%d", &key);
//
//	levo(str, SZ, key);
//
//	printf("���ƺ�:%s\n", str);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//void reverse(char *left, char *right)
//{
//	while(left< right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char*p, int n)
//{
//	int len = strlen(p);
//	reverse(p, p + n - 1);
//	reverse(p + n, p + len - 1);
//	reverse(p,p + len - 1);
//}
//int main()
//{
//	char arr[] = "ABCDEFGH";
//	printf("����ǰ:%s\n", arr);
//	printf("������Ҫ���Ƶĸ���>>>");
//	int n = 0;
//	scanf("%d", &n);
//
//	left_move(arr, n);
//	printf("���ƺ�:%s\n", arr);
//
//	system("pause");
//	return 0;
//}





//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)


int judge(char *str1, char *str2){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	strncat(str1, str1, len1);
	if (strstr(str1, str2) != NULL && len1 == len2){
		return 1;
	}
	return 0;
}

int main(){
	char str1[32] = "ABCDE";
	char str2[] = "BCDEAs";
	
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	printf("%d\n",judge(str1, str2));

	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//
//int judge(char *str1, char *str2)
//{
//	int i = 0;
//	int j = 0;
//	int lenght = strlen(str1);
//	for (j = 1; j <= lenght; j++)
//	{
//		{
//			int tem = str1[0];
//			for (i = 0; i < lenght - 1; i++)
//			{
//				str1[i] = str1[i + 1];
//			}
//			str1[lenght - 1] = tem;
//		}
//		if (0 == strcmp(str1, str2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[10] = "AABCD";
//	char s2[10] = "BCDAA";
//	printf("s1 = %s\n", s1);
//	printf("s2 = %s\n", s2);
//	printf("%d\n", judge(s1, s2));
//	system("pause");
//	return 0;
//}
