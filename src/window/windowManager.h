#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <stdio.h>

int initialize_window(void);

// The `window` variable is only visible to windowManager.c
// so use this to be able to use it elsewhere
SDL_Window* getWindow();

void destroy_window();

#endif // WINDOW_MANAGER_H 