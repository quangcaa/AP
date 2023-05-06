#include "Headers/Computer.h"

int score_1(int x , int y , Player player , Player board[][15])
{
    int score = 0 ;

    board[x][y] = player ;


    //(1) ooooo
    if((board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==player && board[x][y+4]==player) ||
       (board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==player) ||
       (board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player) ||
       (board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player) ||
       (board[x][y-4]==player && board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player))
    {
        score = 100000 ;
    }

    //(2) -oooo-
    else if((board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==player && board[x][y+4]==Player::None) ||
            (board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==Player::None) ||
            (board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None) ||
            (board[x][y-4]==Player::None && board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None))
    {
        if(player == Player::O)
        {
            score = 20000 ;
        }
        else
        {
            score = 12500 ;
        }
    }

    //(3) -ooo--
    else if((board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==Player::None && board[x][y+4]==Player::None) ||
            (board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None && board[x][y+3]==Player::None) ||
            (board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==Player::None))
    {
        score = 720 ;
    }

    //(4) --ooo-
    else if((board[x][y-2]==Player::None && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==Player::None) ||
            (board[x][y-3]==Player::None && board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None) ||
            (board[x][y-4]==Player::None && board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(5) -oo-o-
    else if((board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None && board[x][y+3]==player && board[x][y+4]==Player::None) ||
            (board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player && board[x][y+3]==Player::None) ||
            (board[x][y-4]==Player::None && board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(6) -o-oo-
    else if((board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player && board[x][y+3]==player && board[x][y+4]==Player::None) ||
            (board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None) ||
            (board[x][y-4]==Player::None && board[x][y-3]==player && board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(7) oooo-
    else if((board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==player && board[x][y+4]==Player::None) ||
            (board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==Player::None) ||
            (board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None) ||
            (board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(8) -oooo
    else if((board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==player) ||
            (board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player) ||
            (board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player) ||
            (board[x][y-4]==Player::None && board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(9) oo-oo
    else if((board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None && board[x][y+3]==player && board[x][y+4]==player) ||
            (board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player && board[x][y+3]==player) ||
            (board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player) ||
            (board[x][y-4]==player && board[x][y-3]==player && board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(10) o-ooo
    else if((board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player && board[x][y+3]==player && board[x][y+4]==player) ||
            (board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player) ||
            (board[x][y-3]==player && board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player) ||
            (board[x][y-4]==player && board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(11) ooo-o
    else if((board[x][y]==player && board[x][y+1]==player && board[x][y+2]==player && board[x][y+3]==Player::None && board[x][y+4]==player) ||
            (board[x][y-1]==player && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None && board[x][y+3]==player) ||
            (board[x][y-2]==player && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player) ||
            (board[x][y-4]==player && board[x][y-3]==player && board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player))
    {
        score = 720 ;
    }

    //(12) --oo--
    else if((board[x][y-2]==Player::None && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==player && board[x][y+2]==Player::None && board[x][y+3]==Player::None) ||
            (board[x][y-3]==Player::None && board[x][y-2]==Player::None && board[x][y-1]==player && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==Player::None))
            
    {
        score = 120 ;
    }

    //(13) --o-o-
    else if((board[x][y-2]==Player::None && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player && board[x][y+3]==Player::None) ||
            (board[x][y-4]==Player::None && board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None))
            
    {
        score = 120 ;
    }

    //(14) -o-o--
    else if((board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==player && board[x][y+3]==Player::None && board[x][y+4]==Player::None) ||
            (board[x][y-3]==Player::None && board[x][y-2]==player && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==Player::None))
            
    {
        score = 120 ;
    }

    //(15) ---o--
    else if((board[x][y-3]==Player::None && board[x][y-2]==Player::None && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==Player::None))     
    {
        score = 20 ;
    }

    //(16) --o---
    else if((board[x][y-2]==Player::None && board[x][y-1]==Player::None && board[x][y]==player && board[x][y+1]==Player::None && board[x][y+2]==Player::None && board[x][y+3]==Player::None))     
    {
        score = 20 ;
    }


    board[x][y] = Player::None ;

    return score ;
}


int score_2(int x , int y , Player player , Player board[][15])
{
    int score = 0 ;

    board[x][y] = player ;


    //(1) ooooo
    if((board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==player && board[x+4][y]==player) ||
       (board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==player) ||
       (board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player) ||
       (board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player) ||
       (board[x-4][y]==player && board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player))
    {
        score = 100000 ;
    }

    //(2) -oooo-
    else if((board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==player && board[x+4][y]==Player::None) ||
            (board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==Player::None) ||
            (board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None) ||
            (board[x-4][y]==Player::None && board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None))
    {
        if(player == Player::O)
        {
            score = 20000 ;
        }
        else
        {
            score = 12500 ;
        }
    }

    //(3) -ooo--
    else if((board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==Player::None && board[x+4][y]==Player::None) ||
            (board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None && board[x+3][y]==Player::None) ||
            (board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==Player::None))
    {
        score = 720 ;
    }

    //(4) --ooo-
    else if((board[x-2][y]==Player::None && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==Player::None) ||
            (board[x-3][y]==Player::None && board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None) ||
            (board[x-4][y]==Player::None && board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None))
    {
        score = 720 ;
    }

    //(5) -oo-o-
    else if((board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None && board[x+3][y]==player && board[x+4][y]==Player::None) ||
            (board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player && board[x+3][y]==Player::None) ||
            (board[x-4][y]==Player::None && board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None))
    {
        score = 720 ;
    }

    //(6) -o-oo-
    else if((board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player && board[x+3][y]==player && board[x+4][y]==Player::None) ||
            (board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None) ||
            (board[x-4][y]==Player::None && board[x-3][y]==player && board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None))
    {
        score = 720 ;
    }

    //(7) oooo-
    else if((board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==player && board[x+4][y]==Player::None) ||
            (board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==Player::None) ||
            (board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None) ||
            (board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None))
    {
        score = 720 ;
    }

    //(8) -oooo
    else if((board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==player) ||
            (board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player) ||
            (board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player) ||
            (board[x-4][y]==Player::None && board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(9) oo-oo
    else if((board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None && board[x+3][y]==player && board[x+4][y]==player) ||
            (board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player && board[x+3][y]==player) ||
            (board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player) ||
            (board[x-4][y]==player && board[x-3][y]==player && board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(10) o-ooo
    else if((board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player && board[x+3][y]==player && board[x+4][y]==player) ||
            (board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player) ||
            (board[x-3][y]==player && board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player) ||
            (board[x-4][y]==player && board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(11) ooo-o
    else if((board[x][y]==player && board[x+1][y]==player && board[x+2][y]==player && board[x+3][y]==Player::None && board[x+4][y]==player) ||
            (board[x-1][y]==player && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None && board[x+3][y]==player) ||
            (board[x-2][y]==player && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player) ||
            (board[x-4][y]==player && board[x-3][y]==player && board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player))
    {
        score = 720 ;
    }

    //(12) --oo--
    else if((board[x-2][y]==Player::None && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==player && board[x+2][y]==Player::None && board[x+3][y]==Player::None) ||
            (board[x-3][y]==Player::None && board[x-2][y]==Player::None && board[x-1][y]==player && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==Player::None))
            
    {
        score = 120 ;
    }

    //(13) --o-o-
    else if((board[x-2][y]==Player::None && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player && board[x+3][y]==Player::None) ||
            (board[x-4][y]==Player::None && board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None))
            
    {
        score = 120 ;
    }

    //(14) -o-o--
    else if((board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==player && board[x+3][y]==Player::None && board[x+4][y]==Player::None) ||
            (board[x-3][y]==Player::None && board[x-2][y]==player && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==Player::None))
            
    {
        score = 120 ;
    }

    //(15) ---o--
    else if((board[x-3][y]==Player::None && board[x-2][y]==Player::None && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==Player::None))     
    {
        score = 20 ;
    }

    //(16) --o---
    else if((board[x-2][y]==Player::None && board[x-1][y]==Player::None && board[x][y]==player && board[x+1][y]==Player::None && board[x+2][y]==Player::None && board[x+3][y]==Player::None))     
    {
        score = 20 ;
    }


    board[x][y] = Player::None ;

    return score ;
}


int score_3(int x , int y , Player player , Player board[][15])
{
    int score = 0 ;

    board[x][y] = player ;


    //(1) ooooo
    if((board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==player && board[x+4][y+4]==player) ||
       (board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==player) ||
       (board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player) ||
       (board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player) ||
       (board[x-4][y-4]==player && board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player))
    {
        score = 100000 ;
    }

    //(2) -oooo-
    else if((board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==player && board[x+4][y+4]==Player::None) ||
            (board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==Player::None) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None) ||
            (board[x-4][y-4]==Player::None && board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None))
    {
        if(player == Player::O)
        {
            score = 20000 ;
        }
        else
        {
            score = 12500 ;
        }
    }

    //(3) -ooo--
    else if((board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==Player::None && board[x+4][y+4]==Player::None) ||
            (board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None && board[x+3][y+3]==Player::None) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==Player::None))
    {
        score = 720 ;
    }

    //(4) --ooo-
    else if((board[x-2][y-2]==Player::None && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==Player::None) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None) ||
            (board[x-4][y-4]==Player::None && board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(5) -oo-o-
    else if((board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None && board[x+3][y+3]==player && board[x+4][y+4]==Player::None) ||
            (board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player && board[x+3][y+3]==Player::None) ||
            (board[x-4][y-4]==Player::None && board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(6) -o-oo-
    else if((board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player && board[x+3][y+3]==player && board[x+4][y+4]==Player::None) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None) ||
            (board[x-4][y-4]==Player::None && board[x-3][y-3]==player && board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(7) oooo-
    else if((board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==player && board[x+4][y+4]==Player::None) ||
            (board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==Player::None) ||
            (board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None) ||
            (board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None))
    {
        score = 720 ;
    }

    //(8) -oooo
    else if((board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==player) ||
            (board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player) ||
            (board[x-4][y-4]==Player::None && board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(9) oo-oo
    else if((board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None && board[x+3][y+3]==player && board[x+4][y+4]==player) ||
            (board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player && board[x+3][y+3]==player) ||
            (board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player) ||
            (board[x-4][y-4]==player && board[x-3][y-3]==player && board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(10) o-ooo
    else if((board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player && board[x+3][y+3]==player && board[x+4][y+4]==player) ||
            (board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player) ||
            (board[x-3][y-3]==player && board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player) ||
            (board[x-4][y-4]==player && board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(11) ooo-o
    else if((board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==player && board[x+3][y+3]==Player::None && board[x+4][y+4]==player) ||
            (board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None && board[x+3][y+3]==player) ||
            (board[x-2][y-2]==player && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player) ||
            (board[x-4][y-4]==player && board[x-3][y-3]==player && board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player))
    {
        score = 720 ;
    }

    //(12) --oo--
    else if((board[x-2][y-2]==Player::None && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==player && board[x+2][y+2]==Player::None && board[x+3][y+3]==Player::None) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==Player::None && board[x-1][y-1]==player && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==Player::None))
            
    {
        score = 120 ;
    }

    //(13) --o-o-
    else if((board[x-2][y-2]==Player::None && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player && board[x+3][y+3]==Player::None) ||
            (board[x-4][y-4]==Player::None && board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None))
            
    {
        score = 120 ;
    }

    //(14) -o-o--
    else if((board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==player && board[x+3][y+3]==Player::None && board[x+4][y+4]==Player::None) ||
            (board[x-3][y-3]==Player::None && board[x-2][y-2]==player && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==Player::None))
            
    {
        score = 120 ;
    }

    //(15) ---o--
    else if((board[x-3][y-3]==Player::None && board[x-2][y-2]==Player::None && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==Player::None))     
    {
        score = 20 ;
    }

    //(16) --o---
    else if((board[x-2][y-2]==Player::None && board[x-1][y-1]==Player::None && board[x][y]==player && board[x+1][y+1]==Player::None && board[x+2][y+2]==Player::None && board[x+3][y+3]==Player::None))     
    {
        score = 20 ;
    }


    board[x][y] = Player::None ;

    return score ;
}


int score_4(int x , int y , Player player , Player board[][15])
{
    int score = 0 ;

    board[x][y] = player ;


    //(1) ooooo
    if((board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==player && board[x+4][y-4]==player) ||
       (board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==player) ||
       (board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player) ||
       (board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player) ||
       (board[x-4][y+4]==player && board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player))
    {
        score = 100000 ;
    }

    //(2) -oooo-
    else if((board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==player && board[x+4][y-4]==Player::None) ||
            (board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==Player::None) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None) ||
            (board[x-4][y+4]==Player::None && board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None))
    {
        if(player == Player::O)
        {
            score = 20000 ;
        }
        else
        {
            score = 12500 ;
        }
    }

    //(3) -ooo--
    else if((board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==Player::None && board[x+4][y-4]==Player::None) ||
            (board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None && board[x+3][y-3]==Player::None) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==Player::None))
    {
        score = 720 ;
    }

    //(4) --ooo-
    else if((board[x-2][y+2]==Player::None && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==Player::None) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None) ||
            (board[x-4][y+4]==Player::None && board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None))
    {
        score = 720 ;
    }

    //(5) -oo-o-
    else if((board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None && board[x+3][y-3]==player && board[x+4][y-4]==Player::None) ||
            (board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player && board[x+3][y-3]==Player::None) ||
            (board[x-4][y+4]==Player::None && board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None))
    {
        score = 720 ;
    }

    //(6) -o-oo-
    else if((board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player && board[x+3][y-3]==player && board[x+4][y-4]==Player::None) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None) ||
            (board[x-4][y+4]==Player::None && board[x-3][y+3]==player && board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None))
    {
        score = 720 ;
    }

    //(7) oooo-
    else if((board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==player && board[x+4][y-4]==Player::None) ||
            (board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==Player::None) ||
            (board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None) ||
            (board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None))
    {
        score = 720 ;
    }

    //(8) -oooo
    else if((board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==player) ||
            (board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player) ||
            (board[x-4][y+4]==Player::None && board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(9) oo-oo
    else if((board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None && board[x+3][y-3]==player && board[x+4][y-4]==player) ||
            (board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player && board[x+3][y-3]==player) ||
            (board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player) ||
            (board[x-4][y+4]==player && board[x-3][y+3]==player && board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(10) o-ooo
    else if((board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player && board[x+3][y-3]==player && board[x+4][y-4]==player) ||
            (board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player) ||
            (board[x-3][y+3]==player && board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player) ||
            (board[x-4][y+4]==player && board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player))
    {
        score = 720 ;
    }

    //(11) ooo-o
    else if((board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==player && board[x+3][y-3]==Player::None && board[x+4][y-4]==player) ||
            (board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None && board[x+3][y-3]==player) ||
            (board[x-2][y+2]==player && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player) ||
            (board[x-4][y+4]==player && board[x-3][y+3]==player && board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player))
    {
        score = 720 ;
    }

    //(12) --oo--
    else if((board[x-2][y+2]==Player::None && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==player && board[x+2][y-2]==Player::None && board[x+3][y-3]==Player::None) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==Player::None && board[x-1][y+1]==player && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==Player::None))
            
    {
        score = 120 ;
    }

    //(13) --o-o-
    else if((board[x-2][y+2]==Player::None && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player && board[x+3][y-3]==Player::None) ||
            (board[x-4][y+4]==Player::None && board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None))
            
    {
        score = 120 ;
    }

    //(14) -o-o--
    else if((board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==player && board[x+3][y-3]==Player::None && board[x+4][y-4]==Player::None) ||
            (board[x-3][y+3]==Player::None && board[x-2][y+2]==player && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==Player::None))
            
    {
        score = 120 ;
    }

    //(15) ---o--
    else if((board[x-3][y+3]==Player::None && board[x-2][y+2]==Player::None && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==Player::None))     
    {
        score = 20 ;
    }

    //(16) --o---
    else if((board[x-2][y+2]==Player::None && board[x-1][y+1]==Player::None && board[x][y]==player && board[x+1][y-1]==Player::None && board[x+2][y-2]==Player::None && board[x+3][y-3]==Player::None))     
    {
        score = 20 ;
    }


    board[x][y] = Player::None ;

    return score ;
}


int checkNeighbor(int i , int j , Player board[][15]) //Flood Fill algorithm
{
    int dx[8] = {-1 , -1 , -1 , 0 , 1 , 1 , 1 , 0} ;
    int dy[8] = {-1 , 0 , 1 , 1 , 1 , 0 , -1 , -1} ;
    int check = 0 ;
    for(int k=0 ; k<8 ; k++)
    {
        int i1 = i+dx[k] , j1= j+dy[k] ;
        if(i1>=0 && i1<BOARD_SIZE && j1>=0 && j1<BOARD_SIZE)
        {
            if(board[i1][j1] == Player::X)
            {
                check = 1 ;
            }
        }
    }
    for(int k=0 ; k<8 ; k++)
    {
        int i1 = i+dx[k] , j1= j+dy[k] ;
        if(i1>=0 && i1<BOARD_SIZE && j1>=0 && j1<BOARD_SIZE)
        {
            if(board[i1][j1] == Player::O)
            {
                check = 1 ;
            }
        }
    }

    if(check) return 1 ;
    else return 0 ;
}

void best_move(Player board[][15])
{
    int iO = 0 , jO = 0 , maxO = 0 ; //stand for attack mode
    int iX = 0 , jX = 0 , maxX = 0 ; //stand for defend mode

    cout << "O score :\n" ;

    for(int i=0 ; i<BOARD_SIZE ; i++)
    {
        for(int j=0 ; j<BOARD_SIZE ; j++)
        {
            if(board[i][j] == Player::None)
            {
                if(checkNeighbor(i , j , board) && 
                  (score_1(i,j,Player::O,board)+score_2(i,j,Player::O,board)+score_3(i,j,Player::O,board)+score_4(i,j,Player::O,board)) >= maxO)
                {
                    maxO = score_1(i , j , Player::O , board) +
                           score_2(i , j , Player::O , board) +
                           score_3(i , j , Player::O , board) +
                           score_4(i , j , Player::O , board) ;
                    iO = i ;
                    jO = j ;
                    
                    int sscore_1 = score_1(i , j , Player::O , board) ;
                    int sscore_2 = score_2(i , j , Player::O , board) ;
                    int sscore_3 = score_3(i , j , Player::O , board) ;
                    int sscore_4 = score_4(i , j , Player::O , board) ;
                    cout << "row:" << jO << " col:" << iO << " score: " << maxO << " : " << sscore_1 << " " << sscore_2 << " " << sscore_3 << " " << sscore_4 << endl ;
                }
            }
        }
    }

    cout << endl ;
    cout << "X score:\n" ;

    for(int i=0 ; i<BOARD_SIZE ; i++)
    {
        for(int j=0 ; j<BOARD_SIZE ; j++)  
        {
            if(board[i][j] == Player::None)
            {
                if(checkNeighbor(i , j , board) && 
                  (score_1(i,j,Player::X,board)+score_2(i,j,Player::X,board)+score_3(i,j,Player::X,board)+score_4(i,j,Player::X,board)) >= maxX)
                {
                    maxX = score_1(i , j , Player::X , board) +
                           score_2(i , j , Player::X , board) +
                           score_3(i , j , Player::X , board) +
                           score_4(i , j , Player::X , board) ;
                    iX = i ;
                    jX = j ;

                    int sscore_1 = score_1(i , j , Player::X , board) ;
                    int sscore_2 = score_2(i , j , Player::X , board) ;
                    int sscore_3 = score_3(i , j , Player::X , board) ;
                    int sscore_4 = score_4(i , j , Player::X , board) ;
                    cout << "row:" << jX << " col:" << iX << " score: " << maxX << " : " << sscore_1 << " " << sscore_2 << " " << sscore_3 << " " << sscore_4 << endl ;
                }
            }
        }
    }
    cout << endl;


    if(maxO >= maxX)
    {
        board[iO][jO] = Player::O ;
    }
    else
    {
        board[iX][jX] = Player::O ;
    }
}