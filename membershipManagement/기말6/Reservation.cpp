#include <iostream>
#include <string>
using namespace std;
#include "Reservation.h"

extern int i;
extern int i2;
extern Trainer tr[2];
extern Member mem[5];

void Reservation::reservation() {
	cout << "회원 ID : ";
	cin >> answer;

	if (answer < 200 || answer > 204)
		cout << "없는 회원 ID 입니다. 다시 입력해주세요." << endl;
	else if (i2 == 0)
		cout << "회원의 정보가 아직 입력되지 않았습니다. 메뉴로 돌아가서 회원의 정보를 먼저 입력하세요." << endl;

	else if (i == 0)
		cout << "트레이너의 정보가 아직 입력되지 않았습니다. 메뉴로 돌아가서 트레이너의 정보를 먼저 입력하세요." << endl;

	else {	
			cout << "[예약 가능한 트레이너]" << endl;
			for (int j = 0; j <= i - 1; j++)
				cout << tr[j].id << "     " << tr[j].name << endl;

			cout << endl;
			cout << "예약하고 싶은 트레이너 ID: ";
			cin >> whatTrainer;

			if (whatTrainer < 100 || whatTrainer>101)
				cout << "없는 트레이너ID 입니다. 다시 입력해주세요." << endl;

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
				cout << "예약 완료 !" << endl;
			}
		}
}