#ifndef OBJECT_H_
#define OBJECT_H_
#include <SDL.h>
struct gameObject {
    float x, y;
    const char *path;
    SDL_Rect rect;
};

struct gameObject_Manager {
    struct Node_GAMEOBJ {
        struct gameObject *current;
        int alloc;
        struct Node *next;
    } head;
};

struct gameObject *create_gameObject(float x, float y, const char *path, int p_x, int p_y, int w,
                                     int h);
#endif
