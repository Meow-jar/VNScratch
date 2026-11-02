#include <SFML/Graphics/Sprite.hpp>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "AssetManager/assetManager.hpp"
#include "Ui/MainMenu/mainMenu.hpp"

mainMenu::mainMenu(){}

void mainMenu::run()
{
	Menu();
}
sf::Sprite mainMenu::Menu()
{
	std::cout<<"start mainMenu"<<std::endl;
	assetManager am;
	texture = am.loadTexture("assets/image/сontinue.png", "button");
	sf::Sprite sprite(texture);
	std::cout<<"stop mainMenu"<<std::endl;
	return sprite;
}
