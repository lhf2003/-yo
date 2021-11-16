#include<iostream>

using namespace std;
int main()
{
	//1、可以通过数组名统计整个数组所占内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组所占内存大小：" << sizeof(arr) << endl;
	cout << "每个数组所占内存大小：" << sizeof(arr[0]) << endl;
	cout << "数组所包含的元素总个数：" << sizeof(arr[10])/sizeof(arr) << endl;
	
	//2、可以通过数组名查看数组首地址
	int arr2[5] = { 1,2,3,4,5 };
	cout << "数组首地址：" << &arr << endl;
	cout << "数组第一个元素的地址：" << &arr[0] << endl;
}