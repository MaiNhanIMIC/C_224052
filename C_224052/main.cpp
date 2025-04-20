#include <malloc.h>
#include <stdio.h>
#include "hinh_hoc.h"

hinh_chu_nhat_c C;

int main()
{
	hinh_chu_nhat_c A;
	hinh_chu_nhat_c B(1,2);
	A.tinhChuVi();

	return 0;
}