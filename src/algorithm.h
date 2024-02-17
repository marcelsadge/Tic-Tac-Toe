#ifndef ALGO_H
#define ALGO_H

#include <stdio.h>
#include <vector>
#include <string>

/// @brief 
enum class BoardPiece {
    w = 0, x = 1, y = 2
};

/// @brief 
struct Player {
    std::string player_name;
    int points;
    BoardPiece piece;
};

/// @brief 
class Board {
    private:
        const int width_size = 3;
        const int height_size = 3;

        std::vector<std::vector<BoardPiece>> board{
            {BoardPiece::w, BoardPiece::w, BoardPiece::w}, 
            {BoardPiece::w, BoardPiece::w, BoardPiece::w}, 
            {BoardPiece::w, BoardPiece::w, BoardPiece::w}};

    public:
        int best_of;
        int moves;

        /// @brief 
        void game_loop();

        /// @brief 
        /// @param x 
        /// @param y 
        /// @return 
        BoardPiece check_win_condition(int x, int y);

        /// @brief 
        /// @param piece 
        /// @param x 
        /// @param y 
        /// @return 
        bool set_position(BoardPiece piece, int x, int y);

        /// @brief 
        /// @return 
        std::string print_board();

        /// @brief 
        /// @return 
        int get_width() const;

        /// @brief 
        /// @return 
        int get_height() const;

        /// @brief 
        /// @return 
        std::vector<std::vector<BoardPiece>> get_board() const;

        /// @brief 
        /// @param best_of 
        Board(int best_of) {};

        /// @brief 
        ~Board() {};
};


#endif