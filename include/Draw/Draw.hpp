#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
class Draw
{
	public:
		Draw();
		void run();

	private:
		void processEvents();
		void update();
		void render();

	private:
		sf::Texture texture;
		sf::RenderWindow window;
};
