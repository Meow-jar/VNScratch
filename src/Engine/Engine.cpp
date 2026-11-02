#include <SFML/Graphics.hpp>
#include "Draw/Draw.hpp"
#include "Engine/Engine.hpp"

Engine::Engine()
{
}

void Engine::run()
{
	startWindow();
}

void Engine::startWindow()
{
	Draw draw;
	draw.run();
}
