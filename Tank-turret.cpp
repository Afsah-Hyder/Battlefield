#include "Tank-turret.hpp"  
#include <iostream>
    Tank_turret::Tank_turret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        
        src = {605, 10, 505, 150};
    }

    void Tank_turret::draw(){
        Unit::draw(src, mover);
        if (mover.x<initial_x){
            mover.x+=15;
        }
    }
    void Tank_turret::left(){
        initial_x=mover.x;
        mover.x-=15;
    }

    Tank_turret::~Tank_turret(){}