#pragma once
#include "global.h"


class BackGround
{
public:
	BackGround();
	void Render(int name);
	void Update();

	int posY = 0;
};