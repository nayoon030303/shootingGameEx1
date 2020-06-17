#include "FirstStage.h"
#include "global.h"
#include "BackGround.h"

void FirstStage::Render()
{
	
	backGround.Render(FiRSTSTAGE_PNG);
	player.Render();
}

void FirstStage::Update()
{
	backGround.Update();
	player.Update();
	
}