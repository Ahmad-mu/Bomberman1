#include "Board.h"

Board::Board()
{
	m_col = 0;
	m_row = 0;
}

void Board::readBoard() {
    std::string filename;
    std::cin >> filename; 

    std::ifstream map(filename); 
    if (!map) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    map >> m_row >> m_col; 
    map.ignore(); 

    m_vector.resize(m_row, std::vector<char>(m_col));

    for (int i = 0; i < m_row; i++) {
        for (int j = 0; j < m_col; j++) {
            char ch = map.get();
            if (ch == '\n') {
                j--; 
                continue;
            }
            m_vector[i][j] = ch;
        }
    }

    map.close(); 
}


void Board::handleSpecialKey()
{
    const auto c = _getch();
    switch (c)
    {
    case SpecialKeys::UP:
        std::cout << "Arrow Up pressed\n";
        break;
    case SpecialKeys::DOWN:
        std::cout << "Arrow Down pressed\n";
        break;
    case SpecialKeys::LEFT:
        std::cout << "Arrow Left pressed\n";
        break;
    case SpecialKeys::RIGHT:

        std::cout << "Arrow Right pressed\n";
        break;
    default:
        std::cout << "Unknown special key pressed (code = " << c << ")\n";
        break;
    }
}

void Board::render() const
{
	for (int i = 0; i < m_row; i++) {
		for (int j = 0; j < m_col; j++) {
			cout << m_vector[i][j];
		}
		cout << endl;
	}

}
