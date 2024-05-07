#include "object.h"
#include "SDL_rect.h"

struct gameObject *create_gameObject(float x, float y, const char *path, int p_x, int p_y, int w,
                                     int h) {
    struct gameObject *temp = malloc(sizeof(struct gameObject));
    temp->x = x;
    temp->y = y;
    temp->path = path;
    temp->rect = (SDL_Rect){p_x, p_y, w, h};
    return temp;
}
