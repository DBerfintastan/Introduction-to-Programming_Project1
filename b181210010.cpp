/****************************************************************************************
*****************************************************************************************
*****************************************************************************************
********************       ÖĞRENCİ ADI: Deniz Berfin Taştan     *************************
********************       ÖĞRENCİ NUMARASI: B181210010         *************************
********************       DERS GRUBU : D                       *************************
*****************************************************************************************
*****************************************************************************************
*****************************************************************************************/


#include<iostream>
#include<Windows.h>;

using namespace std;

int main()
{
	int satir, sutun, ortayildiz, koseyildiz;
	do
	{
		do
		{
			cout << "Satir Sayisi Giriniz:";
			cin >> satir;
			if (satir > 15 || satir < 5)
				cout << "Hatali Satir Sayisi Girdiniz.Tekrar Deneyiniz.";

		} while (satir > 15 || satir < 5); // Satır sayısının 5 ile 15 arasında bir değr olması gerektiğini gösterir.

		do
		{
			cout << "Sutun Sayisi Giriniz:";
			cin >> sutun;

			if (sutun > 40 || sutun < 5)
				cout << "Hatali Sutun Sayisi Girdiniz.Tekrar Deneyiniz.";

		} while (sutun > 40 || sutun < 5); // Sütun sayısının 5 ile 40 arasında bir değerde olması gerektiğini gösterir.

		if (satir * 2 != sutun)
			cout << "Sutun Sayisi Satir Sayisinin Iki Kati Olmalidir.Tekrar Deneyin.";

	} while (satir * 2 != sutun); // Sütun sayısının satır sayısının 2 katı olması gerektiğini gösterir.


	for (int i = 0; i <= 1; ++i)
	{

		if (i == 0) // Basılacak yıldızların orta nokta olarak basılmasını sağlar.
		{
			ortayildiz = sutun / 2 - 1;
			koseyildiz = sutun / 2;
		}
		else if (i != 0) // Basılacak yıldızların köşe nokta olarak basılmasını sağlar.
		{
			koseyildiz = 0;
			ortayildiz = sutun - 1;
		}
		for (int a = 0; a < satir; ++a) // Kare oluşturacak satırın taranmasını sağlar.
		{

			for (int b = 0; b < sutun; ++b) // Kare oluşturacak sütunun taranmasını sağlar.
			{

				if (a == 0 || a == satir - 1 || b == 0 || b == sutun - 1) //Satır başı veya satır sonuysa yıldız eklenmesini sağlar.
					cout << "*";

				else if (b == ortayildiz || b == koseyildiz) // Yıldız bulunan bir satırsa yıldız eklenmesini sağlar.
				{
					cout << "*";
				}

				else  //Eğer yukarıdaki iki şarttan biri değilse boşluk bırakılmasını sağlar.
					cout << " ";
			}

			ortayildiz--;
			koseyildiz++; // Yıldızların ilk şekilde uzaklaştırılıp, ikinci şekilde yakınlaştırılmasını sağlar.
			cout << endl;
			Sleep(100);
		}
		cout << endl;
	}

}