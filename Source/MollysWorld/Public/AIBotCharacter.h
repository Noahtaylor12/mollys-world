#pragma once

#include <string>

class AIBotCharacter {
public:
    AIBotCharacter();
    ~AIBotCharacter();

    void Move(float x, float y);
    void Speak(const std::string &message);
};
