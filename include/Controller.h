#pragma once
#include "Board.h"
#include "Robot.h"


class Controller {
public:
    Controller();        
    void run();          
    const Board& getBoard() const;  
    

private:
    Board m_board;      
};
