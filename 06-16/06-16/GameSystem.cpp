#include "GameSystem.h"
#include "PlayerBullet.h"
#include "Bullet.h"

GameSystem::GameSystem()
{

}
void GameSystem::MakePlayerBullet(float px, float py)
{
	PlayerBullet* bullet = new PlayerBullet(px, py);
	playerBullet.push_back(bullet);
}
void GameSystem::Render()
{
	for (int i = 0; i < playerBullet.size(); i++)
	{
		playerBullet[i]->Render();
	}

}

void GameSystem::Update()
{
	
}
