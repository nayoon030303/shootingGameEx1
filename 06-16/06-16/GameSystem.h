#pragma once
#include <vector>

using namespace std;

class Bullet;

class GameSystem
{
public:

	vector<Bullet*> playerBullet;

	GameSystem();
	void MakePlayerBullet(float px, float py);
	void Render();
	void Update();

	
};

