#pragma once
class phan_so
{
public:
	// đặc điểm - biến - thuộc tính
	int tu;
	int mau;

	// hành vi - hàm - phương thức:
	/*
		+ input: phân số khác
		+ output: phân số
	*/
	phan_so nhan(phan_so khac);

	phan_so operator*(phan_so khac);
	phan_so operator+(phan_so khac);

	phan_so();
	phan_so(int _tu, int _mau);
};

