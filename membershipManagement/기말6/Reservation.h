#pragma once
#include "Member.h"

class Trainer;

class Reservation :public Member {
	int answer;
	int whatTrainer;
public:
	void reservation();
};