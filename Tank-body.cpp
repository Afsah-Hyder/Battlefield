#include "Tank-body.hpp"    

    Tank_body::Tank_body(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        src = {0,15, 425, 275};
    }

    void Tank_body::draw(){
        Unit::draw(src, mover);
        // mover.x+=2;
    }

    Tank_body::~Tank_body(){}