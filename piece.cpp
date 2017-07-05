#include "piece.h"

Piece::Piece(){
	type = 8;	// initialize to 0 - white
}
int Piece::getType(){
	return type;
}
void Piece::setType(int newType){
	type = newType;
}
