#pragma once 
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>
#include "Global.h"

extern SDL_Window *window ;
extern SDL_Renderer *renderer ;
extern TTF_Font *font ;
extern Player board[][15] ;
extern SDL_Texture *txX , *txO , *txHB , *txSB , *txRSB ;

void initSDL() ;
void load() ;
void resetBoard() ;
void loadIcon() ;
void closeSDL() ;