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
		cout << "\n� ������ ���������� 5 �������." << endl;
		cout << "\n��� ������ �������� 0." << endl;
		cout << endl;
		cout << "\n������� ����� �������: ";
		cin >> n;

		switch (n)
		{

			case 1:
			{
				cout << "\n������� �1" << endl;
				cout << endl;

				/*1. ���� �������������� ����� x � y. ��������: (x-y) / 1+(xy)*/

				double x, y;

					cout << "������� �������������� ����� x: ";
					cin >> x;

					cout << "������� �������������� ����� y: ";
					cin >> y;

					cout << "(x-y) / 1+(xy) = "<< (x-y)/(1+(x*y))<<endl;	

				cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				cout << "\n������� �2" << endl;
				cout << endl;

				/*2. �������, ������� ������� ������������ �������, 
				���� ����� X ����������, Y ����� � Z �����������. 
				��������, ��� ���� ����� �� 2 ����� ������ ���� ��������� �
				�� 7 ������ ������ ���� ����������. ����� ��������, ��� 
				��������� ��������� ���������� 3 �����. ��������� ����������
				����� ��������� �������. (������� ������: �������� ��� �����������
				����� X, Y � Z, ������ �� ������� �� ��������� 10^9). */

				int x, y, z;

				cout << "������� ���������� ���������� �: ";
				cin >> x;

				cout << "������� ���������� ����� Y: ";
				cin >> y;

				cout << "������� ���������� ����������� Z: ";
				cin >> z;

				cout << endl;

					cout << "��������� ������ ��������� - 3 �����."<<endl;
					cout << "��������� ����� ����� - 5 ������." << endl;
					cout << "��������� ������ ���������� - 12 ������." << endl;

					cout << endl;

					cout << "����� ��������� ����������: "<< "3 * "<<x<< " + "<<"5 * "<<y<<" + "<<"12 * "<<z<<" = "<<3*x+5*y+12*z<<endl;


				cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				cout << "\n������� �3" << endl;
				cout << endl;

				/*3. ��������� ������� ��� ����� ����� � � �. */

				int A, B;

					cout << "������� ����� ����� �: ";
					cin >> A;

					cout << "������� ����� ����� �: ";
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
				cout << "\n������� �4" << endl;
				cout << endl;

				/*4. ���� ��� ��������� �����. 
				����� �����, ��������, ������������ � ������� �� ���������.*/

				double A, B;

				cout << "������� ����� ����� �: ";
				cin >> A;

				cout << "������� ����� ��������� ����� �: ";
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
				cout << "\n������� �5" << endl;
				cout << endl;

				/*5. ���� ��� ��������� �����. 
				����� �����, ��������, ������������ � �������*/

				double A, B;

				cout << "������� ����� ����� �: ";
				cin >> A;

				cout << "������� ����� ��������� ����� �: ";
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
	cout << "�������!" << endl;
	cout << endl;

	system("pause");
}