#include "header.h"
using std::cout;
static short int random;
short int iCounter = 0;
string fakesuit; //The wrong suit the Jack or Double Agent chooses to give the player
//Decide the suit to offer the PLAYER from a BOT (B-P)
void answer() {
    //First bot answer
    if (playerc == allplayers[0]) {
        if (role_keeper[0] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[0] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[0] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Second bot answer
    if (playerc == allplayers[1]) {
       if (role_keeper[1] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[1] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[1] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Third bot answer
    if (playerc == allplayers[2]) {
        if (role_keeper[2] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[2] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[2] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Fourth bot answer
    if (playerc == allplayers[3]) {
        if (role_keeper[3] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[3] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[3] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Fifth bot answer
    if (playerc == allplayers[4]) {
        if (role_keeper[4] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[4] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[4] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Sixth bot answer
    if (playerc == allplayers[5]) {
        if (role_keeper[5] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[5] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[5] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Seventh bot answer
    if (playerc == allplayers[6]) {
        if (role_keeper[6] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[6] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[6] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Eigth bot answer
    if (playerc == allplayers[7]) {
       if (role_keeper[7] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[7] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[7] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    //Ninth bot answer
    if (playerc == allplayers[8]) {
       if (role_keeper[8] == "i") {
        cout<<player[0];
        if (wOptions == 0) {
            if (player[0] == "\x03") {
            playerop.push_back("h");
        } else if (player[0] == "\x04") {
            playerop.push_back("d");
        } else if (player[0] == "\x05") {
            playerop.push_back("c");
        } else if (player[0] == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
    } else if (role_keeper[8] == "j") {
        for (int x = 0; x <=3; x++) {
            if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
            
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        
    } else if (role_keeper[8] == "da") {
        random = rand()%2;
        //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
        if (random == 0) {
            for (int x = 0; x <=3; x++) {
                if (wOptions == 0) {
                if (player[0] == suits[x]) {
                suits.erase(suits.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 1) {
                if (player[0] == suitsO1[x]) {
                suitsO1.erase(suitsO1.begin()+x); //Erase the player suit
            }
            } else if (wOptions == 2) {
                if (player[0] == suitsO2[x]) {
                suitsO2.erase(suitsO2.begin()+x); //Erase the player suit
            }
            }
        }
        if (wOptions == 0) {
            fakesuit = suits[rand()%3];
        } else if (wOptions == 1) {
            fakesuit = suitsO1[rand()%3];
        } else if (wOptions == 2) {
            fakesuit = suitsO2[rand()%3];
        }
        cout<<fakesuit;
        if (wOptions == 0) {
            if (fakesuit == "\x03") {
            playerop.push_back("h");
        } else if (fakesuit == "\x04") {
            playerop.push_back("d");
        } else if (fakesuit == "\x05") {
            playerop.push_back("c");
        } else if (fakesuit == "\x06") {
            playerop.push_back("s");
        } 
        } else if (wOptions == 1) {
            if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
        } else if (wOptions == 2) {
            if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
        }
        
        }
        else {
            cout<<player[0];
            if (wOptions == 0) {
                if (player[0] == "\x03") {
            playerop.push_back("h");
            } else if (player[0] == "\x04") {
                playerop.push_back("d");
            } else if (player[0] == "\x05") {
                playerop.push_back("c");
            } else if (player[0] == "\x06") {
                playerop.push_back("s");
            }
            } else if (wOptions == 1) {
                if (player[0] == "♥") {
            playerop.push_back("h");
        } else if (player[0] == "♦") {
            playerop.push_back("d");
        } else if (player[0] == "♣") {
            playerop.push_back("c");
        } else if (player[0] == "♠") {
            playerop.push_back("s");
        }
            } else if (wOptions == 2) {
                if (player[0] == "h") {
            playerop.push_back("h");
        } else if (player[0] == "d") {
            playerop.push_back("d");
        } else if (player[0] == "c") {
            playerop.push_back("c");
        } else if (player[0] == "s") {
            playerop.push_back("s");
        } 
            }
            
        }
    }
    }
    
}
