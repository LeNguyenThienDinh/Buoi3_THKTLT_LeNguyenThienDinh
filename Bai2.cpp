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
			printf("%d", maTran[i][j]);

		}
		printf("\n");
	}
}

//== == == == == == == == == == == == == xu_li_main == == == == == == == == == == == == == == == ==