// Inherit from Unit class
#include "Unit.hpp"
#pragma once
class Tank_body: public Unit{
    SDL_Rect src, mover;
    public:
    Tank_body(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    ~Tank_body();
};