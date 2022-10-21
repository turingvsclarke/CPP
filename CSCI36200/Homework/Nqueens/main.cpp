#include<iostream>
#include<stack>


void PrintBoard(std::stack<int> board);

bool checkConflict(std::stack<int> board);




// The Nqueens functions takes an integer n and returns a stack of n queens positions
std::stack<int> Nqueens(int n){
	// Initialize stack
	std::stack<int> board;

	// Push the first queen position onto the stack and filled=0
	int filled = 0;
	board.push(1);
	bool finished = false;

	// While there are still queens to place, repeat
	while(!finished){
		// If there's no conflict, the current row has been filled and we say the column of the next queen is the first one
		if(!checkConflict(board)){
			filled++;
			if(filled==n){
				finished = true;
			} // end if
			else{
				// Put a new queen in the first column of the next row
				board.push(1);
			}
		} // end if

		// if there is a conflict, check if there is room for the current queen to shift. If so, assign it the next column
		else if(board.top()<n){
			board.top()++;
		}
		// If there isn't room for the current queen to shift, keep popping the stack and filled=filled-1 
		// until we reach a row where the queen can be shifted. 
		// We shift that queen
		else{
			while(board.top()>=n){
				board.pop();
				filled--;
			} // end while
			// Shift the first queen that can be shifted one column to the right
			board.top()++;
		} // end else if
	} // end while

	return board;

} // end Nqueens



bool checkConflict(std::stack<int> board){
	// This function takes the queen whose position is on the top of the stack and checks if it is conflict with any of the queens before it
	
	// Create a stack to temporarily store the queens we've already checked. We also hold the top queen which we want to check against the others for conflicts 
	std::stack<int> checked;
	bool conflict = false;
	int col = board.top();
	int row = board.size();
	board.pop();	

	int curr_col, curr_row;

	// As long as there are still previous queens, and we haven't found a conflict, look for a conflict with the previous queen
	while((!board.empty())&&(!conflict)){
		// Get the position of another previous queen. Its column is the top of the stack, while its row is the size of the stack
		curr_col = board.top();
		curr_row = board.size();

		// Make sure the column of the queen we are checking isn't the same as any of the ones before
		if(curr_col==col){
			conflict = true;
		}
		// Make sure the diagonal of the queen we are checking isn't the same as any of the ones before
		else if((col-curr_col == row-curr_row)||(col-curr_col == curr_row-row)){
			conflict = true;
		}
		else{
			// We've checked this queen, so move on to the previous one
			checked.push(curr_col);
			board.pop();
		} 
	} // end while

	return conflict;
} // end checkConflict



int main(){
	int n;
	// Get the chessboard size from the user
	std::cout<<"Provide the number of queens to be placed(i.e. rows/columns of board), between 4 and 25: "<<std::endl;
	std::cin>>n;

	// Call a function that will return a stack with queens in a legal arrangement
	std::stack<int> board = Nqueens(n);
	
	// Print something that shows the user where the queens are
	PrintBoard(board);


} // end main


void PrintBoard(std::stack<int> board){
	int size = board.size();

	std::stack<int> positions;
	
	// Print off the position of each queen(the position of the ith queen is the ith row and the column is the ith element of the stack)
	for(int i=size;i>0;i--){
		std::cout<<"Queen "<<i<<"'s position: "<<"Row "<<i<<", Column "<<board.top()<<std::endl;
		positions.push(board.top());		
		board.pop();
	} // end for

	while(!positions.empty()){
		// Get the position of the next queen, starting with the first one(we'll print the board with the first row at the bottom)
		int n = positions.top();
		// Print a bunch of X's, then print Q to represent the queen
		int i = 1;

		for(;i<n;i++){
			std::cout<<"X";
		} 
		std::cout<<"Q";

		for(;i<size;i++){
			std::cout<<"X";
		} 
		std::cout<<std::endl;
		positions.pop();
	} // end while

} // end PrintBoard




