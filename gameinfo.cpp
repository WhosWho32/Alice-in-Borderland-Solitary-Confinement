#include <iostream>
#include "header.h"
using std::cout;
using std::cin;
using std::endl;
string go;
void proceed() {
  cout<<"Proceed with the game? [y/n]: ";
  cin>>go;
  cin.clear();
  cin.ignore(10000, '\n');
  if (go == "y") {
        cout<<endl<<endl;
        for (int d = 1; d<=55; d++) {
            cout<<" ";
        }
         cout<<R"(
                                        ____  ____  ____  ____      ____  __  _  _  ____         
                                 ___   (  __)(  _ \(  __)(  __)    (_  _)(  )( \/ )(  __)   ___  
                                (___)   ) _)  )   / ) _)  ) _)       )(   )( / \/ \ ) _)   (___) 
                                       (__)  (__\_)(____)(____)     (__) (__)\_)(_/(____)       
                )";
        cout<<endl<<endl;
        player.push_back(suits[rand()%4]);
        //Assign suit for the player
        if (player[0] == "\x04") {
            player_suit.push_back("d");
        }
        else if (player[0] == "\x03") {
            player_suit.push_back("h");
        }
        else if (player[0] == "\x05") {
            player_suit.push_back("c");
        }
        else if (player[0] == "\x06") {
            player_suit.push_back("s");
        }
        //Create the bots
        Bots bot1, bot2, bot3, bot4, bot5, bot6, bot7, bot8, bot9;
  } else {
    cout<<"[?] Unknown command. Make sure you answer with 'y' if you'd like to start the game."<<endl;
    proceed();
  }

}
void info() {
    cout<<R"(  

                                                          /$$$$$$            /$$$$$$              
                                                         |_  $$_/           /$$__  $$             
                                                           | $$   /$$$$$$$ | $$  \__//$$$$$$      
                                                           | $$  | $$__  $$| $$$$   /$$__  $$     
                                                           | $$  | $$  \ $$| $$_/  | $$  \ $$     
                                                           | $$  | $$  | $$| $$    | $$  | $$     
                                                          /$$$$$$| $$  | $$| $$    |  $$$$$$/     
                                                         |______/|__/  |__/|__/     \______/      
                                                                                              
                                                .----------------------------------------------------.
                                                |                                                    |
                                                |                                                    |
                                                |                SOLITARY CONFINEMENT                |
                                                |                                                    |
                                                |                                                    |
                                                |                - Game information -                |
                                                |                                                    |
                                                |                                                    |
                                                |        Solitary Confinement is one of the many     |
                                                |        games present in the Alice in Borderland    |
                                                |        series. In this game, you are trapped       |
                                                |        with other players inside a building,       |
                                                |        wearing a collar around your and their      |
                                                |        neck. On the back of the collar, there      |
                                                |        will be displayed one of the 4 suits:       |
                                                |                                                    |
                                                |             Heart, Diamond, Club, Spade            |
                                                |                                                    |
                                                |        In order to survive, you have 2 options:    |
                                                |                                                    |
                                                |        1. You have to enter your cell and offer    |
                                                |        the correct suit, located on the back of    |
                                                |        your collar.                                |
                                                |        However, you cannot know your suit unless   |
                                                |        you talk to other players to find out       |
                                                |        your suit. Survive until less than 4        |
                                                |        players are alive, including yourself.      |
                                                |                                                    |
                                                |                                                    |  
                                                |                                                    |
                                                |        2. You have to kill the the Jack of Hearts  |
                                                |        by lying about their suit, so they enter    |
                                                |        the wrong one inside their cell.            |
                                                |                                                    |
                                                |                                                    |
                                                |        This is a good time to talk about the       |
                                                |        roles of this game. In the show, there      |
                                                |        is only the Jack of Hearts, but since       |
                                                |        you are playing with bots here,             |
                                                |        there have been added 2 extra roles.        |
                                                |                                                    |
                                                |                                                    |
                                                |                                                    |
                                                |                                                    |   
                                                |       The roles are the following:                 |
                                                |                                                    |
                                                |       i) Innocent: Bots with this role will        |
                                                |       ALWAYS tell you the correct suit you have.   |
                                                |                                                    |
                                                |       ii) Double agent: In real life,              |
                                                |       people may choose to tell you the truth      |
                                                |       or lie. Likewise, bots assigned with this    |
                                                |       role will choose to either tell you the      |
                                                |       correct suit you have or lie about it.       |
                                                |                                                    |
                                                |       iii) Jack of Hearts: there will be only      |
                                                |       1 bot with this role, and it will ALWAYS     |
                                                |       lie to you about your suit.                  |
                                                |                                                    |
                                                |       Note: you won't know ANY of the bots' roles  |
                                                |       until the very end of the game, so it is     |
                                                |       up to you to determine whether you should    |
                                                |       or should not trust their word.              |
                                                |                                                    |
                                                |                                                    |
                                                |                                                    |
                                                |                                                    |
                                                |                    - Free Time -                   |
                                                |                                                    |
                                                |       During Free Time, you can talk to other      |
                                                |       players and ask them about your suit.        |
                                                |       Don't worry, for the sake of simplicity      |
                                                |       the bots will always answer your calls.      |
                                                |       Moreover, bots may also want to discuss      |
                                                |       with you about their own suit, since         |
                                                |       they can't figure it out on their own. You   |
                                                |       will also have to provide them with an       |
                                                |       answer, though it is up to YOU if you tell   |
                                                |       the truth or lie to them. Each player's      | 
                                                |       suit will be displayed under their name,     |
                                                |       except yours will be replaced with a "?".    |
                                                |       There will be a chat log available for       |
                                                |       you to check out, where you can see          |
                                                |       who communicated with who, which will        |
                                                |       perhaps help you determine who is            |
                                                |       trustworthy or not, or if they are the       |
                                                |       Jack of Hearts or not.                       |
                                                |                                                    |
                                                |       Once Free Time is over, you will have to     |
                                                |       enter your cell and write the initial for    |
                                                |       the suit YOU THINK you have. If you are      |
                                                |       right, you will survive and move on to the   |
                                                |       next round, otherwise you will be            |
                                                |       eliminated. Bots that did not guess          |
                                                |       correctly will have an "X" instead of their  |
                                                |       names.                                       |
                                                |                                                    |
                                                |                                                    |
                                                |                                                    |
                                                |                   - Good luck! -                   |
                                                |                                                    |
                                                '----------------------------------------------------'
                                                )";
      cout<<endl<<endl;
      proceed();
}
