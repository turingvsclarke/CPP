#include "player.h"

std::ostream& operator<<(std::ostream& out, const Player& player){
    out<<"Player : [ game : "<<player.game<<" names : "<<player.getFname()<<" "<<player.getLname()<<"]";   
    //out<<"Player : [ game : "<<player.game<<" names : "<<player.fname<<" "<<player.lname<<"]"; // This only works if fname/lname are protected/public
    return out;
}

Player::Player(std::string_view game,std::string_view fname,std::string_view lname){
    this->game=game;
    this->setFname(fname);
    this->setLname(lname);
    this->fname=fname;  
    this->lname=lname;
    // this only works if fname is protected/public
}
Player::~Player(){};
