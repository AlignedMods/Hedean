#include "application.hpp"
#include "game.hpp"
#include "raylib.h"

#include <iostream>

Application::Application(const ApplicationSpecification& specification) : m_ApplicationSpecification(specification) {
    InitWindow(specification.windowSize.x, specification.windowSize.y, specification.name.c_str());

    SetTargetFPS(60);
}

Application::~Application() {
    std::cout << "see you later, aligator";
}

void Application::Run() {
    m_Game = Game();

    m_Game.Run();
}