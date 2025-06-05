#include "game.hpp"
#include "raylib.h"

Game::Game() {

}

Game::~Game() {

}

void Game::Run() {
    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawRectangle(100, 200, 300, 50, RED);

        EndDrawing();
    }
}