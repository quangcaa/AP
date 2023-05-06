#include "Headers/Check.h"
#include "Headers/Computer.h"
#include "Headers/Core.h"
#include "Headers/Draw.h"
#include "Headers/Global.h"
#include "Headers/Mode.h"
#include "Headers/Play.h"
#include "Headers/Player.h"
#include "Headers/Result.h"
#include "Headers/Run.h"
#include "headers/SideBar.h"
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>

using namespace std;

SDL_Window *window = nullptr;
SDL_Renderer *renderer = nullptr;
TTF_Font *font = nullptr;

SDL_Texture *txX = nullptr;
SDL_Texture *txO = nullptr;
SDL_Texture *txHB = nullptr;
SDL_Texture *txSB = nullptr;
SDL_Texture *txRSB = nullptr;

Player board[15][15];

int x_score = 0;
int o_score = 0;

bool running = true;
bool modeSelected;
bool clicked_home;

int main(int argc, char *argv[])
{
    initSDL();

    loadIcon();

    load();

    run();

    closeSDL();

    return 0;
}