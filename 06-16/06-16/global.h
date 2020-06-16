#pragma once

#include "TextureManager.h"
#include "InputManager.h"
using namespace std;

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 640
#define COLOR    D3DCOLOR_XRGB(255,255,255)

#define PLAYER_PNG 100
#define TITLE_PNG 200

extern LPDIRECT3D9         g_pD3D;
extern LPDIRECT3DDEVICE9   g_pd3dDevice ;

extern TextureManager textureManager;
extern InputManager inputManager;
