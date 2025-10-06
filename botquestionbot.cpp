#include "header.h"
using std::cout;
using std::endl;
short int sender;
short int receiver;
vector <int> Soptions = {4, 4, 4, 4, 4, 4, 4, 4, 4}; //On start, each bot can talk to a total of 4 bots
vector <bool> finishedTalking = {false, false, false, false, false, false, false, false, false}; 
//Check if 0 is inside
vector <int> isInside = {0, 0, 0, 0, 0, 0, 0, 0, 0}; 
/* ^ Check if a bot has finished talking to all available options
If they are all true, we're moving to "Cell Time" aka time to answer with the suits*/
static short int randomizer;
vector <string> opinions1;
vector <string> opinions2;
vector <string> opinions3;
vector <string> opinions4;
vector <string> opinions5;
vector <string> opinions6;
vector <string> opinions7;
vector <string> opinions8;
vector <string> opinions9;
vector <string> suits_initials = {"h", "d", "c", "s"};
vector <int> talkedto1 = {10};
vector <int> talkedto2 = {10};
vector <int> talkedto3 = {10};
vector <int> talkedto4 = {10};
vector <int> talkedto5 = {10};
vector <int> talkedto6 = {10};
vector <int> talkedto7 = {10};
vector <int> talkedto8 = {10};
vector <int> talkedto9 = {10};
vector <int> Savailableplayers = {0, 1, 2, 3, 4, 5, 6, 7, 8};
vector <int> Ravailableplayers = {0, 1, 2, 3, 4, 5, 6, 7, 8};
short int decider;
bool allfinished = false;
//This function establishes the sender and receiver
void chooseS() {
    if (finishedTalking[0] && finishedTalking[1] && finishedTalking[2] && finishedTalking[3] && finishedTalking[4] && finishedTalking[5] && finishedTalking[6] && finishedTalking[7] && finishedTalking[8]) {
                cout<<endl;
                cout<<"All bots finished talking to each other."<<endl;
                cout<<"-----------------------------------------"<<endl<<endl;
                cout<<"                         [!] It is now \"Cell Time\"! It's time to give your answer about your suit."<<endl<<endl;
                playeranswer();
    }
        decider = rand()%Savailableplayers.size();
        sender = Savailableplayers[decider];
        if (sender == 0 && Soptions[0] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[0] = true;
            chooseS();
        } else if (sender == 1 && Soptions[1] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[1] = true;
            chooseS();
        } else if (sender == 2 && Soptions[2] <= 0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[2] = true;
            chooseS();
        } else if (sender == 3 && Soptions[3] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[3] = true;
            chooseS();
        } else if (sender == 4 && Soptions[4] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[4] = true;
            chooseS();
        } else if (sender == 5 && Soptions[5] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[5] = true;
            chooseS();
        } else if (sender == 6 && Soptions[6] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[6] = true;
            chooseS();
        } else if (sender == 7 && Soptions[7] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[7] = true;
            chooseS();
        } else if (sender == 8 && Soptions[8] <=0) {
            Savailableplayers.erase(Savailableplayers.begin()+decider);
            finishedTalking[8] = true;
            chooseS();
        }
        //The bot who will "send" the question
        if (!finishedTalking[0] || !finishedTalking[1] || !finishedTalking[2] || !finishedTalking[3] || !finishedTalking[4] || !finishedTalking[5] || !finishedTalking[6] || !finishedTalking[7] || !finishedTalking[8]) {
                chooseR();
        }
        
}
void chooseR() {
        receiver = Ravailableplayers[rand()%Ravailableplayers.size()]; //The bot that receives the question; //Will be rand()%(alivePlayers) after debugging
        while (receiver == sender) {
            chooseR();
    }
    answerBot();
}

//Decide based on the bots' role what suit to offer to another BOT (B-B)
void answerBot() {
    //If the receiver is chosen as the first bot
    if (receiver == 0) {
            //And if the bot is also available to talk (isn't dead)
                //And the bot has the Innocent role, return the true suit
                if (role_keeper[0] == "i") {
                    //Check which bot sent the request (0-8 by index), but it can't be equal to receiver index
                    if (sender == 1) {
                        if (Soptions[1] > 0) {
                            //Check if the 2nd bot at any point in time has talked to the 1st bot. If it did, choose another receiver to talk to
                                if (talkedto2[0] != 0) {
                                        if (isInside[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 0; isInside[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    
                                } else {
                                    chooseR();
                                }
                            
                            
                            
                        } else {
                            finishedTalking[1] = true;
                            
                            chooseS();
                        }
                        
                    } else if (sender == 2) {
                        if (Soptions[2] > 0) {
                            if (talkedto3[2]!=0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                            } else {
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[2] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 3) {
                        if (Soptions[3] > 0) {
                            if (talkedto4[3]!=0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[3] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 4) {
                        if (Soptions[4] > 0) {
                            if (talkedto5[0]!=0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[4] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 5) {
                        if (Soptions[5] > 0) {
                            if (talkedto6[0]!=0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                            }
                        
                        
                        } else {
                            finishedTalking[5] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 6) {
                        if (Soptions[6] > 0) {
                            if (talkedto7[0]!=0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                               
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[6] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 7) {
                        if (Soptions[7] > 0) {
                            if (talkedto8[0]!=0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[7] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 8) {
                        if (Soptions[8] > 0) {
                            if (talkedto9[0]!=0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[8] = true;  
                            chooseS();
                        }
                        
                    } 
                }
                //If Bot 1 is Jack of Hearts
                else if (role_keeper[0] == "j") {
                    if (sender == 1) {
                        if (Soptions[1] > 0) {
                            for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[1] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto2[0]!=0) {
                                    if (isInside[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 0; isInside[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[1] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 2) {
                        if (Soptions[2] > 0) {
                            for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[2] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto3[0]!=0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                        } else {
                            finishedTalking[2] = true;  
                            chooseS();
                        }
                        
                } else if (sender == 3) {
                    if (Soptions[3] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[3] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto4[0]!=0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[3] = true;  
                        chooseS();
                    }
                        
                } else if (sender == 4) {
                    if (Soptions[4] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[4] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto5[0]!=0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[4] = true;  
                        chooseS();
                    }
                        
                } else if (sender == 5) {
                    if (Soptions[5] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[5] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto6[0]!=0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                               
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[5] = true;  
                        chooseS();
                    }
                        
                } else if (sender == 6) {
                    if (Soptions[6] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[6] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto7[0]!=0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[6] = true;  
                        chooseS();
                    }
                        
                } else if (sender == 7) {
                    if (Soptions[7] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[7] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto8[0]!=0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    }
                                    
                                
                               
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[7] = true;  
                        chooseS();
                    }
                        
                } else if (sender == 8) {
                    if (Soptions[8] > 0) {
                         for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[8] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto9[0]!=0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[8] = true;  
                        chooseS();
                    }
                       
                }
            }
            //If Bot 1 is Double Agent
            else if (role_keeper[0] == "da") {
                if (sender == 1) {
                    if (Soptions[1] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[1] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto2[0]!=0) {
                                    if (isInside[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 0; isInside[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto2[0]!=0) {
                                    if (isInside[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 0; isInside[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[1] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 2) {
                    if (Soptions[2] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[2] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto3[0]!=0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto3[0]!=0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                               
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[2] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 3) {
                    if (Soptions[3] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[3] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto4[0]!=0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto4[0]!=0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                   
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[3] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 4) {
                    if (Soptions[4] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[4] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto5[0]!=0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
 
                            }
                        
                        
                    }
                    else {
                            if (talkedto5[0]!=0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[4] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 5) {
                    if (Soptions[5] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[5] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto6[0]!=0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                            }
                        
                        
                    }
                    else {
                            if (talkedto6[0]!=0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[5] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 6) {
                    if (Soptions[6] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[6] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto7[0]!=0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto7[0]!=0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[6] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 7) {
                    if (Soptions[7] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[7] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto8[0]!=0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                                
                            }
                        
                        
                    }
                    else {
                            if (talkedto8[0]!=0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                                
                            }
                        
                        
                    }
                    } else {
                        finishedTalking[7] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 8) {
                    if (Soptions[8] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[8] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto9[0]!=0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                                
                            }
                        
                        
                    }
                    else {

                            if (talkedto9[0]!=0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                                
                            }
                        
                        
                    }
                    } else {
                        finishedTalking[8] = true;  
                        chooseS();
                    }
                    
                }
            }
    
} else if (receiver == 1) {
    rBot2();
} else if (receiver == 2) {
    rBot3();
} else if (receiver == 3) {
    rBot4();
} else if (receiver == 4) {
    rBot5();
} else if (receiver == 5) {
    rBot6();
} else if (receiver == 6) {
    rBot7();
} else if (receiver == 7) {
    rBot8();
} else if (receiver == 8) {
    rBot9();
}
}
