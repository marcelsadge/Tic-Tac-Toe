#include <iostream>

#include "./algorithm.h"

void Board::game_loop() {

}

BoardPiece Board::check_win_condition(int x, int y) {
    std::vector<std::vector<BoardPiece>> curr_board = get_board();
    
    
}

bool Board::set_position(BoardPiece piece, int x, int y) {
    std::vector<std::vector<BoardPiece>> curr_board = get_board();
    
    if (curr_board[x][y] == BoardPiece::w) {
        board[x][y] = piece;
        return true;
    }
    return false;
}

std::vector<std::vector<BoardPiece>> Board::get_board() const {
    return board;
}

std::string Board::print_board() {
    std::vector<std::vector<BoardPiece>> curr_board = get_board();

    std::string output_board = "";

    for (int i = 0; i < get_height(); i++) {
        output_board += "[";
        for (int j = 0; j < get_width(); j++) {
            if (curr_board[i][j] == BoardPiece::w) {
                output_board += "0, ";
            } else if (curr_board[i][j] == BoardPiece::x) {
                output_board += "X, ";
            } else if (curr_board[i][j] == BoardPiece::y) {
                output_board += "O, ";
            }
        }
        output_board += "]\n";
    }
    return output_board;
}

int Board::get_width() const {
    return width_size;
}

int Board::get_height() const {
    return height_size;
}

Board::Board(int best_of) {

}

Board::~Board() {

}