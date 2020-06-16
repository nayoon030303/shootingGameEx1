#include "StageManager.h"
#include "TitleStage.h"

StageManager::StageManager()
{
	
}

void StageManager::MakeTitleStage()
{
	if (currentStage != nullptr)
		delete currentStage;

	TitleStage* stage = new TitleStage();
	currentStage = stage;
}
void StageManager::MakeGameStage()
{

}

void StageManager::Render()
{
	currentStage->Render();
}

void StageManager::Update()
{
	currentStage->Update();
}

