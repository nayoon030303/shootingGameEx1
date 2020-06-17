#include "GameSystem.h"
#include "PlayerBullet.h"
#include "Bullet.h"

GameSystem::GameSystem()
{

}

void GameSystem::MakePlayerBullet(float px, float py)
{
	float speed = 8;

	for (int i = 0; i <=5; i++)
	{
		float deltaAngle = (i * 8 + 70) * 3.141592f / 180.0f;
		float vx = cos(deltaAngle) * speed;
		float vy = -sin(deltaAngle) * speed;

		PlayerBullet* bullet = new PlayerBullet(px, py,vx,vy);
		playerBullet.push_back(bullet);
	}
	
}

void GameSystem::Update()
{
	//player 총알 업데이트 
	for (auto iter = playerBullet.begin(); iter != playerBullet.end();)
	{
		(*iter)->Update();
		if ((*iter)->IsDead())
		{
			iter = playerBullet.erase(iter);
		}
		else
		{
			iter++;
		}
	}

}

void GameSystem::Render()
{
	for (int i = 0; i < playerBullet.size(); i++)
	{
		playerBullet[i]->Render();
	}

}
