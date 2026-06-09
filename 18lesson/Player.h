#ifndef PLAYER_H;
#define PLAYER_H;

#include string;


class Player{
private:
    string name;
    int hp;

public:
    Player(string name, int hp);
    
    void showInfo();
    void takeDamage();
}
#endif;