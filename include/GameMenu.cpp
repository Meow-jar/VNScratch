#include "include/GameMenu.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Exception.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Mouse.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <iostream>
#include <vector>
#include "include/ButtonAdd.hpp"
void GameMenu(sf::RenderWindow& window)
{

	std::vector<sf::Sprite> Sprite;

	const sf::Texture buttonStart("assets/image/newgame.png");
	sf::Sprite newgame(buttonStart);
	newgame.setPosition(sf::Vector2f(1000,75));
	Sprite.push_back(newgame);
	ButtonAdd(newgame, "button start");

	const sf::Texture buttonContinue("assets/image/сontinue.png");
	sf::Sprite continueb(buttonContinue);
	continueb.setPosition(sf::Vector2f(1000,230));
	Sprite.push_back(continueb);
	ButtonAdd(continueb, "button continue");

	const sf::Texture buttonSetting("assets/image/setting.png");
	sf::Sprite setting(buttonSetting);
	setting.setPosition(sf::Vector2f(1000, 385));
	Sprite.push_back(setting);
	ButtonAdd(setting, "button setting");

	const sf::Texture buttonExit("assets/image/exit.png");
	sf::Sprite exit(buttonExit);
	exit.setPosition(sf::Vector2f(1000,540));
	Sprite.push_back(exit);
	ButtonAdd(exit, "button exit");
}
