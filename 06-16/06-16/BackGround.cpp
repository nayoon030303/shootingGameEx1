#include "BackGround.h"
#include "global.h"

BackGround::BackGround()
{
	posY = 0;
}
void BackGround::Render(int name)
{
	TextureElement* element = textureManager.GetTexture(name);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 640;
	srcRect.bottom = 480;

	D3DXVECTOR3 pos(0, posY, 0);
	element->sprite->Draw(element->texture,&srcRect,nullptr,&pos,D3DCOLOR_XRGB(255,255,255));

	pos = D3DXVECTOR3(0, posY - WINDOW_HEIGHT, 0);
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();
}

void BackGround::Update()
{
	posY += 1;
	posY =(int) posY % WINDOW_HEIGHT;
	
}