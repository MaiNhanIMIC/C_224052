#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
typedef enum
{
	NAM,
	NU,
} gioi_tinh_t;

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU,
} xep_loai_t;

typedef struct
{
	char ten[30];
	int tuoi;
	gioi_tinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	float diem_tb;
	xep_loai_t xep_loai;
}hocsinh_t;
//chuc nang: nhap gia tri cho hoc sinh
// input: khong co input
//output: hocsinh_t da duoc nhap gia tri
hocsinh_t nhapthongtin()
{
	hocsinh_t ketqua = { 0 };
	printf("nhap ten: ");
	scanf("%[^\n]", ketqua.ten);
	printf("nhap tuoi: ");
	scanf("%d", &ketqua.tuoi);
	printf("gioi tinh (0: nam, 1: nu): ");
	scanf("%d", &ketqua.gioi_tinh);
	printf("nhap diem toan: ");
	scanf("%f", &ketqua.diem_toan);
	printf("nhap diem van: ");
	scanf("%f", &ketqua.diem_van);
	ketqua.diem_tb = (ketqua.diem_toan + ketqua.diem_van) / 2;
	getc(stdin);
	if (ketqua.diem_tb >= 8.0)
	{
		ketqua.xep_loai = GIOI;
	}
	else if (ketqua.diem_tb >= 6.5)
	{
		ketqua.xep_loai = KHA;
	}
	else if (ketqua.diem_tb >= 5.0)
	{
		ketqua.xep_loai = TRUNG_BINH;
	}
	else
		ketqua.xep_loai = YEU;
	return ketqua;
}

hocsinh_t* nhapDanhSach(int n)
{
	hocsinh_t* danhsach = malloc(n * sizeof(hocsinh_t));
	for (int i = 0; i < n; i++)
	{
		danhsach[i] = nhapthongtin();
	}
	return danhsach;
}

void main()
{
	hocsinh_t danhsach[3] = {
		{.ten = "nguyen van a", .tuoi = 18, .gioi_tinh = NAM, .diem_toan = 8, .diem_van = 6, .diem_tb = 6, .xep_loai = TRUNG_BINH},
		{.ten = "nguyen thi b", .tuoi = 18, .gioi_tinh = NU , .diem_toan = 9, .diem_van = 8, .diem_tb = 8, .xep_loai = GIOI},
		{.ten = "nguyen van c", .tuoi = 18, .gioi_tinh = NAM, .diem_toan = 7, .diem_van = 8, .diem_tb = 8, .xep_loai = KHA},
	};

}
