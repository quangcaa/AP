#pragma once 
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "Core.h"
#include "Run.h"
 
extern SDL_Renderer *renderer ;
extern bool running ;
extern int x_score , o_score ;
extern bool clicked_home ;

void displayRes(int p) ;
