#pragma once
#include "Bullet.h"
#include "Player.h"

class PlayerBullet:public Bullet
{
public:

	
	
	PlayerBullet(float x, float y,float vx, float vy);
	 void Render() override;
	 void Update()override;

	 D3DXVECTOR2 GetPos()override;
	 float GetRadious()override;
	 void GetWidth()override;
	 void GetHeight()override;
	 bool IsDead() override;

	 float posX;
	 float posY;

	 float width;
	 float height;

	 float velX;
	 float velY;

	 bool isDead;

	 float speed;

};
