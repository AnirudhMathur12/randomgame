#include "window.h"

struct game_window *createGameWindow(int width, int height, const char *title) {
    struct game_window *temp = malloc(sizeof(struct game_window));
    temp->win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width,
                                 height, SDL_WINDOW_RESIZABLE);
    temp->rend = SDL_CreateRenderer(temp->win, -1, SDL_RENDERER_ACCELERATED);
    return temp;
}
