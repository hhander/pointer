#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>












//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}


//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	char tem = arr[0];
//	arr[0] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[right] = tem;
//}
//
//
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}






//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int n = 5;
//	scanf("%d", &n);
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//	return 0;
//}





//f(n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return f(n - 1) + f(n - 2);
//	}
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}





//int multi(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n > 1)
//	{
//		return;;
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = multi(n);
//	printf("%d", ret);
//	return 0;
//}





//test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//
//
//int main()
//{
//	test(1);
//	return 0;
//}






//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (n>2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//	return 0;
//}







//int count = 0;
//int f(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return  f(n - 1) + f(n - 2);
//	}
//}
//
//
//int main()
//{
//	int n = 40;
//	scnaf("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	printf("%d", count);
//	return 0;
//}






//double Multi(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Multi(n, k - 1);
//	}
//	if (k == 0)
//		return 1;
//	if (k < 0)
//	{
//		return (1.0 / Multi(n, -k));
//	}
//
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Multi(n, k);
//	printf("%lf", ret);
//	return 0;
//}







//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//
//
//
////int DigitSum(int num)
////{
////	static int sum = 0;
////	int tmp = num % 10;
////	sum = sum + tmp;	
////	num = num / 10;
////	if (num != 0)
////	{
////		DigitSum(num);
////	}
////	return sum;
////}
//
//
//
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	return 0;
//}






//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//
//void reverse(char arr[])
//{
//	char tem = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	arr[len - 1] = tem;
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}





//void GetBoard(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//			Sleep(50);
//		}
//		printf("\n");
//	}
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	GetBoard(n);
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		for (i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}
//		}
//		if (num == i)
//		{
//			printf("%d", num);
//		}
//	}
//	return 0;
//}







//int IsPrime(int num)
//{
//	int i = 0;
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			break;
//		}
//		return 1;
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == IsPrime(num))
//	{
//		printf("是素数");
//	}
//	else
//	{
//		printf("no");
//	}
//}






//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(*p);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}





//void get_dou_bit(int i)
//{
//	printf("奇数=  ");
//	int n = 0;
//	for (n = 30; n >=0; n -= 2)
//	{
//		printf("%d ", (i >> n) & 1);
//	}
//}
//
//
//void get_single_bit(int i)
//{
//	printf("偶数= ");
//	int n = 0;
//	for (n = 31; n >=1; n -= 2)
//	{
//		printf("%d ", (i >> n) & 1);
//	}
//}
//
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	get_dou_bit(i);
//	printf("\n");
//	get_single_bit(i);
//	return 0;
//}






//int get_diff_bit(int m, int n)
//{
//	int count = 0;
//	int num = m ^ n;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = get_diff_bit(m, n);
//	printf("%d", ret);
//	return 0;
//}




//int GetCount(int num)
//{
//	int count = 0;
//	int i = 0;
//	while (i<32)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//		i++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = -1;
//	int ret = GetCount(num);
//	printf("%d", ret);
//	return 0;
//}







//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//		printf("%d \n", arr1[i]);
//	}
//	return 0;
//}








//void Init(int arr[],int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	while (i < sz - i)
//	{
//		int tem = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = tem;
//		i++;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,3,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr,sz);*/
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}






//int get_len(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	/*int len = strlen(arr);
//	printf("%d\n", len);*/
//	int len = get_len(arr);
//	printf("%d", len);
//}