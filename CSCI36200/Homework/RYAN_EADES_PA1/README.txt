########################

NQUEENS 

########################



OVERVIEW

	In chess, the queen pieces are the most versatile movers. They can move from their current space to any other space in the same row or column, as well as any place on the same diagonal(in practice, moving along a diagonal means moving a fixed amout in the same row, then moving the same amount in the resulting column). This program assigns positions(rows and columns) to a fixed number of queens such that no queen can move to the position of any other in a single move. Cleary, the maximum number of queens that can be placed on an "nxn" chess board is n itself, since the pigeonhole principle would imply any greater number of queens MUST result in two queens being in the same row. Of course, if we can place n queens, we can remove any number of them to obtain a placing of a lesser number of queens, so we stick to the maximal number. 


EXECUTING THIS PROGRAM
	This program runs in C++ and has been tested in gcc compiler version 4.8.5. To run this program, simply unzip the package, and type "make run" at the command line. This will create the executable "nqueens" which can also be run manually by typing "./nqueens".

OPTICS
	To not do anything yourself, but just watch a video of this working, take a look at the recording(NqueensCapture.mp4). 

