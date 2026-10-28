#include <SFML/Graphics.hpp>
#include "Draw/Draw.hpp"
#include "Engine/Engine.hpp"

Engine::Engine()
{
}

void Engine::run()
{
	importTexture();
}

void Engine::importTexture()
{
	Draw draw;
	draw.run();
}
