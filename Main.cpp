#include <SFML/Graphics.hpp>
#include <cassert>
#include <iostream>
#include <map>


#include "RessourcesHolder.hpp"
using namespace std;

namespace Textures
{
	enum struct ID
	{
		LandScape,
		Airplane,
		Missile
	};

};
int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Ressources management");
	ResourceHolder<sf::Texture, Textures::ID> textures;
	textures.load(Textures::ID::Airplane, "Eagle.png");
	textures.load(Textures::ID::LandScape, "Desert.png");
	sf::Sprite plane(textures.get(Textures::ID::Airplane));
	sf::Sprite desert(textures.get(Textures::ID::LandScape));
	desert.setPosition(sf::Vector2f(300, 300));
	while (window.isOpen())

	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear(sf::Color::Red);
		window.draw(plane);

		window.draw(desert);
		window.display();
	}
}