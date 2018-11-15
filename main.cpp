#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

/*TO DO
 * Figure out why random name generator is not working
 * or figure out how to manipulate arrays
 * */

 
using namespace std;

string randomNameGenerator()
{
    srand(time(0));
    string country_name;
    string name_option[20] = {"Urania",
                       "Carbonia",
                       "Nitrogenia",
                       "Helia",
                       "United Neonian Republic",
                       "Ferrumistan",
                       "Boronistan",
                       "Potatistan",
                       "Soviet Siliconia Republic",
                       "Great Berelia Emirate",
                       "Florium Soveriegn States",
                       "United States of Galelia",
                       "Paladistan",
                       "Krypotia Socialist States",
                       "Chlorinia Union",
                       "United Titania Union",
                       "Great Alumina",
                       "Great Argonistan",
                       "Mercuria",
                       "United Polonia"};
    int randompick = rand()%20;
    string name = name_option[randompick];

    return name;

}

int main()
{
    cout<<"======================================================================================================\n";
    cout<<"||  _______  ___   __   __          _______  _______  __   __  __    _  _______  ______    __   __  ||    \n"
          "|| |       ||   | |  |_|  |        |       ||       ||  | |  ||  |  | ||       ||    _ |  |  | |  | ||    \n"
          "|| |  _____||   | |       |        |       ||   _   ||  | |  ||   |_| ||_     _||   | ||  |  |_|  | ||   \n"
          "|| | |_____ |   | |       |        |       ||  | |  ||  |_|  ||       |  |   |  |   |_||_ |       | ||    \n"
          "|| |_____  ||   | |       |        |      _||  |_|  ||       ||  _    |  |   |  |    __  ||_     _| ||    \n"
          "||  _____| ||   | | ||_|| | _____  |     |_ |       ||       || | |   |  |   |  |   |  | |  |   |   ||    \n"
          "|| |_______||___| |_|   |_||_____| |_______||_______||_______||_|  |__|  |___|  |___|  |_|  |___|   ||    \n";
    cout<<"======================================================================================================\n";
    cout<<"\n\nWelcome to Sim_Country. This game allows you to simulate your own country. But first you must name it:";


    string leader = "";
    string country = "";
    string leader_temp;
    string leader_title = "Supreme Dictator";
    cin>>country;
    cout<<"- You have named your country '"<<country<<"'.\n- What is your name, Supreme Dictator?: ";
    cin>>leader_temp;
    leader = leader_title + " " + leader_temp;
    cout<<"- Your title and name is:\n"<<leader<<endl;
    string north_neighbour = randomNameGenerator();
    string south_neighbour = randomNameGenerator();
    string west_neighbour = randomNameGenerator();
    string east_neighbour = randomNameGenerator();


   /* bool same;
    do
    {
        same = false;
     if(south_neighbour==north_neighbour)
     {
         south_neighbour = randomNameGenerator();
         same = true;
     }
    }while(!same);


    do
    {
         same = false;
        if(west_neighbour==north_neighbour)
        {
            west_neighbour = randomNameGenerator();
            same = true;
        }
        if(west_neighbour==south_neighbour)
        {
            west_neighbour = randomNameGenerator();
            same = true;
        }
    }while(!same);

    do
    {
        same = false;
        if(east_neighbour==north_neighbour)
        {
            east_neighbour = randomNameGenerator();
            same = true;
        }
        if(east_neighbour==south_neighbour)
        {
            east_neighbour = randomNameGenerator();
            same = true;
        }
        if(east_neighbour==west_neighbour)
        {
            south_neighbour = randomNameGenerator();
            same = true;
        }
    }while(!same);*/


    int north_id = 1;
    int south_id = 2;
    int west_id = 3;
    int east_id = 4;

    string buffer_clear;



    int population = 1000000;   //Starting at 10 million, grows with food, falls with war and famine
    int fail_condition=population/2;
    int commerce = 10000;
    int gdp = commerce/population;
    int military = 100+(gdp/military);

    int mil_factory = 1;
    int land = 10000;
    int land_fail_condition = land/4;
    int food = land*1000;
    int year = 1940;



    //Growth factors
    bool game_win = false;
    bool game_fail = false;
    bool in_power = true;

    double population_growth;
    double commercial_growth;
    double public_opinion = 100.0;
    cout<<north_neighbour<<endl<<south_neighbour<<endl<<west_neighbour<<endl<<east_neighbour<<endl;

    /*while(!game_fail)
    {
        year++;
        cout<<year;

        //Game fail conditions
        if(military<0)
        {
            game_fail = true;
        }
        if(population<fail_condition)
        {
            game_fail = true;
        }
        if(land<land_fail_condition)
        {
            game_fail = true;
        }
        if(!in_power)
        {
            game_fail = true;
        }
        break;
    }*/
    if(game_win)
    {
        cout<<"You now have the heighest GDP of all countries!/n/nYou have won the game!";
        return 0;
    }
    else if(!game_win)
    {
        cout<<"Your population is below the failing condition, you can no longer continue to run the country!\n\nYOU HAVE LOST!!!";
        return 0;
    }
    else
    {
        cout<<"\n\n\nAN ERROR HAS BEEN DETECTED! CLOSING!";
        return 0;
    }

}
