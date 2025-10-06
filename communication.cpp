#include "header.h"
using std::cout;
using std::endl;
using std::cin;
string playerc; //Bot of choice that you wanna talk to
vector <string> playerop;
short int x;
string responses[] = {
    "- Yo! So you chose to talk to me huh... I assume you'd want to know to your suit? Very well. Your suit is...",
    "- Oh hi. It's about the suit right? I'll cut to the chase - it's ",
    "- Ugh you again? Can't help it, guess I'll help you out. Your suit is: ",
    "- Ay I think I've seen you before... what's up? Wanna talk about something? No? That's fine too... you want me to tell you what your suit is right? I can tell you that it's clearly a "};

void ChatLog() {
    x = rand()%3; //0-2 seconds
    std::this_thread::sleep_for(std::chrono::seconds(x));
    //Chat log ofr B-B
    //Once sender and receiver have been decided, check the index to display the correct names
    //Sender decider
    switch(sender) {
        case 0:
            cout<<"["<<allplayers[0]<<"] talked to ";
            break;
        case 1:
            cout<<"["<<allplayers[1]<<"] talked to ";
            break;
        case 2:
            cout<<"["<<allplayers[2]<<"] talked to ";
            break;
        case 3:
            cout<<"["<<allplayers[3]<<"] talked to ";
            break;
        case 4:
            cout<<"["<<allplayers[4]<<"] talked to ";
            break;
        case 5:
            cout<<"["<<allplayers[5]<<"] talked to ";
            break;
        case 6:
            cout<<"["<<allplayers[6]<<"] talked to ";
            break;
        case 7:
            cout<<"["<<allplayers[7]<<"] talked to ";
            break;
        case 8:
            cout<<"["<<allplayers[8]<<"] talked to ";
            break;
    }
    //Receiver decider
    switch(receiver) {
        case 0:
            cout<<"["<<allplayers[0]<<"]."<<endl;
            break;
        case 1:
            cout<<"["<<allplayers[1]<<"]."<<endl;
            break;
        case 2:
            cout<<"["<<allplayers[2]<<"]."<<endl;
            break;
        case 3:
            cout<<"["<<allplayers[3]<<"]."<<endl;
            break;
        case 4:
            cout<<"["<<allplayers[4]<<"]."<<endl;
            break;
        case 5:
            cout<<"["<<allplayers[5]<<"]."<<endl;
            break;
        case 6:
            cout<<"["<<allplayers[6]<<"]."<<endl;
            break;
        case 7:
            cout<<"["<<allplayers[7]<<"]."<<endl;
            break;
        case 8:
            cout<<"["<<allplayers[8]<<"]."<<endl;
            break;
    }
    suits_initials = {"h", "d", "c", "s"};
        if (!finishedTalking[0] || !finishedTalking[1] || !finishedTalking[2] || !finishedTalking[3] || !finishedTalking[4] || !finishedTalking[5] || !finishedTalking[6] || !finishedTalking[7] || !finishedTalking[8]) {
                chooseS();
        }
    
}
void comm() {
    if (talkablebots > 0) {
        cout<<"Talk to: ";
        cin>>playerc;
        cin.clear();
        cin.ignore(10000,'\n');
        //First bot
        if (playerc == allplayers[0]) {
            if (isAlive[0]) {
                if (available[0]) {
                cout<<"You chose to talk to "<<allplayers[0]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[0]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[0] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[0]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[0]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        
        } 
        //Second bot
        else if (playerc == allplayers[1]) {
            if (isAlive[1]) {
                if (available[1]) {
                cout<<"You chose to talk to "<<allplayers[1]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[1]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[1] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                            }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[1]<<"."<<endl<<endl;
                cout<<"Choose someone else fromt the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[1]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Third bot
        else if (playerc == allplayers[2]) {
            if (isAlive[2]) {
                if (available[2]) {
                cout<<"You chose to talk to "<<allplayers[2]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[2]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[2] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[2]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[2]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Fourth bot
        else if (playerc == allplayers[3]) {
            if (isAlive[3]) {
                if (available[3]) {
                cout<<"You chose to talk to "<<allplayers[3]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[3]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[3] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[3]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[3]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Fifth bot
        else if (playerc == allplayers[4]) {
            if (isAlive[4]) {
                if (available[4]) {
                cout<<"You chose to talk to "<<allplayers[4]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[4]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[4] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[4]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[4]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Sixth bot
        else if (playerc == allplayers[5]) {
            if (isAlive[5]) {
                if (available[5]) {
                cout<<"You chose to talk to "<<allplayers[5]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[5]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[5] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[5]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[5]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Seventh bot
        else if (playerc == allplayers[6]) {
            if (isAlive[6]) {
                if (available[6]) {
                cout<<"You chose to talk to "<<allplayers[6]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[6]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[6] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[6]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[6]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Eigth bot
        else if (playerc == allplayers[7]) {
            if (isAlive[7]) {
                if (available[7]) {
                cout<<"You chose to talk to "<<allplayers[7]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[7]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[7] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                }
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[7]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[7]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        }
        //Ninth bot
        else if (playerc == allplayers[8]) {
            if (isAlive[8]) {
                if (available[8]) {
                cout<<"You chose to talk to "<<allplayers[8]<<"."<<endl<<endl;
                talkablebots--; //Reduce the number by 1
                cout<<"["<<allplayers[8]<<"]: "<<endl<<endl;
                cout<<responses[rand()%4]<<"[";
                answer();
                cout<<"]."<<endl<<endl;
                available[8] = false;
                if (talkablebots > 0) {
                    cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
                    cout<<"List of available players to talk to: ";
                    for (int b = 0; b <= unspokenbots.size()-1; b++) {
                        if (unspokenbots[b] == playerc) {
                            unspokenbots.erase(unspokenbots.begin()+b);
                        }
                    }
                    for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                } 
                comm();
            } else {
                cout<<"You already talked to "<<allplayers[8]<<"."<<endl<<endl;
                cout<<"Choose someone else from the list: ";
                for (int a = 0; a <= unspokenbots.size()-1; a++) {
                        if (a!=unspokenbots.size()-1) {
                            cout<<unspokenbots[a]<<", ";
                        } else {
                            cout<<unspokenbots[a]<<endl;
                        }
                        
                    }
                cout<<endl;
                comm();
            }
            } else {
                cout<<"[X] "<<allplayers[8]<<" was eliminated. They are no longer available to talk to. Choose someone else."<<endl;
                comm();
            }
            
        } 
        // If the player inputs anything other than a player's name, tell them to try again
        else {
            cout<<"[?] Unknown player name. Make sure you wrote the correct name and try again.";
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
        }
    } else if (talkablebots == 0) {
        //Reset all bots to be available (just on start, they will be set available on survivor checker afterwards for the next rounds)
        if (alivePlayers == 9) {
            for (int t = 0; t <= alivePlayers-1; t++) {
            available[t] = true;
        }
        }
        cout<<"                     -----------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"                                        [!] It is now time for you to tell the other players their suits."<<endl<<endl;
        cout<<"                     -----------------------------------------------------------------------------------------------------------"<<endl<<endl;
        botaskp(); //Time for the bots to quesion the player
    }
    
}