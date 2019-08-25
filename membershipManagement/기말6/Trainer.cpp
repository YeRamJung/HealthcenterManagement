#include <iostream>
#include <string>
using namespace std;
#include "Trainer.h"
#include "Reservation.h"

extern Member mem[5];
extern string state;

void Trainer::reservationManagement() {

	cout << "트레이너 ID : ";
	cin >> answer2;

	if (answer2 < 100 || answer2>101)
		cout << "없는 트레이너 ID 입니다. 다시 입력해주세요." << endl;
	
	else {
		for (int j = 0; j < 5; j++) 
		{
			if (mem[j].trainerID == answer2)
			{
				cout << endl;
				cout << mem[j].id << "     " << mem[j].name << "     " << mem[j].trainerID << "     " << mem[j].state << endl;
				cout << "승낙하려면 y를, 거절하려면 n을 입력하시오 : ";
				cin >> yn;

				if (yn == 'y') {
					mem[j].state.replace(0, 7, "Ok!");
					cout << mem[j].id << "     " << mem[j].name << "     " << mem[j].trainerID << "     " << mem[j].state << endl;
				}

				else if (yn == 'n') {
					cout << "예약을 승인하지 않았습니다." << endl;
				}

				else cout << "잘못 입력하셨습니다." << endl;
			}
		}
	}
}