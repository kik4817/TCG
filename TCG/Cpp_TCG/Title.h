#pragma once

#include "GameStart.h"

#define MAX_WIDTH 20
#define MAX_HEIGHT 10

char title[MAX_HEIGHT][MAX_WIDTH + 1];
void setTitle(char(*title)[MAX_WIDTH + 1], COORD titlePos);
void showTitle();
