//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//
////============================xu_li_ham
//void taoMaTran(int **mt, int m, int n, int thap, int cao)
//{
//	srand(time(0));
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			mt[i][j] = thap + rand() % (cao - thap + 1);
//		}
//	}
//}
//
//void xuatMatran(int **mt, int m, int n)
//{
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			printf("%d ", mt[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void giaiPhongMtran(int **mt, int m)
//{
//	for (int i = 0; i < m; ++i)
//	{
//		free(mt[i]);
//	}
//	free(mt);
//}
//
//void tongDong(int **mt, int m, int n)
//{
//	
//	for (int i = 0; i < m; ++i)
//	{
//		int tong = 0;
//		for (int j = 0; j < n; ++j)
//		{
//			tong += mt[i][j];
//		}
//		printf("tong dong %d la: %d\n", i + 1, tong);
//	}
//}
//
//void timMaxCot(int **mt, int m, int n)
//{
//	for (int j = 0; j < n; ++j)
//	{
//		int max = mt[0][j];
//		for (int i = 0; i < m; ++i)
//		{
//			if (mt[i][j]> max)
//			{
//				max = mt[i][j];
//			}
//		}
//		printf("Phan tu lon nhat cot %d la: %d \n", j + 1, max);
//	}
//}
//
//void inCacPhanTuBien(int **mt, int m, int n) {
//	printf("Cac phan tu thuoc duong bien la:\n");
//	for (int j = 0; j < n; ++j) {
//		printf("%d ", mt[0][j]);
//	}
//	printf("\n");
//
//	for (int i = 1; i < m - 1; ++i) {
//		printf("%d ", mt[i][n - 1]);
//	}
//	printf("\n");
//
//	if (n > 1) {
//		for (int j = n - 1; j >= 0; --j) {
//			printf("%d ", mt[m - 1][j]);
//		}
//		printf("\n");
//	}
//
//	if (n > 1) {
//		for (int i = m - 2; i > 0; --i) {
//			printf("%d ", mt[i][0]);
//		}
//		printf("\n");
//	}
//}
//void inPhanTuCucDai(int **mt, int soDong, int soCot) {
//	printf("cac phan tu cuc dai la:\n");
//	for (int i = 0; i < soDong; ++i) {
//		for (int j = 0; j < soCot; ++j) {
//			bool cucDai = true;
//			if (i > 0 && mt[i][j] <= mt[i - 1][j]) cucDai = false;
//			if (i < soDong - 1 && mt[i][j] <= mt[i + 1][j]) cucDai = false;
//			if (j > 0 && mt[i][j] <= mt[i][j - 1]) cucDai = false;
//			if (j < soCot - 1 && mt[i][j] <= mt[i][j + 1]) cucDai = false;
//			if (cucDai) {
//				printf("%d (%d, %d)\n", mt[i][j], i, j);
//			}
//		}
//	}
//}
//bool ktraHoangHau(int **mt, int m, int n, int i, int j) {
//	for (int x = 0; x < m; ++x) {
//		if (x != i && mt[x][j] >= mt[i][j]) return false;
//	}
//	for (int y = 0; y < n; ++y) {
//		if (y != j && mt[i][y] >= mt[i][j]) return false;
//	}
//	return true;
//}
//void inPhanTuHoangHau(int **mt, int m, int n) {
//	printf("cac phan tu hoang hau:\n");
//	for (int i = 0; i < m; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (ktraHoangHau(mt, m, n, i, j)) {
//				printf("%d (%d, %d)\n", mt[i][j], i, j);
//			}
//		}
//	}
//}
//
//bool KtraDiemYenNgua(int **mt, int m, int n, int i, int j) {
//	int giaTri = mt[i][j];
//	for (int y = 0; y < n; ++y) {
//		if (mt[i][y] < giaTri) return false;
//	}
//	for (int x = 0; x < m; ++x) {
//		if (mt[x][j] > giaTri) return false;
//	}
//	return true;
//}
//
//void inDiemYenNgua(int **mt, int m, int n) {
//	printf("cac diem yen ngua la:\n");
//	for (int i = 0; i < m; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (KtraDiemYenNgua(mt, m, n, i, j)) {
//				printf("%d (%d, %d)\n", mt[i][j], i, j);
//			}
//		}
//	}
//}
//void inDongChiChuaSoChan(int **mt, int m, int n) 
//{
//	
//	for (int i = 0; i < m; ++i) 
//	{
//		bool chiChuaSoChan = true;
//		for (int j = 0; j < n; ++j) 
//		{
//			if (mt[i][j] % 2 != 0) 
//			{
//				chiChuaSoChan = false;
//				printf("khong co dong nao chua so chan\n");
//				break;
//			}
//		}
//		if (chiChuaSoChan) {
//			for (int j = 0; j < n; ++j) 
//			{
//				printf("cac dong chi chua so chan la:\n");
//				printf("%d ", mt[i][j]);
//			}
//			printf("\n");
//		}
//	}
//}
//void sapXepTangDanTungDong(int **mt, int m, int n) 
//{
//	for (int i = 0; i < n; ++i) 
//	{
//		for (int j = 0; j < m - 1; ++j) 
//		{
//			for (int k = j + 1; k < m; ++k) 
//			{
//				if (mt[i][j] > mt[i][k])
//				{
//					int temp = mt[i][j];
//					mt[i][j] = mt[i][k];
//					mt[i][k] = temp;
//				}
//			}
//		}
//	}
//}
//
////============================xu_li_main
//int main()
//{
//	int m, n, thap, cao, chon;
//	int **mt = NULL;
//	printf("Nhap vao so dong: \n");
//	scanf("%d", &m);
//	printf("nhap vao so cot: \n");
//	scanf("%d", &n);
//	printf("Nhap vao gioi han duoi ma tran: \n");
//	scanf("%d", &thap);
//	printf("Nhap vao gioi han tren ma tran: \n");
//	scanf("%d", &cao);
//	if (m <= 0 || n <= 0)
//	{
//		printf("Dong va cot phai lon hon 0!!!\n");
//		return 1;
//	}
//	if (thap > cao)
//	{
//		printf("Gioi han duoi phai nho hon hoac bang gioi han tren \n");
//		return 1;
//	}
//	mt = (int **)malloc(m * sizeof(int *));
//	for (int i = 0; i < m; ++i)
//	{
//		mt[i] = (int *)malloc(n * sizeof(int));
//	}
//	taoMaTran(mt, m, n, thap, cao);
//	while (1)
//	{
//		printf("==========chuc nang===========\n");
//		printf("1.tao ma tran ngau nhien \n");
//		printf("2.Tinh tong gia tri tung dong \n");
//		printf("3.Tim max cot \n");
//		printf("4.Hien thi cac phan tu thuoc bien \n");
//		printf("5.Tim phan tu cuc dai \n");
//		printf("6.Xuat cac phan tu hoang hau \n");
//		printf("7.Xuat cac phan tu yen ngua \n");
//		printf("8.Tim dong toan chan\n");
//		printf("9.Sap xep mang A tang theo tung dong\n");
//		printf("10. thoat chuong trinh\n");
//		printf("Hay nhap lua chon cua ban: \n");
//		scanf("%d", &chon);
//		switch (chon)
//		{
//		case 1:
//			taoMaTran(mt, m, n, thap, cao);
//			printf("Ma tran la: \n");
//			xuatMatran(mt, m, n);
//			break;
//		case 2:
//			tongDong(mt, m, n);
//			break;
//		case 3:
//			timMaxCot(mt, m, n);
//			break;
//		case 4:
//			inCacPhanTuBien(mt, m, n);
//			break;
//		case 5:
//			inPhanTuCucDai(mt, m, n);
//			break;
//		case 6:
//			inPhanTuHoangHau(mt, m, n);
//			break;
//		case 7:inDiemYenNgua(mt, m, n);
//			break;
//		case 8:
//			inDongChiChuaSoChan(mt, m, n);
//			break;
//		case 9:
//			sapXepTangDanTungDong(mt, m, n);
//			xuatMatran(mt, m, n);
//			break;
//		case 10:
//			giaiPhongMtran(mt, m);
//			printf("Thoat chuong trinh\n");
//			break;
//		}
//	}
//}
