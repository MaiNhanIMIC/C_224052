#include <stdio.h>
#include "toan.h"

/*
	chức năng: tìm giá trị lớn nhất trong mảng
	input:
		mảng:
			+ địa chỉ bất đầu của mảng
			+ số lượng phần tử trong mảng
	output:
		int: số lớn nhất
*/
int Tim_Gia_Tri_Lon_Nhat(int* arr, int so_luong)
{
	int max = 0;
	for (int i = 0; i < so_luong; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

void main()
{
	//KHAI BÁO array bao gồm 5 đối tượng int
	int mang[5] = { 1,3000,65,3,2 };
	int lon_nhat = 0;
	// in ra giá trị lớn nhất trong mang
	lon_nhat = Tim_Gia_Tri_Lon_Nhat(mang, 5);

	printf("gia tri lon nhat: %d \n", lon_nhat);
}


