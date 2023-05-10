#include "Tank.hpp"
#include "Tank-turret.hpp"
#include "Tank-body.hpp"

Tank::Tank(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov){
    mover=mov;
    SDL_Rect mov_tt={mov.x+60,mov.y+4,110,60};
    tt= new Tank_turret(rend, ast, mov_tt);
    tb= new Tank_body(rend, ast, mov);
}

void Tank::draw(){
    tb->draw();
    tt->draw();
}

int Tank::mov_x(){
    return mover.x;
}

int Tank::mov_y(){
    return mover.y;
}

void Tank::upon_fire(){
    tt->left();
}

Tank::~Tank(){
    delete tb;
    tb=nullptr;
    delete tt;
    tt=nullptr;
    
}