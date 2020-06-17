#pragma once
#include "Bullet.h"
#include "Player.h"

class PlayerBullet:public Bullet
{
public:

	
	
	PlayerBullet(float x, float y);
	 void Render() override;
	 void Update()override;

	 D3DXVECTOR2 GetPos()override;
	 float GetRadious()override;
	 void GetWidth()override;
	 void GetHeight()override;

	 float posX;
	 float posY;

	 float width;
	 float height;

	 float speed;

};
