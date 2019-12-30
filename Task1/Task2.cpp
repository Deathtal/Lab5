#include <iostream>
#include <vector>
#include <cstdlib>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "SDL.h"

void render(const std::vector<Shape*> shapes, SDL_Renderer* renderer) {
	SDL_SetRenderDrawColor(renderer, 23, 23, 25, 255);
	SDL_RenderClear(renderer);

	for (auto i : shapes) {
		i->render(renderer);
	}

	SDL_RenderPresent(renderer);
}

int main(int argc, char* args[]) {
	bool quit = 0;
	std::vector<Shape*> shapes;
	SDL_Event event;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("Task2.3", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 23, 23, 25, 255);

	while (!quit) {
		SDL_WaitEvent(&event);

		switch (event.type) {
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
				case SDLK_c: {
					Circle* circle = new Circle(Point2D(rand() % 475 - 25, rand() % 250 - 35), 0x6ed117, 255, rand() % 150 + 35);
					shapes.push_back(circle);
					break;
				}
				case SDLK_r: {
					Rectangle* rectangle = new Rectangle(Point2D(rand() % 475 - 25, rand() % 250 - 35), 0xc991e3, 255, rand() % 150 + 35, rand() % 150 + 35);
					shapes.push_back(rectangle);
					break;
				}
				case SDLK_t: {
					Triangle* triangle = new Triangle(Point2D(rand() % 475 - 25, rand() % 250 - 35), 0xff3838, 255, rand() % 150 + 35, rand() % 150 + 35);
					shapes.push_back(triangle);
					break;
				}
				case SDLK_q:
					quit = 1;
					break;
			}
			break;
		case SDL_QUIT:
			quit = 1;
			break;
		}

		render(shapes, renderer);
	}

	for (auto i : shapes) {
		delete i;
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}