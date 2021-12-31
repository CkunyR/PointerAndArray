#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	//arr --> 数组名（首元素地址）
	printf("%p\n", arr);
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	//1. &arr -> &数组名 -> 不是首元素地址，数组名表示整个数组 --  &数组名 取的是整个数组的地址
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);//该位置+1，加的是一个数组的地址40字节（4*10）
	//2. sizeof(arr) - sizeof(数组名) - 数组名表示整个数组 - sizeof（数组名）计算的是整个数组的大小
	return 0;
}