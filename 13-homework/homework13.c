//1.调整数组使奇数全部都位于偶数前面。 
//题目：
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。

#if 0
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void adjust_arr(int *arr,int sz){
	for (int i = 0; i < sz; i++){
		if (arr[i] % 2 == 1){
			printf("%d ", arr[i]);
		}
	}
	for (int i = 0; i < sz; i++){
		if (arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}
	}
}

int main(){

	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("Please Enter Integral_number:>>>\n");
	for (int i = 0; i < sz; i++){
		scanf("%d ", &arr[i]);
	}

	adjust_arr(arr,sz);

	system("pause");
	return  0;
}
#endif


#if 0

#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void adjust_arr(int *arr, int sz){
	int left = 0;
	int right = sz - 1;
	while (left < right){
		if ((arr[left] & 0x01) == 1){
			left++;
			continue;
		}
		if ((arr[right] & 0x01) == 0){
			right--;
			continue;
		}
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		
	}
	for (int i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("Please Enter Integral_number:>>>\n");
	for (int i = 0; i < sz; i++){
		scanf("%d", &arr[i]);
	}
	printf("befero arr:\n");
	for (int i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("after arr:\n");
	adjust_arr(arr, sz);

	system("pause");
	return 0;
}

#endif


//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4   2 4 5   4 5 6
//
//

#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int Reseach_sou(int arr[][3], int row, int col, int key)
{
	int i = 0;
	int j = col - 1;
	//从第一行,最后一列开始寻找
	while ((j >= 0) && (i <= 2))
	{
		if (arr[i][j] == key){
			return 1;
		}	
		else if (arr[i][j] < key){
			i++;
		}
		else{
			j--;
		}
	}
	return 0;
}

int main(){
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int row = 3;
	int col = 3;
	int key = 0;
	scanf("%d", &key);

	int ret = Reseach_sou(arr, row, col, key);

	if (ret == 1){
		printf("找到了\n");
	}
	else{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}
