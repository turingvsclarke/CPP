#include <iostream>
#include "player.h"

int main()
{
    Person human=Person("John","Cena");
    std::cout<<human<<std::endl;
    Player p1=Player("Fortnite");
    p1.setFname("Tom");
    std::cout<<p1;
}
