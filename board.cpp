#include "square.h"
#include "board.h"
#include "piece.h"
#include<iostream>
Board::Board(const int xSize, const int ySize) : xSize(xSize), ySize(ySize){
	squareArray = new Square[xSize*ySize];
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			squareArray[i+j*xSize] = Square();
		}
	}
	initPieces();	
}
Square* Board::getSquare(int x, int y){
	return &squareArray[x + y*ySize]; 
}
void Board::initPieces(){
	whPieces = new Piece[12];
	blPieces = new Piece[12];
	int k = 0;
	int whiteArr[24] = {0, 1, 0, 3, 0, 5, 0, 7, 1, 0, 1, 2, 1, 4, 1, 7, 2, 1, 2, 3, 2, 5, 2, 7};
	int blackArr[24] = {5, 0, 5, 2, 5, 4, 5, 6, 6, 1, 6, 3, 6, 5, 6, 7, 7, 0, 7, 2, 7, 4, 7, 6};
	for(int i=0; i<23; i+=2){
		whPieces[k] = Piece();	whPieces[k].setType(0);
		blPieces[k] = Piece();	blPieces[k].setType(1);
		squareArray[whiteArr[i]+whiteArr[i+1]*xSize].setPiece(&whPieces[k]);
		squareArray[whiteArr[i]+whiteArr[i+1]*xSize].setState(true);
		squareArray[blackArr[i]+blackArr[i+1]*xSize].setPiece(&blPieces[k]);
		squareArray[blackArr[i]+blackArr[i+1]*xSize].setState(true);
		k++;
	}
}



