#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/Vector2.hpp>
#include <vector>
#include <iostream>
#pragma once
extern std::vector<std::string> ListName;
extern std::vector<sf::Vector2f> ListSize; 
extern std::vector<sf::Vector2f> ListPosition;
extern int SetButtonNumber;
void ButtonDetect(sf::RenderWindow& window);
void ButtonAdd(sf::Sprite& Button, std::string);
