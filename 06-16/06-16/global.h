#pragma once

#include "TextureManager.h"
#include "InputManager.h"
#include "StageManager.h"
#include "GameSystem.h"

using namespace std;

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480


#define PLAYER_PNG 100
#define TITLE_PNG 200
#define FiRSTSTAGE_PNG 300
#define PLAYER_BULLETSPREAD_PNG 400

extern LPDIRECT3D9         g_pD3D;
extern LPDIRECT3DDEVICE9   g_pd3dDevice ;

extern TextureManager textureManager;
extern InputManager inputManager;
extern StageManager stageManager;
extern GameSystem gameSystem;