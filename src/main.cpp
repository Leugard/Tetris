#include <raylib.h>
#include "game.h"
#include "colors.h"
#include <iostream>

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() 
{
<<<<<<< HEAD
    InitWindow(500, 620, "Tetris");
    SetTargetFPS(60);

    Font font = LoadFontEx("Font/font.ttf", 64, 0, 0);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Score", {340, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {350, 175}, 38, 2, WHITE);
        if (game.GameOver)
        {
            DrawTextEx(font, "GAME OVER", {325, 500}, 24, 2, WHITE);
        }
        DrawRectangleRounded({320, 75, 170, 60}, 0.3, 6, lightBlue);

        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);

        DrawTextEx(font, scoreText, {320 + (170 - textSize.x) / 2, 85}, 38, 2, WHITE);
        DrawRectangleRounded({320, 240, 170, 180}, 0.3, 6, lightBlue);
        game.Draw();
=======
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    Ball ball;
    
    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        ball.Update();
        
        BeginDrawing();
            ClearBackground(darkGreen);
            ball.Draw();
>>>>>>> 3894bdb928d3f04212ce3bda45a5ba076be40bb6
        EndDrawing();
    }
    
    CloseWindow();
}