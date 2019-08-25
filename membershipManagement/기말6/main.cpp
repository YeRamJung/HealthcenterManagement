#include <iostream>
#include <string>
using namespace std;
#include "People.h"
#include "Member.h"
#include "Trainer.h"
#include "Reservation.h"

int i = 0; int i2 = 0;

Reservation res;
Trainer tr[2];
Member mem[5];

int main() {
	Trainer trainer;

	for (int j = 0; j < 5; j++)
		mem[j].startState();

	while (true)
	{
		int mainMenu = 0;

		cout << "--------Gym Manager is running--------" << endl;
		cout << "1. Trainer     2. Member     3. exit" << endl;
		cout << "--------------------------------------" << endl;
		cout << endl;
		cin >> mainMenu;

		if (mainMenu == 1)
		{
			while (true)
			{
				int trainerMenu = 0;

				cout << "-----------------------------Trainer Menu-----------------------------" << endl;
				cout << "1. �����Է�     2. ��ü Ʈ���̳� ����Ȯ��     3. ����Ȯ��     4. exit" << endl;
				cout << "----------------------------------------------------------------------" << endl;
				cout << endl;
				cin >> trainerMenu;

				if (trainerMenu == 1)
				{
					if (i < 2)
					{
						tr[i].addPerson();
						tr[i].id = 100 + i;
						cout << "���� �Է��� Ʈ���̳��� ���� " << i + 1 << "�̸�, �߰��� �Է� ������ ȸ���� ���� " << 1 - i << "�� �Դϴ�." << endl;
						cout << "Ʈ���̳� " << tr[i].name << "�� ID : " << tr[i].id << endl;

						i++;
					}

					else 
						cout << "�� �̻� Ʈ���̳ʸ� �Է��� �� �����ϴ�." << endl;
				}

				else if (trainerMenu == 2)
				{
					if (i == 0) 
						cout << "Ʈ���̳��� ������ ���� �Էµ��� �ʾҽ��ϴ�. �޴��� ���ư��� Ʈ���̳��� ������ ���� �Է��ϼ���." << endl;

					else 
					{ 
						for (int j = 0; j <= i - 1; j++)
							cout << tr[j].id << "     " << tr[j].name << endl; 
					}
				}

				else if (trainerMenu == 3)
				{
					trainer.reservationManagement();
				}

				else if (trainerMenu == 4) 
					break;

				else 
					cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�. 1���� 4 �߿� �ϳ��� �Է����ּ���." << endl;
			}
		}

		else if (mainMenu == 2)
		{
			while (true)
			{
				int memberMenu = 0;

				cout << "--------------------------Member Menu--------------------------" << endl;
				cout << "1. �����Է�     2. ��ü ȸ�� ����Ȯ��     3. ����     4. exit" << endl;
				cout << "--------------------------------------------------------------" << endl;
				cout << endl;
				cin >> memberMenu;

				if (memberMenu == 1)
				{
					if (i2 < 5)
					{
						mem[i2].addPerson();
						mem[i2].id = 200 + i2;

						cout << "���� �Է��� ȸ���� ���� " << i2 + 1 << "�̸�, �߰��� �Է� ������ ȸ���� ���� " << 4 - i2 << "�� �Դϴ�." << endl;
						cout << mem[i2].name << "���� ID : " << mem[i2].id << endl;

						(i2)++;
					}

					else 
						cout << "�� �̻� ȸ���� �Է��� �� �����ϴ�." << endl;
				}

				else if (memberMenu == 2)
				{
					if (i2 == 0) 
						cout << "ȸ���� ������ ���� �Էµ��� �ʾҽ��ϴ�. �޴��� ���ư��� ȸ���� ������ ���� �Է��ϼ���." << endl;

					else 
					{ 
						for (int j = 0; j <= i2 - 1; j++)
							cout << mem[j].id << "     " << mem[j].name << "     " << mem[j].trainerID << "     " << mem[j].state << endl; 
					}
				}

				else if (memberMenu == 3)
				{
					res.reservation();
				}

				else if (memberMenu == 4) 
					break;

				else 
					cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�. 1���� 4 �߿� �ϳ��� �Է����ּ���." << endl;
			}
		}

		else if (mainMenu == 3) 
			break;

		else
			cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�. 1���� 3 �߿� �ϳ��� �Է����ּ���." << endl;
	}
}