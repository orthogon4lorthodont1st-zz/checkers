#include "square.h"
#include<iostream>
Square::Square(){
	state = false;
}
void Square::setState(bool newState){
	state = newState;
}
bool Square::getState(){
	return state;
}
void Square::setPiece(Piece* newPiece){
	myPiece = newPiece;
}
Piece* Square::getPiece(){
	return myPiece;
}
