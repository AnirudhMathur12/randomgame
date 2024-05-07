#include "SDL_error.h"
#include "SDL_events.h"
#include "SDL_render.h"
#include "SDL_video.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>

int running = 1;
void INIT();

int main() {
    INIT();
    struct game_window *main_gamewindow = createGameWindow(854, 480, "Random Game");
    SDL_Event e;
    while (running) {
        while (SDL_PollEvent(&e)) {
            switch (e.type) {
            case SDL_QUIT:
                running = 0;
                break;
            }
        }
    }
    return 0;
}

void INIT() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("Failed to init SDL. Error: %s", SDL_GetError());
    }

    int flags = IMG_INIT_PNG;
    if (!(IMG_Init(flags) & flags)) {
        printf("Failed to init SDL_image. Error: %s", SDL_GetError());
    }
}
