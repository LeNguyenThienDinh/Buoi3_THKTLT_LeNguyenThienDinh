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
//============================xu_li_main
int main()
{
	int m, n, thap, cao, chon;
	int **mt = NULL;
	printf("Nhap vao so dong: \n");
	scanf("%d", &m);
	printf("nhap vao so cot: \n");
	scanf("%d", &n);
	printf("Nhap vao gioi han duoi ngau nhien: \n");
	scanf("%d", &thap);
	printf("Nhap vao gioi han tren ngau nhien: \n");
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
		printf("1.tao ma tran ngau nhien \n");
		printf("Hay nhap lua chon cua ban: \n");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			taoMaTran(mt, m, n, thap, cao);
			break;
		case 2:
			break;
		}
	}
}
