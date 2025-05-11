#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <iostream>

int sum_array(int* arr, int num_item)
{
	int sum = 0;

	for (int i = 0; i < num_item; i++)
	{
		sum += arr[i];
	}

	return sum;
}
template <class T, int num_item>
class mang
{
public:
	T* data;
	int size;
	mang()
	{
		data = (T*)malloc(num_item * sizeof(T));
		size = num_item;
	}
	mang(std::initializer_list<T> il)
	{
		size = il.size();
		data = (T*)malloc(size * sizeof(T));
		if (data == NULL)
		{
			throw std::runtime_error("malloc cap phat memory that bai");
		}

		int temp = 0;
		for (auto item : il)
		{
			data[temp++] = item;
		}
	}

	T& operator[](int index)
	{
		if (index >= size) {
			char err_msg[256] = { 0 };
			sprintf(err_msg, "Vuot qua kich thuoc cua mang  (size: %d)", size);
			throw std::runtime_error(err_msg);
		}
		return data[index];
	}
};

template <class T, int size>
int summ_arr(mang<T, size>  A)
{
	int sum = 0; 
	for (int i = 0; i < A.size; i++)
	{
		sum += A[i];
	}
	return sum;
}
#include <array>
int main()
{
	mang<int, 3> A = { 1,2,3 };
	mang<int, 5> B = { 1,2,3,4,5 };
	int x = summ_arr(B);




	return 0;
}