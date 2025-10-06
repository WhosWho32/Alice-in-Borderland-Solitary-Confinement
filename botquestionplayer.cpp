#include "header.h"
using std::cout;
using std::endl;
using std::cin;
string panswer;
short int which_bot; //Which bot will ask the question
vector <int> whoq = {0,1,2,3,4,5,6,7,8};
short int askedq = 0;
short int d;
vector <bool> hasAsked = {false, false, false, false, false, false, false, false, false}; //Check if the bot has already asked the question. If they did, re-rool so another bot can ask
vector <string> bquestions = {"- Hey man wassup, I helped you before with your suit so can you please help me with mine now? What would my suit be?",
    "- Yo, glad to see you around. Care to help me with my suit, friend?",
    "- Tell me my suit so I can survive.",
    "- HOLD ON, THAT'S YOU RIGHT?? I'M SO GLAD TO SEE YOU! HEY, WHAT IS MY SUIT? I REALLYYYY NEED TO KNOW."};
void botaskp();
void PANSWER() {
    cin>>panswer;
    cin.clear();
    cin.ignore(10000, '\n');
    if (panswer == "h") {
        cout<<"Heart."<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------"<<endl<<endl;
        switch (which_bot) {
            case 0:
                opinions1.push_back("h");
                hasAsked[0] = true;
                break;
            case 1:
                opinions2.push_back("h");
                hasAsked[1] = true;
                break;
            case 2:
                opinions3.push_back("h");
                hasAsked[2] = true;
                break;
            case 3:
                opinions4.push_back("h");
                hasAsked[3] = true;
                break;
            case 4:
                opinions5.push_back("h");   
                hasAsked[4] = true;
                break;
            case 5:
                opinions6.push_back("h");
                hasAsked[5] = true;
                break;
            case 6:
                opinions7.push_back("h");
                hasAsked[6] = true;
                break;
            case 7:
                opinions8.push_back("h");
                hasAsked[7] = true;
                break;
            case 8:
                opinions9.push_back("h");
                hasAsked[8] = true;
                break;
        }
        if (alivePlayers == 9 || alivePlayers == 8) {
            if (askedq < 4) {
            cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
            botaskp();
        } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 7 || alivePlayers == 6) {
            if (askedq < 3) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 5 || alivePlayers == 4) {
            if (askedq < 2) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
            }
        }
        
    } else if (panswer == "d") {
        cout<<"Diamond."<<endl<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------"<<endl<<endl;
        switch (which_bot) {
            case 0:
                opinions1.push_back("d");
                hasAsked[0] = true;
                break;
            case 1:
                opinions2.push_back("d");
                hasAsked[1] = true;
                break;
            case 2:
                opinions3.push_back("d");
                hasAsked[2] = true;
                break;
            case 3:
                opinions4.push_back("d");
                hasAsked[3] = true;
                break;
            case 4:
                opinions5.push_back("d");
                hasAsked[4] = true;
                break;
            case 5:
                opinions6.push_back("d");
                hasAsked[5] = true;
                break;
            case 6:
                opinions7.push_back("d");
                hasAsked[6] = true;
                break;
            case 7:
                opinions8.push_back("d");
                hasAsked[7] = true;
                break;
            case 8:
                opinions9.push_back("d");
                hasAsked[8] = true;
                break;
        }
        if (alivePlayers == 9 || alivePlayers == 8) {
            if (askedq < 4) {
            cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
            botaskp();
        } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 7 || alivePlayers == 6) {
            if (askedq < 3) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 5 || alivePlayers == 4) {
            if (askedq < 2) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
            }
        }
    } else if (panswer == "c") {
        cout<<"Club."<<endl<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------"<<endl<<endl;
        switch (which_bot) {
            case 0:
                opinions1.push_back("c");
                hasAsked[0] = true;
                break;
            case 1:
                opinions2.push_back("c");
                hasAsked[1] = true;
                break;
            case 2:
                opinions3.push_back("c");
                hasAsked[2] = true;
                break;
            case 3:
                opinions4.push_back("c");
                hasAsked[3] = true;
                break;
            case 4:
                opinions5.push_back("c");
                hasAsked[4] = true;
                break;
            case 5:
                opinions6.push_back("c");
                hasAsked[5] = true;
                break;
            case 6:
                opinions7.push_back("c");
                hasAsked[6] = true;
                break;
            case 7:
                opinions8.push_back("c");
                hasAsked[7] = true;
                break;
            case 8:
                opinions9.push_back("c");
                hasAsked[8] = true;
                break;
        }
        if (alivePlayers == 9 || alivePlayers == 8) {
            if (askedq < 4) {
            cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
            botaskp();
        } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 7 || alivePlayers == 6) {
            if (askedq < 3) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 5 || alivePlayers == 4) {
            if (askedq < 2) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
            }
        }
    } else if (panswer == "s") {
        cout<<"Spade."<<endl<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------"<<endl<<endl;
        switch (which_bot) {
            case 0:
                opinions1.push_back("s");
                hasAsked[0] = true;
                break;
            case 1:
                opinions2.push_back("s");
                hasAsked[1] = true;
                break;
            case 2:
                opinions3.push_back("s");
                hasAsked[2] = true;
                break;
            case 3:
                opinions4.push_back("s");
                hasAsked[3] = true;
                break;
            case 4:
                opinions5.push_back("s");
                hasAsked[4] = true;
                break;
            case 5:
                opinions6.push_back("s");
                hasAsked[5] = true;
                break;
            case 6:
                opinions7.push_back("s");
                hasAsked[6] = true;
                break;
            case 7:
                opinions8.push_back("s");
                hasAsked[7] = true;
                break;
            case 8:
                opinions9.push_back("s");
                hasAsked[8] = true;
                break;
        }
        if (alivePlayers == 9 || alivePlayers == 8) {
            if (askedq < 4) {
            cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
            botaskp();
        } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 7 || alivePlayers == 6) {
            if (askedq < 3) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
        }
        } else if (alivePlayers == 5 || alivePlayers == 4) {
            if (askedq < 2) {
                cout<<"[!] Another player would like to discuss with you about their suit."<<endl<<endl;
                botaskp();
            } else {
                cout<<"         [!] The players have finished questioning you about their suit."<<endl<<endl;
                cout<<"[Chat Log]"<<endl;
                cout<<"----------"<<endl<<endl;
                setOptions();
                chooseS();
            }
        }
        
    } else {
        cout<<"[?] Unknown suit initial. Make sure you wrote the correct initial for the respective suit, then try again."<<endl;
        cout<<"[Player/You] The suit that you have is... ";
        PANSWER();
    }
}
void botaskp() {
    d = rand()%(whoq.size());
    which_bot = whoq[d]; //Bots have indexes from 0 to (alivePlayers - 1) so it's good
    whoq.erase(whoq.begin()+d);
    //If it selects the 1st bot and it is alive:
    if (which_bot == 0) {
        if (isAlive[0]) {
            if (!hasAsked[0]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[0]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        } 
        } else {
            botaskp();
        }
        
    }
    
    //If it selects the 2nd bot and it is alive:
    if (which_bot == 1) {
        if (isAlive[1]) {
            if (!hasAsked[1]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[1]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
    }

    //If it selects the 3rd bot and it is alive:

    if (which_bot == 2) {
        if (isAlive[2]) {
             if (!hasAsked[2]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[2]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
       
    }

    //If it selects the 4th bot and it is alive:
    if (which_bot == 3) {
        if (isAlive[3]) {
            if (!hasAsked[3]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[3]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
        
    }

    //If it selects the 5th bot and it is alive:
    if (which_bot == 4) {
        if (isAlive[4]) {
            if (!hasAsked[4]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[4]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
        
    }

    //If it selects the 6th bot and it is alive:
    if (which_bot == 5) {
        if (isAlive[5]) {
            if (!hasAsked[5]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[5]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
        
    }

    //If it selects the 7th bot and it is alive:
    if (which_bot == 6) {
        if (isAlive[6]) {
            if (!hasAsked[6]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[6]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
        
    }

    //If it selects the 8th bot and it is alive:
    if (which_bot == 7) {
        if (isAlive[7]) {
            if (!hasAsked[7]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[7]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
        }
        } else {
            botaskp();
        }
        
    }

    //If it selects the 9th bot and it is alive:
    if (which_bot == 8) {
        if (isAlive[8]) {
            if (!hasAsked[8]) {
            //Write the name of the bot, then the question
            cout<<"["<<allplayers[8]<<"]: "<<endl<<endl;
            cout<<bquestions[rand()%4]<<endl<<endl;
            cout<<"[!] Write the initial for the suit that the player has. Lying is also allowed."<<endl;
            cout<<"Heart suit initial: h | Diamond suit initial: d | Club suit initial: c | Spade suit initial: s"<<endl;
            cout<<"[Player/You] The suit that you have is... ";
            askedq++;
            PANSWER();
        } else {
            if (alivePlayers == 9 || alivePlayers == 8) {
                if (askedq < 4) {
                botaskp();
            }
            } else if (alivePlayers == 7 || alivePlayers == 6) {
                if (askedq < 3) {
                    botaskp();
                }
            } else if (alivePlayers == 5 || alivePlayers == 4)  {
                if (askedq < 2) {
                    botaskp();
                }
            } 
            
            
        }
        } else {
            botaskp();
        }
        
    }

}