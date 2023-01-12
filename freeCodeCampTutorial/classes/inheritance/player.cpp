#include "player.h"

std::ostream& operator<<(std::ostream& out, const Player& player){
     out<<"Player : [ game : "<<player.game<<" names : "<<player.getFname()<<" "<<player.getLname()<<"]";   
    //out<<"Player : [ game : "<<player.game<<" names : "<<player.fname()<<" "<<player.lname()<<"]"; // This doesn't work because fname is private in base class
    return out;
}

Player::Player(std::string_view game){
    this->game=game;
}
Player::~Player(){};
