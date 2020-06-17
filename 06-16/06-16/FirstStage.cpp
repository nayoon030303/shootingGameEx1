#include "FirstStage.h"
#include "global.h"


FirstStage::FirstStage()
{
	
}

void FirstStage::Render()
{
	backGround.Render(FiRSTSTAGE_PNG);
	player.Render();
	gameSystem.Render();
}

void FirstStage::Update()
{
	backGround.Update();
	player.Update();
	gameSystem.Update();

	if (inputManager.prevKeyBuffer[VK_ESCAPE] == 1 && inputManager.keyBuffer[VK_ESCAPE] == 0)
	{
		PostQuitMessage(0);
	}
	
}