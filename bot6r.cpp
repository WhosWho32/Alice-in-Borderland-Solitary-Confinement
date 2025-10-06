#include "header.h"
using std::cout;
using std::endl;
static short int randomizer;
vector <int> isInside5 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
void rBot6() {
            //And if the bot is also available to talk (isn't dead)
                //And the bot has the Innocent role, return the true suit
                if (role_keeper[5] == "i") {
                    //Check which bot sent the request (0-8 by index), but it can't be equal to receiver index
                    if (sender == 1) {
                        if (Soptions[1] > 0) {
                            //Check if the 2nd bot at any point in time has talked to the 1st bot. If it did, choose another receiver to talk to
                                if (talkedto2[0] != 0) {
                                        if (isInside5[1] == 0) {
                                            opinions2.push_back(suit_keeper_i[1]);
                                            talkedto2[0] = 5; isInside5[1]++;
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
                            if (talkedto3[2]!=5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 5; isInside5[2]++;
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
                            if (talkedto4[3]!=5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 5; isInside5[3]++;
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
                            if (talkedto5[0]!=5) {
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 5; isInside5[4]++;
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
                        
                    } else if (sender == 0) {
                        if (Soptions[0] > 0) {
                            if (talkedto1[0]!=5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                            }
                        
                        
                        } else {
                            finishedTalking[0] = true;  
                            chooseS();
                        }
                        
                    } else if (sender == 6) {
                        if (Soptions[6] > 0) {
                            if (talkedto7[0]!=5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 5; isInside5[6]++;
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
                            if (talkedto8[0]!=5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 5; isInside5[7]++;
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
                            if (talkedto9[0]!=5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 5; isInside5[8]++;
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
                else if (role_keeper[5] == "j") {
                    if (sender == 1) {
                        if (Soptions[1] > 0) {
                            for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[1] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto2[0]!=5) {
                                    if (isInside5[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 5; isInside5[1]++;
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
                            if (talkedto3[0]!=5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 5; isInside5[2]++;
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
                            if (talkedto4[0]!=5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 5; isInside5[3]++;
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
                            if (talkedto5[0]!=5) {
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 5; isInside5[4]++;
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
                        
                } else if (sender == 0) {
                    if (Soptions[0] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[0] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto1[0]!=5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                               
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    } else {
                        finishedTalking[0] = true;  
                        chooseS();
                    }
                        
                } else if (sender == 6) {
                    if (Soptions[6] > 0) {
                        for (int x = 0; x <=3; x++) {
                            if (suit_keeper_i[6] == suits_initials[x]) {
                                suits_initials.erase(suits_initials.begin()+x); //Erase the player suit
                            }
                    }
                            if (talkedto7[0]!=5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 5; isInside5[6]++;
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
                            if (talkedto8[0]!=5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 5; isInside5[7]++;
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
                            if (talkedto9[0]!=5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 5; isInside5[8]++;
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
            else if (role_keeper[5] == "da") {
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
                            if (talkedto2[0]!=5) {
                                    if (isInside5[1] == 0) {
                                        opinions2.push_back(suits_initials[rand()%3]);
                                        talkedto2[0] = 5; isInside5[1]++;
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
                            if (talkedto2[0]!=5) {
                                    if (isInside5[1] == 0) {
                                        opinions2.push_back(suit_keeper_i[1]);
                                        talkedto2[0] = 5; isInside5[1]++;
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
                            if (talkedto3[0]!=5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suits_initials[rand()%3]);
                                        talkedto3[0] = 5; isInside5[2]++;
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
                            if (talkedto3[0]!=5) {
                                    if (isInside5[2] == 0) {
                                        opinions3.push_back(suit_keeper_i[2]);
                                        talkedto3[0] = 5; isInside5[2]++;
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
                            if (talkedto4[0]!=5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suits_initials[rand()%3]);
                                        talkedto4[0] = 5; isInside5[3]++;
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
                            if (talkedto4[0]!=5) {
                                    if (isInside5[3] == 0) {
                                        opinions4.push_back(suit_keeper_i[3]);
                                        talkedto4[0] = 5; isInside5[3]++;
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
                            if (talkedto5[0]!=5) {
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suits_initials[rand()%3]);
                                        talkedto5[0] = 5; isInside5[4]++;
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
                            if (talkedto5[0]!=5) {
                                    if (isInside5[4] == 0) {
                                        opinions5.push_back(suit_keeper_i[4]);
                                        talkedto5[0] = 5; isInside5[4]++;
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
                            if (talkedto1[0]!=5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suits_initials[rand()%3]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();
                            }
                        
                        
                    }
                    else {
                            if (talkedto1[0]!=5) {
                                    if (isInside5[0] == 0) {
                                        opinions1.push_back(suit_keeper_i[0]);
                                        talkedto1[0] = 5; isInside5[0]++;
                                        Soptions[0]--; //Bot 2 has one less option to talk to
                                        ChatLog(); 
                                    } else {
                                        chooseR();
                                    }
                                    
                                
                                
                            } else {
                                
                                chooseR();

                            }
                        
                        
                    }
                    } else {
                        finishedTalking[0] = true;  
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
                            if (talkedto7[0]!=5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suits_initials[rand()%3]);
                                        talkedto7[0] = 5; isInside5[6]++;
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
                            if (talkedto7[0]!=5) {
                                    if (isInside5[6] == 0) {
                                        opinions7.push_back(suit_keeper_i[6]);
                                        talkedto7[0] = 5; isInside5[6]++;
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
                            if (talkedto8[0]!=5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suits_initials[rand()%3]);
                                        talkedto8[0] = 5; isInside5[7]++;
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
                            if (talkedto8[0]!=5) {
                                    if (isInside5[7] == 0) {
                                        opinions8.push_back(suit_keeper_i[7]);
                                        talkedto8[0] = 5; isInside5[7]++;
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
                            if (talkedto9[0]!=5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suits_initials[rand()%3]);
                                        talkedto9[0] = 5; isInside5[8]++;
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

                            if (talkedto9[0]!=5) {
                                    if (isInside5[8] == 0) {
                                        opinions9.push_back(suit_keeper_i[8]);
                                        talkedto9[0] = 5; isInside5[8]++;
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
}
