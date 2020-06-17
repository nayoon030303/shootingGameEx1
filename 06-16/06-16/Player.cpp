#include "Player.h"
#include "global.h"
#include "PlayerBullet.h"

Player::Player()
{
	speed = 1;
	hp = 3.0f;
	posX = WINDOW_WIDTH / 2;
	posY = WINDOW_HEIGHT * 0.8;
	width = 48;
	heigth = 71;

}

void Player::Render()
{
	TextureElement* element = textureManager.GetTexture(PLAYER_PNG);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 49;
	srcRect.bottom = 71;

	D3DXVECTOR3 pos(posX-width/2, posY-heigth/2, 0);
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();
}

void Player::Update()
{
	if (inputManager.keyBuffer[VK_LEFT] == 1)
		posX -= speed;
	if (inputManager.keyBuffer[VK_RIGHT] == 1)
		posX += speed;
	if (inputManager.keyBuffer[VK_UP] == 1)
		posY -= speed;
	if (inputManager.keyBuffer[VK_DOWN] == 1)
		posY += speed;
	if (inputManager.prevKeyBuffer['Z'] == 1 && inputManager.keyBuffer['Z'] == 0)
	{
		
	}

}

D3DXVECTOR2 Player::GetPos()
{
	return D3DXVECTOR2(posX, posY);
}

void Player::GetRadious()
{

}

void Player::GetWidth()
{

}

void Player::GetHeight()
{

}