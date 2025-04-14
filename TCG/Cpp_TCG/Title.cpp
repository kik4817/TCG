#include "Title.h"

char title[MAX_HEIGHT][MAX_WIDTH + 1] =
{
	" #####  ####  #### ",
	"   #   #     #     ",
	"   #   #     # ### ",
	"   #   #     #  ## ",
	"   #    ####  ## # "
};

void setTitle(char(*title)[MAX_WIDTH + 1], COORD titlePos)
{
	for (int i = 0; i < MAX_HEIGHT; i++)
	{
		ConsoleUtils::setXY(titlePos.X, titlePos.Y + i);
		std::cout << title[i] << std::endl;
	}
}

void showTitle()
{
	COORD titlePos = { 30,5 };
	setTitle(title, titlePos);
	Sleep(1000);
	system("cls");
}
