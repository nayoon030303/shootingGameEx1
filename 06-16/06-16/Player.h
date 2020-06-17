#pragma once
#include "global.h"
#include "PlayerBullet.h"
#include "Enemy.h"

class Player:public Enemy
{
public:
	Player();
	void Render() override;
	void Update()override;

	D3DXVECTOR2 GetPos()override;
	void GetRadious()override;
	void GetWidth()override;
	void GetHeight()override;
	

	int hp;
	float speed;
	float posX;
	float posY;
	float width;
	float heigth;

	
	
	
};