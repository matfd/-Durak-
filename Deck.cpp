#include "Card.hpp"
#include "Deck.hpp"
#include <ctime>
#include <iostream>
using namespace std;
//Ęîíńňđóęňîđ ęîëîäű ďî óěîë÷ŕíčţ
Deck::Deck(sf::Texture& texture) {
	for (int i = 0; i < CARD_MAXSUIT; i++) {
		for (int j = 0; j < CARD_MAXRANK; j++) {
			Card* temp = new Card(Card::Card(static_cast<rankCard>(j), static_cast<suitCard>(i),texture));
			c_deck.push_back(temp);
		}
	}
}
//Ěĺí˙ĺě äâĺ ęŕđňű ěĺńňŕěč
void Deck::swap(Card* cr1, Card*cr2) {
	Card* temp;
	temp = cr1;
	cr1 = cr2;
	cr2 = temp;
}

//Ňóńóĺě ęîëîäó ęŕđň
void Deck::shuffle() {
	const int numShuff = 7;
	for (int i = 0; i < numShuff; i++) {
		for (int j = 0; j < d_size; j++) {

			int randCard = rand() % d_size;
			swap(c_deck[j], c_deck[randCard]);
		}
	}
}
//Áĺđĺě îäíó ęŕđňó ńâĺđőó čç ęîëîäű
Card Deck::pop() {
	int lastcard = c_deck.size() - 1;
	Card* temp = c_deck[lastcard];
	c_deck.pop_back();
	return *temp;
}
//Ěĺňîä äë˙ âîçâđŕňŕ ęîë-âî ęŕđň ęîëîäű
int Deck::get_size() {
	int size = c_deck.size();
	return size;

}
//Ěĺňîä äë˙ îďđĺäĺëĺíč˙ ęîçűđ˙
Card Deck::defin_trump() {
	int randCard = rand() % d_size;
	this->swap(c_deck[randCard], c_deck[0]);
	return *(c_deck[0]);
}

void Deck::print(sf::RenderWindow&window) {
	float x = 10;
	float y = 10;
	std::cout << c_deck.size();
	for (int i = 0; i < c_deck.size(); i++) {
		c_deck[i]->drawCard(window);
		c_deck[i]->set_PositionCard(x*i, y);
	}
}