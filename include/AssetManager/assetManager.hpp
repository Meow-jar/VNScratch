#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <string>
#include <unordered_map>

class assetManager
{
	public:
		assetManager(){};
		~assetManager(){};
		sf::Texture loadTexture(std::string nameFile, std::string nameTexture);

	private:
		std::unordered_map<std::string, sf::Texture> Texture;
};
