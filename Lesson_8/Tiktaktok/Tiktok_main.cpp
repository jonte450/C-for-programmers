#include "Gameboard.cpp"
#include "Tiktok_functions.cpp"


int main(){
    string player_1;
    string player_2;
    Gameboard board;

    int tie_game = 0;
    char winner_of_game = 'z';


    get_names_players(player_1,player_2);
    for(int cur_turn = 0; cur_turn<=8;cur_turn++){
        print_the_board(board);
        print_prompt(player_1,'x');
        check_board_response(board,'x');
        winner_of_game = board.decide_winner();
        //cout<<"winner_of_game "<<winner_of_game;
        if(winner_of_game != 'z'){
            print_the_board(board);
            update_board(board);
            get_Winner(board,player_1,player_2);
            break;
    }
        print_the_board(board);
        print_Blank_Board();
        update_board(board);
        print_prompt(player_2,'o');
        check_board_response(board,'o');
        print_Blank_Board();
        print_the_board(board);
        update_board(board);
        winner_of_game = board.decide_winner();
        if(winner_of_game != 'z'){
            print_the_board(board);
            update_board(board);
            get_Winner(board,player_1,player_2);
            break;
        }
        tie_game++;
    }
    if(tie_game == 8){
       cout<<"No winner it is a tie!";
    }

    return 0;
}
