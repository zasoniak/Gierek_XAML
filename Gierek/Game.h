#pragma once
#include "Market.h"
#include "Player.h"
#include "AI.h"
class Game
{
private:
	int date;
	int gameID;
	int gameDifficulty;
	int gameLenght;
	int numberOfMines;
	Market *market;
	Player *player;
	std::vector<AI*> mines;
public:
	Game();
	Game(int difficulty, int lenght);
	void PlayTurn();
	void EndGame();

};

