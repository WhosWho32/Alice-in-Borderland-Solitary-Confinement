#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
using std::vector;
using std::string;
extern string panswer; //The answer the player provides to the bot regarding their suit
extern vector <string> botchoices; //The bots will accumulate answers from both you and other bots, storing them inside their "mind" //Cred ca e cam filler
extern vector <string> suits; //Vector with all 4 suits
extern vector <string> botnames; //Vector with all possible bot names
extern vector <string> roles; //Vector with all roles
extern short int roles_num; //Number that counts remaininig roles
extern short int name; //How many names are left
extern vector <string> allplayers; //All bot names present in the game when starting
extern vector <int> whoq; //Check which bot asked a question by index so you can erase afterwards
extern short int askedq; //Check how many questions have been asked
extern short int talkablebots; //How many bots you can talk to
extern vector <string> player_suit; //Suit as initial
extern vector <string> player; //Actual suit symbol
extern vector <bool> available; //Available for communication
extern vector <string> role_keeper; //Keep track of the roles for each bot created
extern vector <string> suit_keeper_i; //Keep track of suits initials for the bots
extern short int alivePlayers; //How many alive Players (Bots)
extern vector <bool> isAlive; //Check if a bot is alive
extern vector <bool> hasAsked; //Check if a bot has already asked a question
extern vector <bool> finishedTalking;
extern string playerc; //Bot of choice that you wanna talk to
extern short int iCounter; //Count how many bots have the innocent role
extern short int Scounter;
extern short int Ucounter;
extern short int j;
extern vector <int> nameLen_keeper;
extern vector <int> length;
extern short int allbotscounter;
extern short int first;
extern vector <string> suit_keeper;
class Bots {
    public:
        string suit; //Suit of the bot as symbol
        string bname; //Name of the bot
        static string role; //Role of the bot
        static string suit_txt[1]; //Suit as initial in text form
        Bots();
};
void info(); //Function that explains the various information regarding the game
void comm(); //Function that will tackle the communication between the player and bots
void answer(); //Function that decides if the bot should tell the truth or not based on its role
void botaskp(); //When it's time for the bots to ask the player
void chooseS();
void chooseR();
void ChatLog(); //As the name implies, it will write out all the chat log: who the player talked to, and which bots talked to which
void answerBot(int a); //If receiver is Bot 1

/*botquestionbot.cpp variables*/

extern short int sender;
extern short int receiver;
extern short int boptions; //How many bots can 1 bot talk to
extern vector <string> opinions1; //Vector containing the opinions for the 1st bot from the player and other bots
extern vector <string> opinions2; //Vector containing the opinions for the 2nd bot from the player and other bots
extern vector <string> opinions3; //Vector containing the opinions for the 3rd bot from the player and other bots
extern vector <string> opinions4; //Vector containing the opinions for the 4th bot from the player and other bots
extern vector <string> opinions5; //Vector containing the opinions for the 5th bot from the player and other bots
extern vector <string> opinions6; //Vector containing the opinions for the 6th bot from the player and other bots
extern vector <string> opinions7; //Vector containing the opinions for the 7th bot from the player and other bots
extern vector <string> opinions8; //Vector containing the opinions for the 8th bot from the player and other bots
extern vector <string> opinions9; //Vector containing the opinions for the 9th bot from the player and other bots
extern vector <string> suits_initials;
//we'll also use the previous vector: extern vector <bool> available to determine if a bot is available to talk to

extern vector <int> Soptions;
extern vector <bool> finishedTalking;
extern vector <int> talkedto1;
extern vector <int> talkedto2;
extern vector <int> talkedto3;
extern vector <int> talkedto4;
extern vector <int> talkedto5;
extern vector <int> talkedto6;
extern vector <int> talkedto7;
extern vector <int> talkedto8;
extern vector <int> talkedto9;
extern vector <int> isInside;
extern vector <int> isInside1;
extern vector <int> isInside2;
extern vector <int> isInside3;
extern vector <int> isInside4;
extern vector <int> isInside5;
extern vector <int> isInside6;
extern vector <int> isInside7;
extern vector <int> isInside8;
extern vector <int> Savailableplayers;
extern vector <int> Ravailableplayers;
extern short int decider;
extern short int wIndex;

extern short int wOptions;
void playeranswer(); //Prompt the player to answer with their suit
void suitcounter(); //Count how many of each suit a bot has taken in as an opinion
void setOptions(); //Set how many talking options the bots have based on number of alive bots
void newRound(); //Initiate a new round once the previous one has ended
extern vector <string> playerop; //Player opinions, accumulating them from talking to other bots
extern vector <string> suitsO1; //Suits as actual symbols, not codes or symbols, for option 1
extern vector <string> suitsO2; //Suits as just initials for option 2
extern vector <string> unspokenbots; //Kinda like allplayers vector but this is just to show who is available to talk (who the player hasn't talked to)
