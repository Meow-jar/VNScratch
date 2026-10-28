#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Window/Event.hpp>
#include <optional>
#include "Draw/Draw.hpp"
#include "AssetManager/assetManager.hpp"

Draw::Draw():
	window(sf::VideoMode({1280, 700}), "VNScratch"){}

void Draw::run()
{
	assetManager am;
	sf::Texture texture = am.loadTexture("assets/image/nekopara.jpg", "button");
	sf::Sprite sprite(texture);
	while (window.isOpen())
	{
           
		while (const std::optional event = window.pollEvent()) 
		{	
			if (event->is<sf::Event::Closed>())	
				window.close();
	
		}	
		window.clear(sf::Color::Blue);
		window.draw(sprite);
		window.display();
	}
}
/*
void Draw::processEvents()
{
//	sf::Event event;

	while (const std::optional event = window.pollEvent())
	{
		if (event->is<sf::Event::Closed>())
			window.close();
	}
}

void Draw::render()
{
	window.clear();
	window.display();
}
*/
