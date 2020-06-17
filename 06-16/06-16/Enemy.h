#pragma once
#include "global.h"
class Enemy
{
public:
	virtual void Render() = 0;
	virtual void Update() = 0;

	virtual D3DXVECTOR2 GetPos() = 0;
	virtual void GetRadious() = 0;
	virtual void GetWidth() = 0;
	virtual void GetHeight() = 0;

};