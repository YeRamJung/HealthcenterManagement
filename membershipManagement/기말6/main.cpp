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
				cout << "1. 정보입력     2. 전체 트레이너 정보확인     3. 예약확인     4. exit" << endl;
				cout << "----------------------------------------------------------------------" << endl;
				cout << endl;
				cin >> trainerMenu;

				if (trainerMenu == 1)
				{
					if (i < 2)
					{
						tr[i].addPerson();
						tr[i].id = 100 + i;
						cout << "현재 입력한 트레이너의 수는 " << i + 1 << "이며, 추가로 입력 가능한 회원의 수는 " << 1 - i << "명 입니다." << endl;
						cout << "트레이너 " << tr[i].name << "의 ID : " << tr[i].id << endl;

						i++;
					}

					else 
						cout << "더 이상 트레이너를 입력할 수 없습니다." << endl;
				}

				else if (trainerMenu == 2)
				{
					if (i == 0) 
						cout << "트레이너의 정보가 아직 입력되지 않았습니다. 메뉴로 돌아가서 트레이너의 정보를 먼저 입력하세요." << endl;

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
					cout << "숫자를 잘못 입력하셨습니다. 1부터 4 중에 하나를 입력해주세요." << endl;
			}
		}

		else if (mainMenu == 2)
		{
			while (true)
			{
				int memberMenu = 0;

				cout << "--------------------------Member Menu--------------------------" << endl;
				cout << "1. 정보입력     2. 전체 회원 정보확인     3. 예약     4. exit" << endl;
				cout << "--------------------------------------------------------------" << endl;
				cout << endl;
				cin >> memberMenu;

				if (memberMenu == 1)
				{
					if (i2 < 5)
					{
						mem[i2].addPerson();
						mem[i2].id = 200 + i2;

						cout << "현재 입력한 회원의 수는 " << i2 + 1 << "이며, 추가로 입력 가능한 회원의 수는 " << 4 - i2 << "명 입니다." << endl;
						cout << mem[i2].name << "님의 ID : " << mem[i2].id << endl;

						(i2)++;
					}

					else 
						cout << "더 이상 회원을 입력할 수 없습니다." << endl;
				}

				else if (memberMenu == 2)
				{
					if (i2 == 0) 
						cout << "회원의 정보가 아직 입력되지 않았습니다. 메뉴로 돌아가서 회원의 정보를 먼저 입력하세요." << endl;

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
					cout << "숫자를 잘못 입력하셨습니다. 1부터 4 중에 하나를 입력해주세요." << endl;
			}
		}

		else if (mainMenu == 3) 
			break;

		else
			cout << "숫자를 잘못 입력하셨습니다. 1부터 3 중에 하나를 입력해주세요." << endl;
	}
}