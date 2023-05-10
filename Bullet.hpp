#include "Unit.hpp"
#pragma once
class Bullet: public Unit{
    SDL_Rect src, mover;
    bool check=true;
    bool frame_check=true;
    int frame=0;
    // SDL_Rect src_bl, mover_bl;
    public:
    Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    bool out_screen();
    void draw();
    void blast();
};