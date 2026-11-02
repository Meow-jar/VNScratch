#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>
class Draw
{
	public:
		Draw();
		~Draw(){std::cout<<"free Draw"<<std::endl;};
		void run();

	private:
		void processEvents();
		void update();
		void render();

	private:
		sf::Texture texture;
		sf::RenderWindow window;
};
