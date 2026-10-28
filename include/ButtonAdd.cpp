#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>
#include <vector>
#include <iostream>
std::vector<std::string> ListName;
std::vector<sf::Vector2f> ListSize;
std::vector<sf::Vector2f> ListPosition;
int SetButtonNumber = 0;
void ButtonDetect(sf::RenderWindow& window)
{

	sf::Vector2i PositionMouse = sf::Mouse::getPosition(window);
	for(int i = 0; i < ListName.size(); i++)
	{
		int PosX1 = ListPosition[i].x;
		int PosX2 = ListPosition[i].x + ListSize[i].x;
		int PosY1 = ListPosition[i].y;
		int PosY2 = ListPosition[i].y + ListSize[i].y;
		if (PositionMouse.x >= PosX1 && PositionMouse.x <= PosX2 && PositionMouse.y >= PosY1 && PositionMouse.y <= PosY2) 
		{
			std::cout<<"yes"<<std::endl;
		}
	}
}

void ButtonAdd(sf::Sprite& Button, std::string NameButton)
{
	//std::cout<<"start"<<std::endl;

	ListName.push_back(NameButton);
	ListSize.push_back(Button.getLocalBounds().size);
	ListPosition.push_back(Button.getPosition());

	/*
        for(const auto& row : ListPosition)
        {
                std::cout<<"position: "<<row.x<<" "<<row.y<<" "<<std::endl;
        }

	for(const auto& row : ListSize)
	{
		std::cout<<"size: "<<row.x<<" "<<row.y<<" "<<std::endl;
	}

	for(const auto& row : ListName)
	{
		std::cout<<"name: "<<row<<std::endl;
	}

	*/
	std::cout<<ListName[SetButtonNumber]<<": position x = "<<ListPosition[SetButtonNumber].x<<" y = "<<ListPosition[SetButtonNumber].y<<std::endl;
        std::cout<<ListName[SetButtonNumber]<<": size x = "<<ListSize[SetButtonNumber].x<<" y = "<<ListSize[SetButtonNumber].y<<std::endl;
	std::cout<<std::endl;
	//std::cout<<ListPosition.size();

	SetButtonNumber++;
	
}
