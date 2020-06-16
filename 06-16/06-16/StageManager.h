#pragma once
#include "Stage.h"

class StageManager : public Stage
{
public:
	StageManager();

	void MakeTitleStage();
	void MakeGameStage();

	void Render() override;
	void Update() override;

	Stage* currentStage;
};