#pragma once

#include <sdl.h>
#include <memory>

class Game {
public:
	Game();

	bool initialize();
	void run_loop();
	void shutdown();

private:
	void process_input();
	void update_game();
	void generate_output();

private:
	std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window;
	std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> renderer;

	bool is_running;

};