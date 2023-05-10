// Inherit from Unit class
#include "Unit.hpp"
#pragma once
class Tank_turret: public Unit{
    SDL_Rect src, mover;
    int initial_x=mover.x;
    public:
    Tank_turret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    void left();
    ~Tank_turret();
};