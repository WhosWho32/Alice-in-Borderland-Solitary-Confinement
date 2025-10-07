#include "header.h"
using std::cout;
using std::endl;
short int sender;
short int receiver;
vector <int> Soptions = {4, 4, 4, 4, 4, 4, 4, 4, 4}; //On start, each bot can talk to a total of 4 bots
vector <bool> finishedTalking = {false, false, false, false, false, false, false, false, false}; 
//Check if 0 is inside
vector <int> isInside = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside2 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside3 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside4 = {0, 0, 0, 0, 0, 0, 0, 0, 0}; 
vector <int> isInside5 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside6 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside7 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> isInside8 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
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
    if (receiver == 0) {
        answerBot(0);
    } else if (receiver == 1) {
        answerBot(1);
    } else if (receiver == 2) {
        answerBot(2);
    } else if (receiver == 3) {
        answerBot(3);
    } else if (receiver == 4) {
        answerBot(4);
    } else if (receiver == 5) {
        answerBot(5);
    } else if (receiver == 6) {
        answerBot(6);
    } else if (receiver == 7) {
        answerBot(7);
    } else if (receiver == 8) {
        answerBot(8);
    }
}

//Decide based on the bots' role what suit to offer to another BOT (B-B)
void answerBot(int a) {
            //This function will activate for receiver = a
                //And the bot has the Innocent role, return the true suit
                if (role_keeper[a] == "i") {
                    //Check which bot sent the request (0-8 by index), but it can't be equal to receiver index
                    if (sender == 1) {
                        if (Soptions[1] > 0) {
                                if (talkedto2[0] != a) {
                                    if (a == 0) {
                                        if (isInside[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 0; isInside[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 2) {
                                        //a = 1 doesn't exist, since that would mean talking to itself
                                        //Same as receiver = 2
                                        if (isInside2[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 2; isInside2[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 3) {
                                        if (isInside3[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 3; isInside3[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 4) {
                                        if (isInside4[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 4; isInside4[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 5) {
                                        if (isInside5[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 5; isInside5[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 6) {
                                        if (isInside6[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 6; isInside6[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 7) {
                                        if (isInside7[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 7; isInside7[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                    } else if (a == 8) {
                                        if (isInside8[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 8; isInside8[1]++;
                                            Soptions[1]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
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
                            if (talkedto3[2]!=a) {
                                if (a == 0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 1; isInside1[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    //a = 2 doesn't exist
                                    if (isInside3[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 3; isInside3[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 4; isInside4[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 5; isInside5[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 6; isInside6[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 7; isInside7[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 8; isInside8[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto4[3]!=a) {
                                if (a == 0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 1; isInside1[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 2; isInside2[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    //a = 3 doesn't exist
                                    if (isInside4[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 4; isInside4[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 5; isInside5[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 6; isInside6[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 7; isInside7[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 8; isInside8[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto5[0]!=a) {
                                if (a == 0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 1; isInside1[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 2; isInside2[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 3; isInside3[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    //a = 4 doesn't exist
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 5; isInside5[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 6; isInside6[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 7; isInside7[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 8; isInside8[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto6[0]!=a) {
                                if (a == 0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 1; isInside1[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 2; isInside2[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 3; isInside3[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 4; isInside4[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    //a = 5 doesn't exist
                                    if (isInside6[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 6; isInside6[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 7; isInside7[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 8; isInside8[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto7[0]!=a) {
                                if (a == 0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 1; isInside1[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 2; isInside2[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 3; isInside3[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 4; isInside4[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 5; isInside5[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    //a = 6 doesn't exist
                                    if (isInside7[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 7; isInside7[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 8; isInside8[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto8[0]!=a) {
                                if (a == 0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 1; isInside1[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 2; isInside2[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 3; isInside3[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 4; isInside4[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 5; isInside5[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 6; isInside6[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    //a = 7 doesn't exist
                                    if (isInside8[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 8; isInside8[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto9[0]!=a) {
                                if (a == 0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 1; isInside1[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 2; isInside2[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 3; isInside3[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 4; isInside4[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 5; isInside5[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 6; isInside6[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[8] == 0) {
                                        opinions1.push_back(suit_keeper_i[8]);
                                        talkedto1[0] = 7; isInside7[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
                                //a = 8 doesn't exist

                            } else {
                                
                                chooseR();

                            }

                        } else {
                            finishedTalking[8] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 0) {
                        if (Soptions[0] > 0) {
                            if (talkedto1[0]!=a) {
                                if (a == 1) {
                                    if (isInside1[0] == 0) {
                                            opinions1.push_back(suit_keeper_i[0]);
                                            talkedto1[0] = 1; isInside1[0]++;
                                            Soptions[0]--; //Bot 2 has one less option to talk to
                                            ChatLog();
                                        } else {
                                            chooseR();
                                        }
                                } else if (a == 2) {
                                    if (isInside2[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 2; isInside2[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 3; isInside3[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 4; isInside4[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 6; isInside6[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 7; isInside7[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 8; isInside8[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();

                            }

                        } else {
                            finishedTalking[0] = true;  
                            chooseS();
                        }
                }
            }
                //If Bot 1 is Jack of Hearts
                else if (role_keeper[a] == "j") {
                    if (sender == 1) {
                        if (Soptions[1] > 0) {
                            for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[1] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto2[0]!=a) {
                                if (a == 0) {
                                    if (isInside[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 0; isInside[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    //a = 1 doesn't exist
                                    if (isInside2[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 2; isInside2[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 3; isInside3[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 4; isInside4[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 5; isInside5[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 6; isInside6[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 7; isInside7[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 8; isInside8[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto3[0]!=a) {
                                if (a == 0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 1; isInside1[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    //a = 2 doesn't exist
                                    if (isInside3[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 3; isInside3[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 4; isInside4[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 5; isInside5[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 6; isInside6[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 7; isInside7[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 8; isInside8[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto4[0]!=a) {
                                if (a == 0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 1; isInside1[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 2; isInside2[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    //a = 3 doesn't exist
                                    if (isInside4[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 4; isInside4[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 5; isInside5[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 6; isInside6[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 7; isInside7[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 8; isInside8[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto5[0]!=a) {
                                if (a == 0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 1; isInside1[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 2; isInside2[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 3; isInside3[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    //a = 4 doesn't exist
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 5; isInside5[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 6; isInside6[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 7; isInside7[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 8; isInside8[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
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
                            if (talkedto6[0]!=a) {
                                if (a == 0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 1; isInside1[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 2; isInside2[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 3; isInside3[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 4; isInside4[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    //a = 5 doesn't exist
                                    if (isInside6[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 6; isInside6[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 7; isInside7[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 8; isInside8[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto7[0]!=a) {
                                if (a == 0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 1; isInside1[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 2; isInside2[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 3; isInside3[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 4; isInside4[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 5; isInside5[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    //a = 6 doesn't exist
                                    if (isInside7[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 7; isInside7[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 8; isInside8[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto8[0]!=a) {
                                if (a == 0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 1; isInside1[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 2; isInside2[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 3; isInside3[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 4; isInside4[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 5; isInside5[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 6; isInside6[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    //a = 7 doesn't exist
                                    if (isInside8[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 8; isInside8[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto9[0]!=a) {
                                if (a == 0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 1; isInside1[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 2; isInside2[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 3; isInside3[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 4; isInside4[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 5; isInside5[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 6; isInside6[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 7; isInside7[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
 
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[8] = true;  
                        chooseS();
                    }
                       
                } else if (sender == 0) {
                    if (Soptions[0] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[0] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto1[0]!=a) {
                                if (a == 1) {
                                    if (isInside1[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 1; isInside1[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 2; isInside2[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 3; isInside3[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 4; isInside4[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else{
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 6; isInside6[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 7; isInside7[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 8; isInside8[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
 
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[0] = true;  
                        chooseS();
                    }
                        
                } 
            }
            //If Bot 1 is Double Agent
            else if (role_keeper[a] == "da") {
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
                            if (talkedto2[0]!=a) {
                                if (a == 0) {
                                    if (isInside[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 0; isInside[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 2; isInside2[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 3; isInside3[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 4; isInside4[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 5; isInside5[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 6; isInside6[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 7; isInside7[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 8; isInside8[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto2[0]!=a) {
                                if (a == 0) {
                                    if (isInside[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 0; isInside[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 2; isInside2[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 3; isInside3[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 4; isInside4[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 5; isInside5[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 6; isInside6[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 7; isInside7[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 8; isInside8[1]++;
                                        Soptions[1]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto3[0]!=a) {
                                if (a == 0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 1; isInside1[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 3; isInside3[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 4; isInside4[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 5; isInside5[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 6; isInside6[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 7; isInside7[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 8; isInside8[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto3[0]!=a) {
                                if (a == 0) {
                                    if (isInside[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 0; isInside[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                     if (isInside1[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 1; isInside1[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 3; isInside3[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 4; isInside4[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 5; isInside5[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 6; isInside6[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 7; isInside7[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 8; isInside8[2]++;
                                        Soptions[2]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto4[0]!=a) {
                                if (a == 0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 1; isInside1[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 2; isInside2[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 4; isInside4[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 5; isInside5[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 6; isInside6[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 7; isInside7[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 8; isInside8[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
                                    
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto4[0]!=a) {
                                if (a == 0) {
                                    if (isInside[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 0; isInside[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 1; isInside1[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 2; isInside2[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 4; isInside4[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 5; isInside5[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 6; isInside6[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 7; isInside7[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 8; isInside8[3]++;
                                        Soptions[3]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto5[0]!=a) {
                                if (a == 0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 1; isInside1[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 2; isInside2[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 3; isInside3[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 5; isInside5[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 6; isInside6[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 7; isInside7[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 8; isInside8[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
                                    
                                    
                                
                                
                            } else {
                                
                                chooseR();
 
                            }
                        
                        
                    }
                    else {
                            if (talkedto5[0]!=a) {
                                if (a == 0) {
                                    if (isInside[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 0; isInside[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 1; isInside1[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 2; isInside2[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 3; isInside3[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                     if (isInside5[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 5; isInside5[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 6; isInside6[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 7; isInside7[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 8; isInside8[4]++;
                                        Soptions[4]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto6[0]!=a) {
                                if (a == 0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 1; isInside1[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 2; isInside2[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 3; isInside3[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 4; isInside4[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 6; isInside6[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 7; isInside7[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[5] == 0) {
                                        opinions6.push_back(suits_initials[rand()%3]);
                                        talkedto6[0] = 8; isInside8[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();
                            }
                        
                        
                    }
                    else {
                            if (talkedto6[0]!=a) {
                                if (a == 0) {
                                    if (isInside[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 0; isInside[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 1; isInside1[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 2; isInside2[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 3; isInside3[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 4; isInside4[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 6; isInside6[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 7; isInside7[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[5] == 0) {
                                        opinions6.push_back(suit_keeper_i[5]);
                                        talkedto6[0] = 8; isInside8[5]++;
                                        Soptions[5]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto7[0]!=a) {
                                if (a == 0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 1; isInside1[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 2; isInside2[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 3; isInside3[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 4; isInside4[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 5; isInside5[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 7; isInside7[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 8; isInside8[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
                                    
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto7[0]!=a) {
                                if (a == 0) {
                                    if (isInside[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 0; isInside[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 1; isInside1[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 2; isInside2[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 3; isInside3[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 4; isInside4[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 5; isInside5[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 7; isInside7[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 8; isInside8[6]++;
                                        Soptions[6]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto8[0]!=a) { 
                                if (a == 0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 1; isInside1[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 2; isInside2[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 3; isInside3[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 4; isInside4[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 5; isInside5[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 6; isInside6[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 8; isInside8[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();
                                
                            }
                        
                        
                    }
                    else {
                            if (talkedto8[0]!=a) {
                                if (a == 0) {
                                    if (isInside[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 0; isInside[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 1; isInside1[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 2; isInside2[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 3; isInside3[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 4; isInside4[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 5; isInside5[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 6; isInside6[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 8; isInside8[7]++;
                                        Soptions[7]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
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
                            if (talkedto9[0]!=a) {
                                if (a == 0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 1; isInside1[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 2; isInside2[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 3; isInside3[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 4; isInside4[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 5; isInside5[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 6; isInside6[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 7; isInside7[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();
                                
                            }
                        
                        
                    }
                    else {

                            if (talkedto9[0]!=a) {
                                if (a == 0) {
                                    if (isInside[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 0; isInside[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 1) {
                                    if (isInside1[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 1; isInside1[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 2; isInside2[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 3; isInside3[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 4; isInside4[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 5; isInside5[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 6; isInside6[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 7; isInside7[8]++;
                                        Soptions[8]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }
 
                            } else {
                                chooseR();
                            }
                        
                        
                    }
                    } else {
                        finishedTalking[8] = true;  
                        chooseS();
                    }
                    
                } else if (sender == 0) {
                    if (Soptions[0] > 0) {
                        randomizer = rand()%2;
                    //Since 0 equals false usually, the bot will LIE if random is 0, and if it's 1 it will tell the TRUTH
                    if (randomizer == 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[0] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto1[0]!=a) {
                                if (a == 1) {
                                    if (isInside1[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 1; isInside1[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 2) {
                                    if (isInside2[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 2; isInside2[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 3; isInside3[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 4; isInside4[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 6; isInside6[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 7; isInside7[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 8; isInside8[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    else {
                            if (talkedto1[0]!=a) {
                                if (a == 1) {
                                    if (isInside1[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 1; isInside1[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }  
                                } else if (a == 2) {
                                    if (isInside2[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 2; isInside2[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 3) {
                                    if (isInside3[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 3; isInside3[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 4) {
                                    if (isInside4[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 4; isInside4[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 6) {
                                    if (isInside6[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 6; isInside6[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 7) {
                                    if (isInside7[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 7; isInside7[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                } else if (a == 8) {
                                    if (isInside8[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 8; isInside8[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                }

                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[0] = true;  
                        chooseS();
                    }
                    
                }
            }
}


