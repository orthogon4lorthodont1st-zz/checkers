#ifndef square
#define square
#include "piece.h"
class Square{
	private:
		bool state;
		Piece* myPiece;
	
	public:
		Square();
		bool getState();
		void setState(bool);
		void setPiece(Piece*);
		Piece* getPiece();
};

#endif
