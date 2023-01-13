#include <iostream>
#include "player.h"

int main()
{
    Person human=Person("John","Cena");
    std::cout<<human<<std::endl;
    Player p1=Player("Fortnite","Dan","Williams");
    p1.setFname("Tom");
    
    // p1.fname="John"; // This only works if fname is public, not private/protected
    std::cout<<p1;
}
