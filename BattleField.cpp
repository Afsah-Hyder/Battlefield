#include "BattleField.hpp"
#include<iostream>

void BattleField::drawObjects(){
    // call draw functions of all the objects here
    for (Tank* &t:tanks)
        t->draw();
    
    for(Bullet* &b: bullets)
        if(b->out_screen()==false){
            delete b;
            b=nullptr;
            bullets.remove(b);
            cout<<"Deleted the Blasted Bullet !!"<<endl;
        }
        else{
            b->draw();
        }
        
}

void BattleField::createObject(int x, int y){
     // let's make a rectangel on x, y of the size 30, 10
    SDL_Rect mov_t = {x, y, 120, 65}; 

    // bullets.push_back(new Bullet(gRenderer, assets, mov_b));
    tanks.push_back(new Tank(gRenderer, assets, mov_t));
    
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

BattleField::BattleField(SDL_Renderer *renderer, SDL_Texture *asst):gRenderer(renderer), assets(asst){

}

void BattleField::fire(){
    cout<<"F key is pressed"<<endl;

    int xb=0; int yb=0;
    for (Tank* t:tanks){
        xb=(t->mov_x())+200;      //a shift is added to the coordinates of the tank (created on mouse click), so that the bullet is released from the front of the turret
        yb=(t->mov_y())+30;
        SDL_Rect mov_b = {xb, yb, 25, 8};
        bullets.push_back(new Bullet(gRenderer, assets, mov_b));
        t->upon_fire();
    }
}

BattleField::~BattleField(){
    for (Tank* t:tanks){
        delete t;
        t=nullptr;
    }
    tanks.clear();
    bullets.clear();
    cout<<"Everything deleted !";
}
