#pragma once
#include "TitleStage.h"
#include "Stage.h"
#include "Player.h"
class TitleStage : public Stage
{
public:
	TitleStage();
	 void Render() override;
	 void Update() override;

};