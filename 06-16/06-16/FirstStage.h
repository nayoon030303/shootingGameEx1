#pragma once
#include "Stage.h"
#include "Player.h"
#include "BackGround.h"

class FirstStage:public Stage
{
public:
	FirstStage();
	void Render() override;
	void Update() override;

	Player player;
	BackGround backGround;

	int name;

};