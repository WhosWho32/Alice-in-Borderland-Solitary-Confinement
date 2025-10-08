//Solitary Confinement game
//By WhosWho
//Last edited: October 8th
#include "header.h"
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
vector <string> suits = {"\x03","\x04","\x05","\x06"};
vector <string> suitsO1 = {"♥", "♦", "♣", "♠"};
vector <string> suitsO2 = {"h", "d", "c", "s"};
string suitable;
/* Heart is x03
 Diamond is x04
 Club is x05
 Spade is x06 */
vector <string> roles = {"i","i","i","da","da","da","da","da","j"};
vector <int> indexing = {0,1,2,3,4,5,6,7,8};
vector <string> player_suit;
vector <string> player;
vector <int> length;
short int Scounter = 0; //Count how many players are on a row
short int Ucounter = 0; //Counter for suits
short int j = 0; //Counter for name lengths
short int roles_num = 9;
short int alivePlayers = 9;
short int wIndex = 0;
string choice;
string tanswer; //Test answer
short int aCounter = 0; //Answer counter
short int wOptions = 0; //Which option chosen by the player to go on with the game. 0 = Default, 1 = Actual symbols, 2 = Suit initials
//Test if the player can actually see the suits or not, and adjust the gameplay based on that
void c();
void testing() {
    cin>>tanswer;
    cin.clear();
    cin.ignore(10000, '\n');
    if (tanswer == "y") {
        if (aCounter == 0) {
            cout<<"Great! So we will stick with the default settings. You may proceed with the game in that case."<<endl<<endl;
            cout<<"Read game info [i]"<<endl;
            cout<<"Start the game [s]"<<endl;
            c();
        } else if (aCounter == 1) {
            cout<<"Great! In that case, we're going to go with this option. Thanks for your patience! You may now proceed with the game."<<endl<<endl;
            wOptions = 1;
            cout<<"Read game info [i]"<<endl;
            cout<<"Start the game [s]"<<endl;
            c();
        }
        
    } else if (tanswer == "n") {
        if (aCounter == 0) {
            aCounter++;
            cout<<"I see. In that case, we'll try the next option."<<endl;
            cout<<"Can you see the following suit? It should be the diamond suit: [♦]"<<endl;
            cout<<"- I can see it! [y]"<<endl;
            cout<<"- I still can't see the suit... [n]"<<endl;
            cout<<"- Your choice: ";
            testing();
            } else if (aCounter == 1) {
                cout<<"I see. In that case, we're going to use the last option available. Instead of the suit symbol, we'll simply use the suit initial. Testing is over."<<endl<<endl;
                wOptions = 2;
                cout<<"Read game info [i]"<<endl;
                cout<<"Start the game [s]"<<endl;
                c();
            }
        
    } else {
        cout<<"[?] Unrecognised command. Make sure you answered with either 'y' or 'n', then try again."<<endl;
        cout<<"- You chose: ";
        testing(); 
    }
}
void newRow() {
    //Scounter should be 3 here
    if (Scounter > 2) {
        if (wIndex == 2) {
            wIndex = 3;
        } else if (wIndex == 5) {
            wIndex = 6;
        }
        //Once 3 names are written on a row, go below them
        cout<<endl;
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        //Write 3 suits and add the necessary spaces
        while (Ucounter < 3) {
            //For the first suit on the row
            if (first == 0) {
                for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
                cout<<" ";
             }
             if (isAlive[wIndex]) {
                cout<<"["<<suit_keeper[Ucounter]<<"]";
             } else {
                cout<<"   ";
             }
             //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
             if (nameLen_keeper[0] > 3) {
                for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
                cout<<" ";
             }
            }
            for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
            first = 1;
            }
            //For the 2nd and 3rd suit. j will be 1 and j will be 2, matching the 2nd and 3rd names
            if(Ucounter >= 1) {
                j++;
                for (int k = 1; k <= round((nameLen_keeper[j]/2)+(0.5))-2; k++) {
                    cout<<" ";
             }
            if (isAlive[wIndex]) {
                cout<<"["<<suit_keeper[Ucounter]<<"]";
            } else {
                cout<<"   ";
            }
            //If the name's length is bigger than 3, we'll add the difference of spaces until we match the last letter, and THEN add 10 spaces
            if (nameLen_keeper[j] > 3) {
                for (int k = 1; k <= round((nameLen_keeper[j]/2)+(0.5))-2; k++) {
                cout<<" ";
             }
            for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
            }
            //If it has 3 letters, simply add 10 spaces
            else {
                for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
            }
            }  
            Ucounter++;
            wIndex++;
        }
    }
    //Once the first row with names and suits is done, reset everything to prepare for the next rows
    cout<<endl<<endl;
    Scounter = 0;
    Ucounter = 0;
    j = 0;
    first = 0;
    suit_keeper.clear();
    nameLen_keeper.clear();
    length.clear();
    
}
void newRound() {
    cout<<R"(
                                        ____  ____  ____  ____      ____  __  _  _  ____         
                                 ___   (  __)(  _ \(  __)(  __)    (_  _)(  )( \/ )(  __)   ___  
                                (___)   ) _)  )   / ) _)  ) _)       )(   )( / \/ \ ) _)   (___) 
                                       (__)  (__\_)(____)(____)     (__) (__)\_)(_/(____)       
                )";
    cout<<endl<<endl;
    Savailableplayers.clear();
    Ravailableplayers.clear();
    suits = {"\x03","\x04","\x05","\x06"};
    suitsO1 = {"♥", "♦", "♣", "♠"};
    suitsO2 = {"h", "d", "c", "s"};
    //Choose a new suit for the player
    if (wOptions == 0) {
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
    } else if (wOptions == 1) {
                //Option 1: actual symbols, not codes
                player.push_back(suitsO1[rand()%4]);
                //Assign suit for the player
                if (player[0] == "♥") {
                    player_suit.push_back("h");
                }
                else if (player[0] == "♦") {
                    player_suit.push_back("d");
                }
                else if (player[0] == "♣") {
                    player_suit.push_back("c");
                }
                else if (player[0] == "♠") {
                    player_suit.push_back("s");
                }
            } else if (wOptions == 2) {
                //Option 2: just suit initials
                player.push_back(suitsO2[rand()%4]);
                //Assign suit for the player
                if (player[0] == "h") {
                    player_suit.push_back("h");
                }
                else if (player[0] == "d") {
                    player_suit.push_back("d");
                }
                else if (player[0] == "c") {
                    player_suit.push_back("c");
                }
                else if (player[0] == "s") {
                    player_suit.push_back("s");
                }
            } 
    
    //Check if the first bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[0]) {
        Savailableplayers.push_back(0);
        Ravailableplayers.push_back(0);
        length.push_back(allplayers[0].size());
        nameLen_keeper.push_back(length[0]);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[0] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[0] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[0] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[0] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[0] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[0] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[0] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[0] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == "h") {
                suit_keeper_i[0] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[0] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[0] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[0] = "s";
            }
        }
        available[0] = true;
        hasAsked[0] = false;
        whoq.push_back(0);
        if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
        cout<<allplayers[0];
        unspokenbots.push_back(allplayers[0]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        suit_keeper_i[0] = "x";
        finishedTalking[0] = true;
        length.push_back(allplayers[0].size());
        nameLen_keeper.push_back(length[0]);
        available[0] = false;
        if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
                cout<<" ";
             }
             cout<<" X ";
             //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
             if (nameLen_keeper[0] > 3) {
                for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
                cout<<" ";
             }
            }
            for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    
        
        Scounter++;
    }
    //Check if the second bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[1]) {
        Savailableplayers.push_back(1);
        Ravailableplayers.push_back(1);
        length.push_back(allplayers[1].size());
        nameLen_keeper.push_back(length[1]);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[1] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[1] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[1] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[1] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[1] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[1] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[1] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[1] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == "h") {
                suit_keeper_i[1] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[1] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[1] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[1] = "s";
            }
        }
        available[1] = true;
        hasAsked[1] = false;
        whoq.push_back(1);
        cout<<allplayers[1];
        unspokenbots.push_back(allplayers[1]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[1] = true;
        suit_keeper_i[1] = "x";
        length.push_back(allplayers[1].size());
        nameLen_keeper.push_back(length[1]);
        available[1] = false;
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[1]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[1] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[1]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }
        Scounter++;
    }
    //Check if the third bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[2]) {
        Savailableplayers.push_back(2);
        Ravailableplayers.push_back(2);
        length.push_back(allplayers[2].size());
        nameLen_keeper.push_back(length[2]);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[2] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[2] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[2] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[2] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[2] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[2] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[2] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[2] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == "h") {
                suit_keeper_i[2] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[2] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[2] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[2] = "s";
            }
        }
        available[2] = true;
        hasAsked[2] = false;
        whoq.push_back(2);
        cout<<allplayers[2];
        unspokenbots.push_back(allplayers[2]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[2] = true;
        suit_keeper_i[2] = "x";
        length.push_back(allplayers[2].size());
        nameLen_keeper.push_back(length[2]);
        available[2] = false;
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[2]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[2] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[2]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    newRow();
    //Check if the 4th bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[3]) {
        Savailableplayers.push_back(3);
        Ravailableplayers.push_back(3);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[3] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[3] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[3] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[3] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[3] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[3] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[3] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[3] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == "h") {
                suit_keeper_i[3] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[3] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[3] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[3] = "s";
            }
        }
        length.push_back(allplayers[3].size());
        nameLen_keeper.push_back(length[0]);
        if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
        available[3] = true;
        hasAsked[3] = false;
        whoq.push_back(3);
        cout<<allplayers[3];
        unspokenbots.push_back(allplayers[3]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[3] = true;
        suit_keeper_i[3] = "x";
        length.push_back(allplayers[3].size());
        nameLen_keeper.push_back(length[0]);
        available[3] = false;
        if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[0] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    //Check if the 5th bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[4]) {
        Savailableplayers.push_back(4);
        Ravailableplayers.push_back(4);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[4] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[4] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[4] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[4] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[4] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[4] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[4] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[4] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == "h") {
                suit_keeper_i[4] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[4] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[4] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[4] = "s";
            }
        }
        length.push_back(allplayers[4].size());
        nameLen_keeper.push_back(length[1]);
        available[4] = true;
        hasAsked[4] = false;
        whoq.push_back(4);
        cout<<allplayers[4];
        unspokenbots.push_back(allplayers[4]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[4] = true;
        suit_keeper_i[4] = "x";
        
        length.push_back(allplayers[4].size());
        nameLen_keeper.push_back(length[1]);
        available[4] = false;
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[1]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[1] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[1]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    //Check if the 6th bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[5]) {
        Savailableplayers.push_back(5);
        Ravailableplayers.push_back(5);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[5] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[5] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[5] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[5] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[5] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[5] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[5] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[5] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == "h") {
                suit_keeper_i[5] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[5] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[5] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[5] = "s";
            }
        }
        length.push_back(allplayers[5].size());
        nameLen_keeper.push_back(length[2]);
        available[5] = true;
        hasAsked[5] = false;
        whoq.push_back(5);
        cout<<allplayers[5];
        unspokenbots.push_back(allplayers[5]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[5] = true;
        suit_keeper_i[5] = "x";
        
        length.push_back(allplayers[5].size());
        nameLen_keeper.push_back(length[2]);
        available[5] = false;
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[2]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[5] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[2]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    newRow();
    //Check if the 7th bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[6]) {
        Savailableplayers.push_back(6);
        Ravailableplayers.push_back(6);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[6] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[6] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[6] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[6] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[6] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[6] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[6] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[6] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[0] = suitable;
            if (suitable == "h") {
                suit_keeper_i[6] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[6] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[6] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[6] = "s";
            }
        }
        length.push_back(allplayers[6].size());
        nameLen_keeper.push_back(length[0]);
        if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
        available[6] = true;
        hasAsked[6] = false;
        whoq.push_back(6);
        cout<<allplayers[6];
        unspokenbots.push_back(allplayers[6]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[6] = true;
        suit_keeper_i[6] = "x";
        
        length.push_back(allplayers[6].size());
        nameLen_keeper.push_back(length[0]);
        available[6] = false;
        if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[0] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[0]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    //Check if the 8th bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[7]) {
        Savailableplayers.push_back(7);
        Ravailableplayers.push_back(7);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[7] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[7] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[7] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[7] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[7] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[7] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[7] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[7] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[1] = suitable;
            if (suitable == "h") {
                suit_keeper_i[7] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[7] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[7] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[7] = "s";
            }
        }
        length.push_back(allplayers[7].size());
        nameLen_keeper.push_back(length[1]);
        available[7] = true;
        hasAsked[7] = false;
        whoq.push_back(7);
        cout<<allplayers[7];
        unspokenbots.push_back(allplayers[7]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[7] = true;
        suit_keeper_i[7] = "x";
        
        length.push_back(allplayers[7].size());
        nameLen_keeper.push_back(length[1]);
        available[7] = false;
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[1]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[1] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[1]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    //Check if the 9th bot is still alive. If it is, give it a new suit, otherwise move on to the next bot
    //Also check if it's the Jack of Hearts. If it is, but it's dead, then it's GAME CLEAR
    if (isAlive[8]) {
        Savailableplayers.push_back(8);
        Ravailableplayers.push_back(8);
        if (wOptions == 0) {
            suitable = suits[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == suits[0]) {
                suit_keeper_i[8] = "h";
            } else if (suitable == suits[1]) {
                suit_keeper_i[8] = "d";
            } else if (suitable == suits[2]) {
                suit_keeper_i[8] = "c";
            } else if (suitable == suits[3]) {
                suit_keeper_i[8] = "s";
            }
        } else if (wOptions == 1) {
            suitable = suitsO1[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == "♥") {
                suit_keeper_i[8] = "h";
            } else if (suitable == "♦") {
                suit_keeper_i[8] = "d";
            } else if (suitable == "♣") {
                suit_keeper_i[8] = "c";
            } else if (suitable == "♠") {
                suit_keeper_i[8] = "s";
            }
        } else if (wOptions == 2) {
            suitable = suitsO2[rand()%4];
            suit_keeper[2] = suitable;
            if (suitable == "h") {
                suit_keeper_i[8] = "h";
            } else if (suitable == "d") {
                suit_keeper_i[8] = "d";
            } else if (suitable == "c") {
                suit_keeper_i[8] = "c";
            } else if (suitable == "s") {
                suit_keeper_i[8] = "s";
            }
        }
        length.push_back(allplayers[8].size());
        nameLen_keeper.push_back(length[2]);
        available[8] = true;
        hasAsked[8] = false;
        whoq.push_back(8);
        cout<<allplayers[8];
        unspokenbots.push_back(allplayers[8]);
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
        Scounter++;
        allbotscounter++;
    } else {
        finishedTalking[8] = true;
        suit_keeper_i[8] = "x";
        length.push_back(allplayers[8].size());
        nameLen_keeper.push_back(length[2]);
        available[8] = false;
        //Add extra spaces until the middle of the name
        for (int k = 1; k <= round((nameLen_keeper[2]/2)+(0.5))-2; k++) {
            cout<<" ";
            }
        cout<<" X ";
        //If the length is bigger than 3, add again remaining spaces so ] matches the last letter and THEN add 10 extra spaces
        if (nameLen_keeper[8] > 3) {
        for (int k = 1; k <= round((nameLen_keeper[2]/2)+(0.5))-2; k++) {
        cout<<" ";
        }
    }
    for (int l = 1; l <= 25; l++) {
    cout<<" ";
    }

        Scounter++;
    }
    newRow();
    //Once all of the bots are displayed, display the player
    if (allbotscounter == alivePlayers) {
        if (alivePlayers == 9 || alivePlayers == 8) {
            talkablebots = 5;
        }
        if (alivePlayers == 7 || alivePlayers == 6) {
            talkablebots = 4;
        } else if (alivePlayers == 5 || alivePlayers == 4) {
            talkablebots = 3;
        }
        cout<<endl<<endl;
        for (int h = 1; h <= 63; h++) {
            cout<<" ";
        }
        cout<<"You"<<endl;
        for (int h = 1; h <= 63; h++) {
            cout<<" ";
        }
        cout<<"[?]"<<endl<<endl;
        cout<<endl<<endl;
        if (alivePlayers > 2) {
        cout<<"[!] It is now \"Free Time\"! Discuss with other players about your suit, and let other players know what suit they have!"<<endl;
                cout<<"Lying is allowed."<<endl;
                cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                cout<<"List of available players to talk to: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                    if (a!=unspokenbots.size()-1) {
                        cout<<unspokenbots[a]<<", ";
                    } else {
                        cout<<unspokenbots[a]<<endl;
                    }
                    
                }
                comm();
        } else {
            cout<<"[V] Looks like there are only 3 players remaining. Congratulations on surviving this far! GAME CLEAR!"<<endl;
        }
        
    }
}
class Game {
    public:
        Game() {
            if (wOptions == 0) {
                //Default option
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
            } else if (wOptions == 1) {
                //Option 1: actual symbols, not codes
                player.push_back(suitsO1[rand()%4]);
                //Assign suit for the player
                if (player[0] == "♥") {
                    player_suit.push_back("h");
                }
                else if (player[0] == "♦") {
                    player_suit.push_back("d");
                }
                else if (player[0] == "♣") {
                    player_suit.push_back("c");
                }
                else if (player[0] == "♠") {
                    player_suit.push_back("s");
                }
            } else if (wOptions == 2) {
                //Option 2: just suit initials
                player.push_back(suitsO2[rand()%4]);
                //Assign suit for the player
                if (player[0] == "h") {
                    player_suit.push_back("h");
                }
                else if (player[0] == "d") {
                    player_suit.push_back("d");
                }
                else if (player[0] == "c") {
                    player_suit.push_back("c");
                }
                else if (player[0] == "s") {
                    player_suit.push_back("s");
                }
            }
            
            //Create the bots
            Bots bot1, bot2, bot3, bot4, bot5, bot6, bot7, bot8, bot9;
        }
};
void c() {
    cout<<"Your choice: ";
    cin>>choice;
    cin.clear();
    cin.ignore(10000, '\n');
    if (choice == "i") {
        info();
    } else if (choice == "s") {
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
        Game start;
    } else {
        cout<<"[?] Unknown command. Please type one of the initials provided."<<endl;
        c();
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

int main()
{   
    srand(time(NULL));
    cout<<R"(
                                          ____        _ _ _                                          
                                         / ___|  ___ | (_) |_ __ _ _ __ _   _                        
                                         \___ \ / _ \| | | __/ _` | '__| | | |                       
                                          ___) | (_) | | | || (_| | |  | |_| |                       
                                         |____/ \___/|_|_|\__\__,_|_|   \__, |                       
                                          ____             __ _         |___/                    _   
                                         / ___|___  _ __  / _(_)_ __   ___ _ __ ___   ___ _ __  | |_ 
                                        | |   / _ \| '_ \| |_| | '_ \ / _ \ '_ ` _ \ / _ \ '_ \| __|
                                        | |__| (_) | | | |  _| | | | |  __/ | | | | |  __/ | | | |_ 
                                         \____\___/|_| |_|_| |_|_| |_|\___|_| |_| |_|\___|_| |_|\__|
    )";
    cout<<endl;
    cout<<"// Solitary Confinement game from the series Alice in Borderland, terminal version, with 9 players(bots)."<<endl;
    cout<<"// Program by: WhosWho"<<endl;
    cout<<"// Github: https://github.com/WhosWho32"<<endl<<endl<<endl;
    cout<<"If this is your first time playing, it is recommended that you first read all the information regarding this game. Otherwise, you may go ahead and start."<<endl;
    cout<<"However, before we start we have to make sure that you can actually play. Let's take a small test. A random suit will be displayed. Type 'y' if you can see it, otherwise type 'n' to choose a different option."<<endl;
    cout<<"Can you see the following suit? It should be the heart suit: ["<<"\x03"<<"]"<<endl;
    cout<<"I can see it! [y]"<<endl;
    cout<<"I can't see it. Give me another option. [n]"<<endl;
    cout<<"- You chose: ";
    testing();
    
}
