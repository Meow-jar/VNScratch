#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>
class Engine
{
	public:
		Engine();
		~Engine(){std::cout<<"free Engine"<<std::endl;};
		void run();

	private:
		void startWindow();

	private:
		sf::Texture texture;
};
