#include "hinh_hoc.h"
#include <stdio.h>
#include <malloc.h>
int hinh_chu_nhat_c::tinhDienTich()
{
	return dai * rong;
}
int hinh_chu_nhat_c::tinhChuVi()
{
	return (dai + rong) * 2;
}
hinh_chu_nhat_c::hinh_chu_nhat_c()
{
	dai = 0;
	rong = 0;
	printf("[0]doi tuong duoc ta ra o: 0x%p \n", this);
}
hinh_chu_nhat_c::hinh_chu_nhat_c(int dai, int rong)
{
	this->dai = dai;
	this->rong = rong;
	printf("[2]doi tuong duoc ta ra o: 0x%p\n", this);
}
hinh_chu_nhat_c::~hinh_chu_nhat_c()
{
	printf("doi tuong o dia chi 0x%p bi huy \n", this);
}