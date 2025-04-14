#pragma once

#include "GameStart.h"

struct Player
{
	std::string playerName;
	COORD playerPos;
};

void inputPlayer(Player& name);
void setPlayerUI(Player& name, COORD playerUIPos);
void showPlayerUI();