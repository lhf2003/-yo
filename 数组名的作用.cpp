#include<iostream>

using namespace std;
int main()
{
	//1������ͨ��������ͳ������������ռ�ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "����������ռ�ڴ��С��" << sizeof(arr) << endl;
	cout << "ÿ��������ռ�ڴ��С��" << sizeof(arr[0]) << endl;
	cout << "������������Ԫ���ܸ�����" << sizeof(arr[10])/sizeof(arr) << endl;
	
	//2������ͨ���������鿴�����׵�ַ
	int arr2[5] = { 1,2,3,4,5 };
	cout << "�����׵�ַ��" << &arr << endl;
	cout << "�����һ��Ԫ�صĵ�ַ��" << &arr[0] << endl;
}