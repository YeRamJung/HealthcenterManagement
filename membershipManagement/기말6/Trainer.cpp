#include <iostream>
#include <string>
using namespace std;
#include "Trainer.h"
#include "Reservation.h"

extern Member mem[5];
extern string state;

void Trainer::reservationManagement() {

	cout << "Ʈ���̳� ID : ";
	cin >> answer2;

	if (answer2 < 100 || answer2>101)
		cout << "���� Ʈ���̳� ID �Դϴ�. �ٽ� �Է����ּ���." << endl;
	
	else {
		for (int j = 0; j < 5; j++) 
		{
			if (mem[j].trainerID == answer2)
			{
				cout << endl;
				cout << mem[j].id << "     " << mem[j].name << "     " << mem[j].trainerID << "     " << mem[j].state << endl;
				cout << "�³��Ϸ��� y��, �����Ϸ��� n�� �Է��Ͻÿ� : ";
				cin >> yn;

				if (yn == 'y') {
					mem[j].state.replace(0, 7, "Ok!");
					cout << mem[j].id << "     " << mem[j].name << "     " << mem[j].trainerID << "     " << mem[j].state << endl;
				}

				else if (yn == 'n') {
					cout << "������ �������� �ʾҽ��ϴ�." << endl;
				}

				else cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			}
		}
	}
}