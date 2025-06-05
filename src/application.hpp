#pragma once

#include "game.hpp"
#include "raylib.h"

#include <string>

struct ApplicationSpecification {
    Vector2 windowSize;
    std::string name;
    Image windowIcon;
};

class Application {
public:
    Application(const ApplicationSpecification& specification);
    ~Application();

    void Run();

private:
    ApplicationSpecification m_ApplicationSpecification;

    Game m_Game;
};