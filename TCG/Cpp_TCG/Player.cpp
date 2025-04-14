#include "Player.h"

void inputPlayer(Player& name)
{
	std::cout << "플레이어의 이름을 입력해주세요." << std::endl;
	std::cin >> name.playerName;	
}

void setPlayerUI(Player& name, COORD playerUIPos)
{
	ConsoleUtils::setXY(playerUIPos.X, playerUIPos.Y);
	std::cout << "플레이어의 이름 : " << name.playerName;
}

void showPlayerUI()
{
	Player player;
	inputPlayer(player);
	COORD playerUIPos = { 80,0 };
	setPlayerUI(player, playerUIPos);
}

