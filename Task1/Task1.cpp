#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <vector>
#include "SDL.h"

void testRender(const std::vector<Shape*> shapes, SDL_Renderer* renderer) {
	for (auto i : shapes) {
		i->render(renderer);
	}
}
/*
int main(int argc, char* args[]) {
	Point2D pos(5, 9);
	Rectangle a(pos, 0xFF6550, 120, 320, 40);
	pos.set(300, 200);
	Triangle b(pos, 0x21e49f, 255, 200, 100);
	pos.set(50, 50);
	Circle c(pos, 0x5794ef, 0, 150);

	std::vector<Shape*> shapes;
	shapes.push_back(&a);
	shapes.push_back(&b);
	shapes.push_back(&c);

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("Task2.2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 23, 23, 25, 255);

	SDL_RenderClear(renderer);

	testRender(shapes, renderer);

	SDL_RenderPresent(renderer);
	SDL_Delay(5000);

	return 0;
}
*/