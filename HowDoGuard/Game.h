#pragma once

#ifndef __GAME_H__
#define __GAME_H__

#include "Common.h"
#include "GameObject.h"

#include "GraphicsSystem.h"
#include "RenderTarget.h"

#include "Animation.h"
#include "Sprite.h"
#include "Texture.h"

#include "BasicUnit.h"

#include "InputSystem.h"

#include "GameTime.h"
#include "Timer.h"

#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_opengl.h>

class Game :
	public GameObject
{
private:

	GraphicsSystem
		*_pGraphicsSystem;

	InputSystem 
		*_pInputSystem;

	GameTime
		*_pGameTime;

	bool
		_running;

	float 
		_targetFPS,
		_currentFPS;

public:

	//TODO: Remove
	static bool endNow;
	Animation *anim;
	Sprite *frame1, *frame2, *frame3, *frame4, *frame5;
	Texture *sheet;
	BasicUnit *unit;

	Game( void );
	virtual ~Game( void );

	virtual string toString( void ) const;

	void init( void );
	void term( void );

	void start( void );

	void update( void );
	void draw( void );

};

#endif
