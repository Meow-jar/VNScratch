#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <string>
#include <iostream>
#include "AssetManager/assetManager.hpp"

sf::Texture assetManager::loadTexture(std::string nameFile, std::string nameTexture)
{
	std::cout<<"start load texture"<<std::endl;
	sf::Texture texture(nameFile);
	Texture[nameTexture] = texture;
	std::cout<<"exit load texture"<<std::endl;
	return Texture[nameTexture]; 
}
