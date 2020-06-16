#include "StageManager.h"
#include "TitleStage.h"
#include "FirstStage.h"

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
	if (currentStage != nullptr)
		delete currentStage;

	FirstStage* stage = new FirstStage();
	currentStage = stage;
}

void StageManager::Render()
{
	currentStage->Render();
}

void StageManager::Update()
{
	currentStage->Update();
}

