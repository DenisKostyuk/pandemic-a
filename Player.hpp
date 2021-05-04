#include "City.hpp"
#pragma once
#include "Color.hpp"
#include "Board.hpp"
#include <list>
#pragma once
using namespace std;
namespace pandemic{
    class Player{
        private:
            std::list<City> cards;
        public:
            Player(){}
            Player& take_card(City c);//City::__
            Player& build();
            Player& drive(City c);//City::__
            Player& fly_direct(City c);//City::__
            Player& treat(City c);//City::__
            Player& fly_charter(City c);//City::__
            Player& fly_shuttle(City c);//City::__
            Player& discover_cure(Color col);//Color::__
            std::string role();

    };
}