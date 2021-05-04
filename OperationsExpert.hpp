#include "Player.hpp"
#include <list>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#pragma once
namespace pandemic{
    class OperationsExpert : public Player{
        private:
            City ci;
            std::list<City> cards;

        public: 
            OperationsExpert(Board b , City c):Player(){
                this->ci = c;
            }
            Player build();
    };
}