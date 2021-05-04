#include "City.hpp"
#include <ostream>
#include <map>
#include <list>
#include "Color.hpp"
#pragma once
using namespace std;
namespace pandemic{
    class Board{
        private:
            std::map <City , std::map <Color ,  std::list<City> >> b; 
            std::map <City, int> DiseaseLevel;

        public:    
            Board(){}
            bool is_clean();
            void remove_cures();
            int& operator[](City c) ;
            friend std::ostream& operator <<(std::ostream& os ,const Board b);
    };
}