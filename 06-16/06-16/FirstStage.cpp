#include "FirstStage.h"
#include "global.h"

void FirstStage::Render()
{
	TextureElement* element = textureManager.GetTexture(FiRSTSTAGE_PNG);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 480;
	srcRect.bottom = 680;

	D3DXVECTOR3 pos(0, 0, 0);
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();
}

void FirstStage::Update()
{

}