#pragma once
#include "Trainer.h"

class Member :public People {
public:
	int trainerID;
	string state;
	void startState();
};