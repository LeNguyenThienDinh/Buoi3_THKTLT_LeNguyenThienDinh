#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//============================xu_li_ham
void taoMaTran(int **mt, int m, int n, int thap, int cao)
{
	srand(time(0));
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			mt[i][j] = thap + rand() % (cao - thap + 1);
		}
	}
}

void xuatMatran(int **mt, int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", mt[i][j]);
		}
		printf("\n");
	}
}

void giaiPhongMtran(int **mt, int m)
{
	for (int i = 0; i < m; ++i)
	{
		free(mt[i]);
	}
	free(mt);
}

int tongDong(int **mt, int m, int n)
{
	
	for (int i = 0; i < m; ++i)
	{
		int tong = 0;
		for (int j = 0; j < n; ++j)
		{
			tong += mt[i][j];
		}
		printf("tong dong %d la: %d", i + 1, m);
	}
}
//============================xu_li_main
int main()
{
	int m, n, thap, cao, chon;
	int **mt = NULL;
	printf("Nhap vao so dong: \n");
	scanf("%d", &m);
	printf("nhap vao so cot: \n");
	scanf("%d", &n);
	printf("Nhap vao gioi han duoi ma tran: \n");
	scanf("%d", &thap);
	printf("Nhap vao gioi han tren ma tran: \n");
	scanf("%d", &cao);
	if (m <= 0 || n <= 0)
	{
		printf("Dong va cot phai lon hon 0!!!\n");
		return 1;
	}
	if (thap > cao)
	{
		printf("Gioi han duoi phai nho hon hoac bang gioi han tren \n");
		return 1;
	}
	mt = (int **)malloc(m * sizeof(int *));
	for (int i = 0; i < m; ++i)
	{
		mt[i] = (int *)malloc(n * sizeof(int));
	}
	taoMaTran(mt, m, n, thap, cao);
	while (1)
	{
		printf("==========chuc nang===========\n");
		printf("1.tao ma tran ngau nhien \n");
		printf("2.Tinh tong gia tri tung dong \n");
		printf("10. thoat chuong trinh");
		printf("Hay nhap lua chon cua ban: \n");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			taoMaTran(mt, m, n, thap, cao);
			printf("Ma tran la: \n");
			xuatMatran(mt, m, n);
			break;
		case 2:
			tongDong(mt, m, n);
			break;
		case 10:
			giaiPhongMtran(mt, m);
			printf("Thoat chuong trinh\n");
			break;
		}
	}
}
