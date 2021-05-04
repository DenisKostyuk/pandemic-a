#include "Board.hpp"
#include <ostream>
#include "City.hpp"
#include <map>
using namespace std;
using namespace pandemic;
    bool Board::is_clean(){
        return true;
    }
    void Board::remove_cures(){}

    int& Board::operator[](City c){
        return this->DiseaseLevel[c];
    }
    ostream& pandemic::operator<< (std::ostream& os , Board b){
        return os;
    }

