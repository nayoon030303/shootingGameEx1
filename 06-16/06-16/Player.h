#pragma once
#include "global.h"

class Player
{
public:
	Player();
	void Render();
	void Update();

	D3DXVECTOR2 GetPos();
	void GetRadious();
	void GetWidth();
	void GetHeight();

	int hp;
	float speed;
	float posX;
	float posY;
	float width;
	float heigth;
};