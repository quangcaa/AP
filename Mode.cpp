#include "Headers/Mode.h"

void modegame(string &mode)
{
    SDL_Surface* image = IMG_Load("Image/Mode.png") ; //load the mode selection image
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer , image) ;
    SDL_RenderCopy(renderer , texture , NULL , NULL) ;
    SDL_RenderPresent(renderer) ;
    
    SDL_FreeSurface(image) ;
    SDL_DestroyTexture(texture) ;

    bool clicked = false ; //wait for the click
    SDL_Event event ;
    while (!clicked)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type==SDL_QUIT || event.key.keysym.scancode==SDL_SCANCODE_ESCAPE)
            {
                running = false ;
                clicked = true ;
                break ;
            }
            else if(event.type==SDL_MOUSEBUTTONDOWN)
            {
                int x , y ;
                SDL_GetMouseState(&x , &y) ;
                if(x >= 161 && x <= 500 && y >= 372 && y <= 444) //mode: "vs computer" location
                {
                    clicked = true ;
                    mode = "vs computer" ;
                }
                else if(x >= 190 && x <= 466 && y >= 471 && y <= 536) //mode: "vs player" location
                {
                    clicked = true ;
                    mode = "vs player" ;
                }
            }
        }
    }
}