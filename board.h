#ifndef board
#define board
#include "square.h"

class Board{
	private:
		Square* squareArray;
		Piece* whPieces;
		Piece* blPieces;
		
	public:
		const int xSize;
		const int ySize;
		void initPieces();
		Board(const int, const int);
		Square* getSquare(int, int);
};

#endif
