#include<iostream>
#include<vector>
#include "piece.h"
#include "board.h"
#include "square.h"

int main(){
	const int SIZE = 8;
	std::cout<<"Compiled"<<std::endl;
	Board gameBoard(SIZE, SIZE);
	int type;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			std::cout<<"i: "<<i<<", j: "<<j;;
			Square* mySquare = gameBoard.getSquare(i, j); 
			std::cout<<" state: "<<mySquare->getState();
			Piece* myPiece = mySquare->getPiece();
			if(mySquare->getState() == true){
				type = myPiece->getType();
			}else{
				type = 8;
			}
			std::cout<<" type: "<<type<<std::endl;
		}
	}
	return 0;
}
