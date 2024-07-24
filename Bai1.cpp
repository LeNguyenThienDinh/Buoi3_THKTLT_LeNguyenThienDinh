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
//============================xu_li_main
int main()
{

}
