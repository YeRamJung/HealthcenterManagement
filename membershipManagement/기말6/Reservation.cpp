#include <iostream>
#include <string>
using namespace std;
#include "Reservation.h"

extern int i;
extern int i2;
extern Trainer tr[2];
extern Member mem[5];

void Reservation::reservation() {
	cout << "ȸ�� ID : ";
	cin >> answer;

	if (answer < 200 || answer > 204)
		cout << "���� ȸ�� ID �Դϴ�. �ٽ� �Է����ּ���." << endl;
	else if (i2 == 0)
		cout << "ȸ���� ������ ���� �Էµ��� �ʾҽ��ϴ�. �޴��� ���ư��� ȸ���� ������ ���� �Է��ϼ���." << endl;

	else if (i == 0)
		cout << "Ʈ���̳��� ������ ���� �Էµ��� �ʾҽ��ϴ�. �޴��� ���ư��� Ʈ���̳��� ������ ���� �Է��ϼ���." << endl;

	else {	
			cout << "[���� ������ Ʈ���̳�]" << endl;
			for (int j = 0; j <= i - 1; j++)
				cout << tr[j].id << "     " << tr[j].name << endl;

			cout << endl;
			cout << "�����ϰ� ���� Ʈ���̳� ID: ";
			cin >> whatTrainer;

			if (whatTrainer < 100 || whatTrainer>101)
				cout << "���� Ʈ���̳�ID �Դϴ�. �ٽ� �Է����ּ���." << endl;

			else
			{
				for (int r = 0; r < 5; r++)
				{
					if (answer == mem[r].id && whatTrainer == 100)
						mem[r].trainerID = 100;
					else if (answer == mem[r].id && whatTrainer == 101)
						mem[r].trainerID = 101;
				}
				cout << endl;
				cout << "���� �Ϸ� !" << endl;
			}
		}
}