#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include<iostream>
#include<string_view>
#include "person.h"

class Player:public Person {
    
  friend std::ostream& operator<<(std::ostream& out, const Player& player);
    
  public:
    Player()=default;
    //Player(std::string_view game);
    Player(std::string_view game,std::string_view fname="",std::string_view lname="");
    ~Player();
    
    private: 
        std::string game="Mario Kart";
};

#endif
