#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//=======================================xu_li_ham================================
void taoMaTranVuong(int **maTran, int n, int thap, int cao) 
{
	srand(time(0));
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < n; ++j) 
		{
			maTran[i][j] = thap + rand() % (cao - thap + 1);
		}
	}
}

void inMaTranVuong(int **maTran, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d\t", maTran[i][j]);

		}
		printf("\n");
	}
}

//== == == == == == == == == == == == == xu_li_main == == == == == == == == == == == == == == == ==
int main() 
{
	int n, thap, cao, luaChon;
	int **maTran;

	do 
	{
		printf("nhap n cho ma tran (n >= 5): ");
		scanf("%d", &n);
		if (n < 5) {
			printf("n cua ma tran phai lon hon hoac bang 5.\n");
		}
	} while (n < 5);

	printf("nhap gioi han duoi: ");
	scanf("%d", &thap);
	printf("nhap gioi han tren: ");
	scanf("%d", &cao);

	if (thap > cao) 
	{
		printf("gioi han duoi phai nho hon gioi han tren.\n");
		return 1;
	}
	maTran = (int **)malloc(n * sizeof(int *));
	for (int i = 0; i < n; ++i)
	{
		maTran[i] = (int *)malloc(n * sizeof(int));
	}

	while (1) 
	{
		printf("\nMenu:\n");
		printf("1. tao va hien thi ma tran vuong\n");
		printf("7. thoat\n");
		printf("nhap lua chon: ");
		scanf("%d", &luaChon);

		switch (luaChon)
		{
		case 1:
			taoMaTranVuong(maTran, n, thap, cao);
			printf("ma tran vuong co cap %d:\n", n);
			inMaTranVuong(maTran, n);
			break;
		case 2:
			
			break;
		case 7:
			for (int i = 0; i < n; ++i) {
				free(maTran[i]);
			}
			free(maTran);
			printf("thoat chuong trinh.\n");
			return 0;
		default:
			printf("lua chon khong hop le hay nhap lai\n");
		}
	}

	return 0;
}