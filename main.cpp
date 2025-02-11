#include "raylib.h"

void UnloadMusicStream(const Music & music);

void UnloadMusicStream(const Music & music, const Music & jump_effect, const Music & collision_sound);

int main() {
    InitWindow(800, 600, "Soundeffects Everywhere");
    InitAudioDevice();

    Music BGMusic = LoadMusicStream("WilyCastleThemeMM2.mp4");
    PlayMusicStream(BGMusic);

    while (!WindowShouldClose()) {
        UpdateMusicStream(BGMusic);

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Background Music plays!", 200, 300, 20, DARKGRAY);
        EndDrawing();
    }

        Music jumpEffect = LoadMusicStream("Super Mario - Jump (Sound Effect).mp3");
        PlayMusicStream(jumpEffect);

    if (IsKeyPressed(KEY_SPACE)) {
        PlayMusicStream(jumpEffect);

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Press the spacebar!", 200, 300, 20, DARKGRAY);
        EndDrawing();
    }

        Music collisionSound = LoadMusicStream("HomeRunBat.mp4");
        PlayMusicStream(collisionSound);

         if (IsKeyPressed(KEY_C)) {
            PlayMusicStream(collisionSound);

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Press the C Key!", 200, 300, 20, DARKGRAY);
            EndDrawing();
        }

    UnloadMusicStream(BGMusic, jumpEffect, collisionSound);
    CloseAudioDevice();
    CloseWindow();
    return 0;
}

