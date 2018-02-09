#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color 1A");

	int i, j, n;

	do
	{
		cout << "\nВ работе содержится 5 заданий." << endl;
		cout << "\nДля выхода наберите 0." << endl;
		cout << endl;
		cout << "\nВведите номер задания: ";
		cin >> n;

		switch (n)
		{

			case 1:
			{
				cout << "\nЗадание №1" << endl;
				cout << endl;

				/*1. Даны действительные числа x и y. Получить: (x-y) / 1+(xy)*/

				double x, y;

					cout << "Введите действительное число x: ";
					cin >> x;

					cout << "Введите действительное число y: ";
					cin >> y;

					cout << "(x-y) / 1+(xy) = "<< (x-y)/(1+(x*y))<<endl;	

				cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				cout << "\nЗадание №2" << endl;
				cout << endl;

				/*2. Однажды, посетив магазин канцелярских товаров, 
				Вася купил X карандашей, Y ручек и Z фломастеров. 
				Известно, что цена ручки на 2 рубля больше цены карандаша и
				на 7 рублей меньше цены фломастера. Также известно, что 
				стоимость карандаша составляет 3 рубля. Требуется определить
				общую стоимость покупки. (Входные данные: записаны три натуральных
				числа X, Y и Z, каждое из которых не превышает 10^9). */

				int x, y, z;

				cout << "Введите количество карандашей Х: ";
				cin >> x;

				cout << "Введите количество ручек Y: ";
				cin >> y;

				cout << "Введите количество фломастеров Z: ";
				cin >> z;

				cout << endl;

					cout << "Стоимость одного карандаша - 3 рубля."<<endl;
					cout << "Стоимость одной ручки - 5 рублей." << endl;
					cout << "Стоимость одного фломастера - 12 рублей." << endl;

					cout << endl;

					cout << "Общая стоимость составляет: "<< "3 * "<<x<< " + "<<"5 * "<<y<<" + "<<"12 * "<<z<<" = "<<3*x+5*y+12*z<<endl;


				cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				cout << "\nЗадание №3" << endl;
				cout << endl;

				/*3. Требуется сложить два целых числа А и В. */

				int A, B;

					cout << "Введите целое число А: ";
					cin >> A;

					cout << "Введите целое число В: ";
					cin >> B;

					cout << endl;

						cout << "A + B = " << A+B << endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 4:
			{
				cout << "\nЗадание №4" << endl;
				cout << endl;

				/*4. Даны два ненулевых числа. 
				Найти сумму, разность, произведение и частное их квадратов.*/

				double A, B;

				cout << "Введите целое число А: ";
				cin >> A;

				cout << "Введите целое ненулевое число В: ";
				cin >> B;

					cout << endl;
					cout << "A^2 + B^2 = " << A*A+B*B << endl;

					cout << endl;
					cout << "A^2 - B^2 = " << A*A - B*B << endl;
				
					cout << endl;
					cout << "A^2 * B^2 = " << A*A * B*B << endl;

					cout << endl;
					cout << "A^2 / B^2 = " << (A*A) / (B*B )<< endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 5:
			{
				cout << "\nЗадание №5" << endl;
				cout << endl;

				/*5. Даны два ненулевых числа. 
				Найти сумму, разность, произведение и частное*/

				double A, B;

				cout << "Введите целое число А: ";
				cin >> A;

				cout << "Введите целое ненулевое число В: ";
				cin >> B;

					cout << endl;
					cout << "A + B = " << A + B << endl;

					cout << endl;
					cout << "A - B = " << A - B << endl;

					cout << endl;
					cout << "A * B = " << A * B << endl;

					cout << endl;
					cout << "A / B = " << A / B << endl;

				cout << endl;

				system("pause");
				system("cls");

			}
			break;

		}

	} while (n != 0);

	cout << endl;
	cout << "Спасибо!" << endl;
	cout << endl;

	system("pause");
}