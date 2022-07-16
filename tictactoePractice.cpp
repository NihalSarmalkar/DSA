#include<bits/stdc++>
using namespace std;
struct move{
    int c,r,score;
}

struct TicTacToe{
    char player, computer, grid[3][3];
    TicTacToe(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]==' ';
            }
        }
    }

    bool win(){
        int win_states[8][3]={{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
        for(int i=0;i<8;i++){
            bool win = true;
            int first_r=win_states[i][0]/3;
            int first_c=win_states[i][0]%3;
            for(int j=0;j<3;j++){
                int r=win_states[i][j]/3;
                int c=win_states[i][j]%3;
                if(grid[first_r0][first_c]==" "|| grid[first_r][first_c] != grid[r][c]){
                    win=false
                }
            }        
        }
        if(win){
            return true;
        }
    }

    bool tie(){
        if(win()){
            return false
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[i][j]==" "){
                    return false;
                }
                
            }
        }
        return true;
    }

    void player_move(){
        while(true){
            cout<<"Enter the cell number";
            int cell;
            cin>>cell;
            int row = (cell-1)/3;
            int column = (cell - 1)%3;
            if(cell>=1 && cell<=9 and grid[row][column]==" "){
                grid[row][column]=player;
                break;
            }
        }

    }
    move minimax(bool maximizing_player=true){

        move best_move;
        if(win()){
            if(maximizing_player){
                best_move.score=-1;

            }else{
                best_move.score=1

            }
            return best_move;
        }else if(tie())
        {
            best_move.score=0;
            return best_move;
        }

        best_move.score = maximizing_player ? -2:2;
        for(int i=0;i<3;i++){
            for(int j=0;i<3;j++){
                if(grid[i][j]==" "){
                    grid[i][j]=maximizing_player? computer: player;
                    move board_state = minimax(!maximizing_player);
                    if(maximizing_player){
                        if(board_state.score>best_move.score){
                            best_move.score=board_state.score;
                            best_move.r=i;
                            best_move.c=j;
                        }

                    }
                    else{
                        if(board_state.score<best_move.score){
                            best_move.score=board_state.score;
                            best_move.r=i;
                            best_move.c=j;
                        }

                    }
                    grid[i][j]==" "
                }
            }
        }
        return best_move;


    }

    void computer_move(){
        move best_move = minimax();
        grid[best_move.r][best_move.c]==computer;
    }


    void play(){
        while(true){
            cout<<"enter symbol (X or O) Note: X's turn is 1'st : "
            cin >>player;
            if(player=="X" || player=="O"){
                break;

            }
            if(player=="X")
            {
                computer="O"
            }
            else{
                computer="X"
            }
            // computer=player='X'?'O':'X';
            if(player =="O"){
                computer_move()
            }
            print();
            while(true){
                player_move();
                print();
                if (win()){
                    cout<<"Player win"<<endl;
                    return;
                }
                else if (tie()){
                    cout<<"Match Tie"<<endl;

                }
                cout<<"Computer is making move";
                computer_move();
                print();
                if (win()){
                    cout<<"Player win"<<endl;
                    return;
                }
                else if (tie()){
                    cout<<"Match Tie"<<endl;
                    return;

                }
                
            }
        }

        
    }

    void print(){

        cout<<endl;
        for(int i=0;i<3;i++){

            if(i){
                cout<<"------------"<<endl;
            }
            for(int j=0;j<n;j++){
                if(j){
                    cout<<"|"
                }
                cout<<" "
                if(grid[i][j]==" "){
                    cout<<3*i+j+1;
                }
                else{
                    cout<<grid[i][j];
                }
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;


    }
};


int main(){
    TicTacToe game;
    game.play();


    return 0;


}