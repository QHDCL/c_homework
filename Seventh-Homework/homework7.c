//
////1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
////����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//
//void multiplication_table(int num){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= num; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d  ", i, j, i*j);
//			
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	int num = 0;
//	printf("Please Iuput One Number:");
//	scanf("%d", &num);
//	multiplication_table(num);
//	system("pause");
//	return 0;
//}
//
//
////2.ʹ�ú���ʵ���������Ľ����� 
//#include <stdio.h>
//#include <windows.h>
//
//void exchange(int *x, int *y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("before:x=%d y=%d\n", x, y);
//	exchange(&x, &y);  
//	printf("after:x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//
//
//
//
////3.ʵ��һ�������ж�year�ǲ������ꡣ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//
//void leap_year(int year){
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
//		printf("%d is leap_year\n", year);
//	}
//	else{
//		printf("%d isn't leap_year\n", year);
//	}
//}
//
//main(){
//	int year = 0;
//	printf("Please Input Year:");
//	scanf("%d", &year);
//	leap_year(year);
//	system("pause");
//	return 0;
//}
//
//
////4.����һ�����飬
////ʵ�ֺ���init������ʼ�����顢
////ʵ��empty����������顢
////ʵ��reverse���������������Ԫ�ص����á�
////Ҫ���Լ���ƺ����Ĳ���������ֵ��
///*memset(arr, 0, sz*sizeof(arr[0]));*/
//
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//
//void empty(int *arr,int sz){
//	int i = 0;
//	printf("����������Ԫ��:");
//	for (i = 0; i < sz; i++){
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void init(int *arr,int sz){
//	int i = 0;
//	printf("��ʼ����������Ԫ��:");
//	for (i = 0; i < sz; i++){
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int *arr,int sz){
//	int i = 0;
//	int tmp = 0;
//	printf("���ú�������Ԫ��:");
//	for (i = 0; i < sz/2; i++){
//		tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{	
//	int i = 0;
//	int arr[10] = { 10, 4, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("ԭʼ�����Ԫ��:");
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	empty(arr,sz);
//
//	init(arr, sz);
//
//	reverse(arr, sz);
//
//
//	system("pause");
//	return 0;
//}
//
//
//
////5.ʵ��һ���������ж�һ�����ǲ���������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<math.h>

//void Isprime_num(int num){
//	int flag = 1;
//	int i = 0;
//	int sq = (int)sqrt(num);
//		for (i = 2; i <= sq; i++){
//			if (num % i == 0){
//				printf("%d isn't prime_number\n", num);
//				flag = 0;
//				break;
//			}
//		}
//		while (flag){
//			printf("%d is prime_number\n", num);
//			flag--;
//	}
//	
//}
//
//int main(){
//	int num = 0;
//	printf("Please Iuput One Number:");
//	scanf("%d", &num);
//	Isprime_num(num);
//	system("pause");
//	return 0;
//}
