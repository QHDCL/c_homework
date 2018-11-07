//1.实现strcpy
#if 0
#include<stdio.h>
#include<windows.h>
#include<assert.h>
char *my_strcpy(char *des, const char *src){
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
	char des[10] = "hello!";
	const char src[] = "welcome!";
	printf("%s\n", des);
	my_strcpy(des, src);
	printf("%s\n", des);
	system("pause");
	return 0;
}
#endif



//2.实现strcat
#if 0
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

char *my_strcat(char*des, const char *src){
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
	char des[32] = "hello!";
	const char src[] = "welcome!";
	printf("%s\n", des);
	my_strcat(des, src);
	printf("%s\n", des);
	system("pause");
	return 0;
}
#endif



//3.实现strstr  返回子串在主串后的其余字符串
//"ABCDEF"  "CD" ---->"CDEF"
#if 0
#include<stdio.h>
#include<Windows.h>
const char *my_strstr(const char *str, const char *sub_str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		int tem = i;  
		int j = 0;
		while (str[i++] == sub_str[j++])
		{
			if (sub_str[j] == '\0')
			{
				return &str[tem];
			}
		}
		i = tem;
	}
	return NULL;
}

int main()
{
	const char s[] = "ABCDEF";
	const char sub[] = "CD";
	printf("%s\n", my_strstr(s, sub));
	system("pause");
	return 0;
}
#endif



//4.实现strchr  查找字符在字符串的位置  返回(指针指向)字符在字符串后的字符串
#if 0
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

char *my_strchr(char *str, char ch){
	assert(str);
	
	while (*str){
		if (*str == ch){
			return str;
		}
		str++;
	}
	return NULL;
}

int main(){
	char str[] = "ABCD";
	char ch = 'C';
	char *ret = my_strchr(str, ch);
	printf("%s\n", ret);
	system("pause");
	return 0;
}
#endif



//5.实现strcmp
#if 0
#include<stdio.h>
#include<windows.h>
int my_strcmp(const char * src, const char * dst) {
	int ret = 0;
	while (!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst) {
		++src;
		++dst;
	}
	if (ret < 0){
		ret = -1; 
	}	
	else if (ret > 0){
		ret = 1;
	}
	return(ret);
}

int main(){
	const char src[10] = "ABCDE";
	const char dst[10] = "ABCDE";
	int ret = my_strcmp(src, dst);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif



//6.实现memcpy
#if 0
#include<stdio.h>
#include<Windows.h>
#include<assert.h>
typedef unsigned int size_t;

void * my_memcpy(void *des, const void *src, size_t count)
{
	void *ret = des;
	assert(des);
	assert(src);
	assert(count);

	while (count--){
		*((char *)des)++ = *((char *)src)++;
	}
	return ret;
}
int main(){
	
	char des[32] = "AB";
	char src[] = "ABCDEF";
	my_memcpy(des, src,sizeof(src)-3);

	//memcpy(des, src, sizeof(src));
	printf("%s\n", des);
	system("pause");
	return 0;
}
#endif


//7.实现memmove
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<Windows.h>

void *my_memmove(void *dest, const void *src, int n)
{
	
	char* pdest = (char *)dest;
	const char* psrc = (const char *)src;
	assert(dest);
	assert(src);

	if (pdest <= psrc&&pdest >= psrc + n)
	{
		while (n--)
		{
			*pdest = *psrc;
		}
	}
	else 
	{
		while (n--)
		{
			*(pdest + n) = *(psrc + n);
		}
	}
	return dest;
}

int main()
{
	char arr[10] = "abcdefg";
	char arr0[10] = "abcdefg";
	char arr1[10] = { 0 };
	my_memmove(arr + 2, arr, 4);
	my_memmove(arr1, arr0, 4);
	printf("内存覆盖情况：%s\n", arr + 2);
	printf("正常情况：%s\n", arr1);
	system("pause");
	return 0;
}
#endif


