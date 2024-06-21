#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// Kích thước cửa sổ
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main() {
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    bool quit = false;
    SDL_Event event;

    // Khởi tạo SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    // Tạo cửa sổ
    window = SDL_CreateWindow("Heart Animation", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                              SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    // Tạo renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    // Vòng lặp chính
    while (!quit) {
        // Xử lý các sự kiện
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        // Xóa màn hình
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

        // Vẽ hình trái tim
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_Point points[] = {
            { SCREEN_WIDTH / 2, SCREEN_HEIGHT / 3 },
            { SCREEN_WIDTH / 3, SCREEN_HEIGHT / 2 },
            { SCREEN_WIDTH / 2, 2 * SCREEN_HEIGHT / 3 },
            { 2 * SCREEN_WIDTH / 3, SCREEN_HEIGHT / 2 }
        };
        SDL_RenderDrawLines(renderer, points, 5);

        // Cập nhật màn hình
        SDL_RenderPresent(renderer);
    }

    // Giải phóng bộ nhớ
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
