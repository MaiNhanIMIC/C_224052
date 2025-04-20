#pragma once
class hinh_chu_nhat_c
{
public:
	/* BIEN: Thuoc tinh*/
	int dai;
	int rong;

	/* HAM: Phuong thuc */
	int tinhDienTich();
	int tinhChuVi();

	/* ham tao */
	hinh_chu_nhat_c();
	hinh_chu_nhat_c(int dai, int rong);

	/* ham huy */
	~hinh_chu_nhat_c();
};