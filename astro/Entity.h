#pragma once
#include "Animation.h"
#include "Variables.h"
#include <cmath>

class Entity
{
public:
   float x,y,dx,dy,R,angle;
   bool life;
   std::string name;
   Animation anim;

   Entity();

   void settings(Animation &a,int X,int Y,float Angle,int radius);

   virtual void update(){};

   void draw(sf::RenderWindow &app);

   virtual ~Entity(){};
};