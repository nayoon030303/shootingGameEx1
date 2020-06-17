#include "PlayerBullet.h"
#include "global.h"
#include "Player.h"

PlayerBullet::PlayerBullet(float x, float y, float vx, float vy)
{
	width = 20;
	height = 20;

	posX = x;
	posY = y;
	velX = vx;
	velY = vy;

	isDead = false;

}
void PlayerBullet::Render()
{
	TextureElement* element = textureManager.GetTexture(PLAYER_BULLETSPREAD_PNG);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 30;
	srcRect.bottom = 20;

	D3DXVECTOR3 pos(posX, posY, 0);
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();
}

void PlayerBullet::Update()
{
	posX += velX;
	posY += velY;
	if (posX<0 || posX>WINDOW_WIDTH || posY<0 || posY>WINDOW_HEIGHT)
	{
		isDead = true;
	}
		
}

D3DXVECTOR2 PlayerBullet::GetPos()
{
	return D3DXVECTOR2(posX, posY);
}

float PlayerBullet::GetRadious()
{
	return 15;
}
void PlayerBullet::GetWidth()
{

}
void PlayerBullet::GetHeight()
{

}

bool PlayerBullet::IsDead()
{
	return isDead;
}