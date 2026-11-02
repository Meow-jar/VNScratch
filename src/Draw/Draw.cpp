#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Window/Event.hpp>
#include "Draw/Draw.hpp"
#include "AssetManager/assetManager.hpp"
#include "Ui/MainMenu/mainMenu.hpp"

Draw::Draw():
	window(sf::VideoMode({1920, 1080}), "VNScratch"){}

void Draw::run()
{
	mainMenu m;
	sf::Sprite sprite = m.Menu();
	while (window.isOpen())
	{
           
		while (const std::optional event = window.pollEvent()) 
		{
			if(const auto* mouseButtonPressed = event->getIf<sf::Event::MouseButtonPressed>())
			{
				if(mouseButtonPressed->button == sf::Mouse::Button::Left)
				{
					std::cout<<"Mouse x = "<<mouseButtonPressed->position.x<<std::endl;
					std::cout<<"Mouse y = "<<mouseButtonPressed->position.y<<std::endl;
				}
			}
			if (event->is<sf::Event::Closed>())	
				window.close();
	
		}	
		window.clear();
		window.draw(sprite);
		window.display();
	}
}
