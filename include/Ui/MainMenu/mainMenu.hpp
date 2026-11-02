#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>
class mainMenu
{
	public:
		mainMenu();
		~mainMenu(){std::cout<<"free mainMenu"<<std::endl;};
		void run();

	public:
		sf::Sprite Menu();
	private:
		sf::Texture texture;
};
