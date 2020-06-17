#include "PlayerBullet.h"
#include "global.h"
#include "Player.h"

PlayerBullet::PlayerBullet(float x, float y)
{
	width = 20;
	height = 20;

	posX = 0;
	posY = 0;

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

	D3DXVECTOR3 pos(posX /*- width / 2*/, posY /*- height/2-30 / 2*/, 0);
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();
}

void PlayerBullet::Update()
{

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