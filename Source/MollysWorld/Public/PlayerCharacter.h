#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

class PlayerCharacter {
public:
    PlayerCharacter();
    ~PlayerCharacter();

    void Move();
    void Jump();
    void Attack();
};

#endif // PLAYERCHARACTER_H