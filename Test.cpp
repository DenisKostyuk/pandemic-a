#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "doctest.h"
#include <stdio.h>

using namespace pandemic;

#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
#include <random>

TEST_CASE("CHECKING NUMBER OF QUBES IN KINSHASA"){
    Board board;
    board[City::Kinshasa] = 0;
    CHECK(board[City::Kinshasa] == 0);
    board[City::Kinshasa] = 1;
    CHECK(board[City::Kinshasa] == 1);
    board[City::Kinshasa] = 2;
    CHECK(board[City::Kinshasa] == 2);
    board[City::Kinshasa] = 3;
    CHECK(board[City::Kinshasa] == 3);
    board[City::Kinshasa] = 4;
    CHECK(board[City::Kinshasa] == 4);
    board[City::Kinshasa] = 5;
    CHECK(board[City::Kinshasa] == 5);
}

TEST_CASE("RANDOM CITIES & RANDOM NUMBER OF QUBES"){
    Board board;
    City city;
    for(int i=0;i<50;i++){
        int randBetweenCities = rand() % 10 + 1;
        int randBetweenOneToFive = rand() % 5+1;
        if(randBetweenCities == 1){
            board[City::Kinshasa] = randBetweenOneToFive;
            CHECK(board[City::Kinshasa] == randBetweenOneToFive);
        } 
        else if(randBetweenCities == 2){
            board[City::Atlanta] = randBetweenOneToFive;
            CHECK(board[City::Atlanta] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 3){
            board[City::Baghdad] = randBetweenOneToFive;
            CHECK(board[City::Baghdad] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 4){
            board[City::Bangkok] = randBetweenOneToFive;
            CHECK(board[City::Bangkok] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 5){
            board[City::Beijing] = randBetweenOneToFive;
            CHECK(board[City::Beijing] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 6){
            board[City::Bogota] = randBetweenOneToFive;
            CHECK(board[City::Bogota] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 7){
            board[City::BuenosAires] = randBetweenOneToFive;
            CHECK(board[City::BuenosAires] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 8){
            board[City::Cairo] = randBetweenOneToFive;
            CHECK(board[City::Cairo] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 9){
            board[City::Chennai] = randBetweenOneToFive;
            CHECK(board[City::Chennai] == randBetweenOneToFive);
        }
        else if(randBetweenCities == 10){
            board[City::Chicago] = randBetweenOneToFive;
            CHECK(board[City::Chicago] == randBetweenOneToFive);
        }
    }
}
// TEST_CASE("CURING THE DESEASE"){
//         Player p;
//         Board b;
//         b[City::Chicago] = 5;
//         p.drive(City::Chicago);
//         CHECK(b[City::Chicago] == 5);
//         p.treat(City::Chicago);
//         CHECK(b[City::Chicago] == 4);
//         p.treat(City::Chicago);
//         CHECK(b[City::Chicago] == 3);
//         p.treat(City::Chicago);
//         CHECK(b[City::Chicago] == 2);
//         p.treat(City::Chicago);
//         CHECK(b[City::Chicago] == 1);
//         p.treat(City::Chicago);
//         CHECK(b[City::Chicago] == 0);
//         p.treat(City::Chicago);
//         b[City::Delhi] = 5;
//         p.drive(City::Delhi);
//         CHECK(b[City::Delhi] == 5);
//         p.treat(City::Delhi);
//         CHECK(b[City::Delhi] == 4);
//         p.treat(City::Delhi);
//         CHECK(b[City::Delhi] == 3);
//         p.treat(City::Delhi);
//         CHECK(b[City::Delhi] == 2);
//         p.treat(City::Delhi);
//         CHECK(b[City::Delhi] == 1);
//         p.treat(City::Delhi);
//         CHECK(b[City::Delhi] == 0);
//         p.treat(City::Delhi);
//         try{
//             p.treat(City::Delhi);
//         }catch( const exception& ex){
//             cout << " caught exception: "<<ex.what()<<endl;
//         }
        
//     }