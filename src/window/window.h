#ifndef WINDOW_H_
#define WINDOW_H_
#include <SDL.h>
struct game_window {
    SDL_Window *win;
    SDL_Renderer *rend;
};

struct game_window *createGameWindow(int width, int height, const char *title);
#endif
