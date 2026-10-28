#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
class Engine
{
	public:
		Engine();
		void run();

	private:
		void importTexture();

	private:
		sf::Texture texture;
};
