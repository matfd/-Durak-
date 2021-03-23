#include "Game.hpp"

Game::Game(sf::Texture& texture):deck(texture) {
	deck.defin_trump();
}

void Game::play(sf::RenderWindow& window) {
	std::vector<Card>table;

}