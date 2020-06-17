#pragma once
#include <vector>
#include "PlayerBullet.h"

using namespace std;

class GameSystem
{
public:

	GameSystem();
	void MakePlayerBullet(float px, float py);
	void Render();
	void Update();

	vector<Bullet*> playerBullet;
};

