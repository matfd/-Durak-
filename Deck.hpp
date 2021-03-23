#pragma once
#include <vector>
#include "Card.hpp"

class Deck {
private:
	const int d_size = 52;
	std::vector<Card*>c_deck;
	void swap(Card*, Card*);//Ěĺňîä äë˙ shuffle(îáěĺí ěĺńňŕěč)
public:
	//Ęîíńňđóęňîđ ďî óěîë÷ŕíčţ
	Deck(sf::Texture& texture);

	Card defin_trump();//Îďđĺäĺë˙ĺě ęîçűđü č âîçâđîůŕĺě ęîçűđü
	void shuffle(); //Ěĺňîä äë˙ ďĺđĺňóńîâęč ęîëîäű
	Card pop();//Ěĺňîä äë˙ ńí˙ňč˙ ęŕđňű ń íŕ÷ŕëŕ ęîëîäű
	int get_size();//Âîçâđîřŕĺě đŕçěĺđ ęîëîäű
	void print(sf::RenderWindow&);
};
