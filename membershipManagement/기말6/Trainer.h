#pragma once
#include "People.h"

class Trainer :public People {
	int answer2;
	char yn;
public:
	void reservationManagement();
	friend class Reservation;
};