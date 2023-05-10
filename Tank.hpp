// Make composition of TankBody and TankTurret objects in Tank class
#include<SDL.h>
#include "Tank-body.hpp"
#include "Tank-turret.hpp"
#pragma once
class Tank{
    SDL_Rect src, mover;
    SDL_Renderer* gRenderer;
    SDL_Texture* assets;
    Tank_turret* tt;
    Tank_body* tb;

    public:
    Tank(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void draw();
    int mov_x();
    int mov_y();
    void upon_fire();
    ~Tank();
};