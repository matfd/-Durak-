#include <SFML/Graphics.hpp>
#include "Player.hpp"
#include "Deck.hpp"
#include "Card.hpp"

using namespace sf;

int main()
{
	sf::Image img; img.loadFromFile("Image/Cards.jpg");
	sf::Texture texture; texture.loadFromImage(img);

	Deck deck(texture);
	deck.shuffle();
	Player pl;
	pl.take_card(deck);
	Card cr;

	RenderWindow window(VideoMode(1240, 800), "DURAK");

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		pl.draw_pl(window);
		deck.print(window);
		window.display();
	}
	return 0;
}