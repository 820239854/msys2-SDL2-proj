#include <iostream>
#include <SDL2/SDL.h>

const int WIDTH = 800;
const int HEIGHT = 600;

int main(int argc, char *argv[])
{
    
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *wnd = SDL_CreateWindow("HELLO", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if (NULL == wnd)
    {
        std::cout << "Could not create Window" << SDL_GetError() << std::endl;
    }

    SDL_Event wndEvent;
    while (true)
    {
        if (SDL_PollEvent(&wndEvent))
        {
            if (SDL_QUIT == wndEvent.type)
            {
                break;
            }
        }
    }
    SDL_DestroyWindow(wnd);
    SDL_Quit();
    return 0;
}