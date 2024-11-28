#include "Controller.h"

Controller::Controller()
    : m_board()
{
}

void Controller::run()
{
    m_board.readBoard();
    Robot robot;
    robot.changelocation(1, 1);
    bool isRunning = true;
    while (isRunning)
    {
        m_board.render();
        m_board.handleSpecialKey();


      
        
    }
}





const Board& Controller::getBoard() const
{
    return m_board;
}
