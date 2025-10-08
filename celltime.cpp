#include "header.h"
using std::cout;
using std::endl;
vector <int> counter1 = {0,0,0,0};
vector <int> counter2 = {0,0,0,0};
vector <int> counter3 = {0,0,0,0};
vector <int> counter4 = {0,0,0,0};
vector <int> counter5 = {0,0,0,0};
vector <int> counter6 = {0,0,0,0};
vector <int> counter7 = {0,0,0,0};
vector <int> counter8 = {0,0,0,0};
vector <int> counter9 = {0,0,0,0};
vector <int> suitCounter = {0,0,0,0,0,0,0,0,0};
short int howManyAlive = 0;
bool isJackdead = false;
vector <string> botanswers = {"x", "x", "x", "x", "x", "x", "x", "x", "x"}; //The answers the bots will provide
vector <int> saveIndex; //Save index to compare for the 2-2 case
vector <int> twocounter = {0,0,0,0,0,0,0,0,0}; //Counter how many 2's are
short int dcounter = 0; //Check how many times botdecision() has been called
vector <bool> verify = {true, true, true, true, true, true, true, true, true};
short int who;
short int r;
short int JackR; //Jack Random
string presumption; // What the player thinks they have
/* counter[0] is heart
 counter[1] is diamond
 counter[2] is club
 counter[3] is spade */
 //Bots will decide what suit to pick based on the counters. If a bot is Jack of hearts, it can also guess its' own suit sometimes
void survivorchecker() {
    //Check which bots survived the round
    switch (who) {
        case 0:
            if (isAlive[0]) {
                if (botanswers[0] == suit_keeper_i[0]) {
                    cout<<"[V] "<<allplayers[0]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[0] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[0]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[0] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 1
                survivorchecker();
            }
            break;
        case 1:
            if (isAlive[1]) {
                if (botanswers[1] == suit_keeper_i[1]) {
                    cout<<"[V] "<<allplayers[1]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[1] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[1]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[1] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 2
                survivorchecker();
            }
            break;
        case 2:
            if (isAlive[2]) {
                if (botanswers[2] == suit_keeper_i[2]) {
                    cout<<"[V] "<<allplayers[2]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[2] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[2]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[2] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 3
                survivorchecker();
            }
            break;
        case 3:
            if (isAlive[3]) {
                if (botanswers[3] == suit_keeper_i[3]) {
                    cout<<"[V] "<<allplayers[3]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[3] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[3]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[3] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 4
                survivorchecker();
            }
            break;
        case 4:
            if (isAlive[4]) {
                if (botanswers[4] == suit_keeper_i[4]) {
                    cout<<"[V] "<<allplayers[4]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[4] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[4]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[4] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 5
                survivorchecker();
            }
            break;
        case 5:
            if (isAlive[5]) {
                if (botanswers[5] == suit_keeper_i[5]) {
                    cout<<"[V] "<<allplayers[5]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[5] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[5]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[5] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 6
                survivorchecker();
            }
            break;
        case 6:
            if (isAlive[6]) {
                if (botanswers[6] == suit_keeper_i[6]) {
                    cout<<"[V] "<<allplayers[6]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[6] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[6]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[6] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 7
                survivorchecker();
            }
            break;
        case 7:
            if (isAlive[7]) {
                if (botanswers[7] == suit_keeper_i[7]) {
                    cout<<"[V] "<<allplayers[7]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[7] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[7]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[7] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 8
                survivorchecker();
            }
            break;
        case 8:
            if (isAlive[8]) {
                if (botanswers[8] == suit_keeper_i[8]) {
                    cout<<"[V] "<<allplayers[8]<<" has survived the round."<<endl;
                    who++;
                    howManyAlive++;
                    survivorchecker();
                } else {
                    if(role_keeper[8] == "i") {
                        iCounter--;
                    }
                    cout<<"[X] "<<allplayers[8]<<" has been eliminated."<<endl;
                    alivePlayers--;
                    who++;
                    isAlive[8] = false;
                    survivorchecker();
                }
            } else {
                who++; //Should be 9
                survivorchecker();
            }
            break;
    }
    if (howManyAlive == alivePlayers) {
        if (!isJackdead) {
        who++;
        cout<<endl<<endl;
        cout<<"----------------------"<<endl<<endl<<endl<<endl;
        cout<<R"(
                           ____    U  ___ u   _   _   _   _    ____          U  ___ u__     __ U _____ u   ____      _    
                        U |  _"\ u  \/"_ \/U |"|u| | | \ |"|  |  _"\          \/"_ \/\ \   /"/u\| ___"|/U |  _"\ u U|"|u  
                         \| |_) |/  | | | | \| |\| |<|  \| |>/| | | |         | | | | \ \ / //  |  _|"   \| |_) |/ \| |/  
                          |  _ <.-,_| |_| |  | |_| |U| |\  |uU| |_| |\    .-,_| |_| | /\ V /_,-.| |___    |  _ <    |_|   
                          |_| \_\\_)-\___/  <<\___/  |_| \_|  |____/ u     \_)-\___/ U  \_/-(_/ |_____|   |_| \_\   (_)   
                          //   \\_    \\   (__) )(   ||   \\,-.|||_             \\     //       <<   >>   //   \\_  |||_  
                         (__)  (__)  (__)      (__)  (_")  (_/(__)_)           (__)   (__)     (__) (__) (__)  (__)(__)_) 
            )";
        cout<<endl;
        cout<<"                 ---------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<endl<<endl;
        if (!isAlive[0] && role_keeper[0] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[1] && role_keeper[1] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[2] && role_keeper[2] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[3] && role_keeper[3] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[4] && role_keeper[4] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[5] && role_keeper[5] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[6] && role_keeper[6] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[7] && role_keeper[7] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        } else if (!isAlive[8] && role_keeper[8] == "j") {
            cout<<endl;
            cout<<"                             [V] Congratulations! Looks like the Jack of Hearts has been eliminated. You've won!"<<endl<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
            isJackdead = true;
        }
    }   
        if (!isJackdead) {
        //Reset player suit
        player.clear(); //This is the suit symbol
        player_suit.clear(); //This is the suit's initial
        //Reset for the bots
        unspokenbots.clear(); //Clear the names for the bots who haven't spoken
        nameLen_keeper.clear();
        opinions1.clear();
        opinions2.clear();
        opinions3.clear();
        opinions4.clear();
        opinions5.clear();
        opinions6.clear();
        opinions7.clear();
        opinions8.clear();
        opinions9.clear();
        playerop.clear();
        howManyAlive = 0;
        counter1 = {0,0,0,0};
        counter2 = {0,0,0,0};
        counter3 = {0,0,0,0};
        counter4 = {0,0,0,0};
        counter5 = {0,0,0,0};
        counter6 = {0,0,0,0};
        counter7 = {0,0,0,0};
        counter8 = {0,0,0,0};
        counter9 = {0,0,0,0};
        for (int j = 0; j <=8; j++) {
            suitCounter[j] = 0;
        }
        verify = {true, true, true, true, true, true, true, true, true};
        twocounter = {0,0,0,0,0,0,0,0,0};
        dcounter = 0;
        saveIndex.clear();
        talkedto1[0] = 10;
        talkedto2[0] = 10;
        talkedto3[0] = 10;
        talkedto4[0] = 10;
        talkedto5[0] = 10;
        talkedto6[0] = 10;
        talkedto7[0] = 10;
        talkedto8[0] = 10;
        talkedto9[0] = 10;
        whoq.clear();
        who = 0;
        wIndex = 0;
        for (int l = 0; l <= 8; l++) {
            isInside[l] = 0;
            isInside1[l] = 0;
            isInside2[l] = 0;
            isInside3[l] = 0;
            isInside4[l] = 0;
            isInside5[l] = 0;
            isInside6[l] = 0;
            isInside7[l] = 0;
            isInside8[l] = 0;
        }
        for (int j = 0; j <= 8; j++) {
            finishedTalking[j] = false;
        }
        allbotscounter = 0;
        askedq = 0;
        first = 0;
        Scounter = 0;
        Ucounter = 0;
        j = 0;
        if (alivePlayers > 3) {
            newRound(); //Initiate new round
        } else {
           cout<<"                     [V] Looks like there are less than 4 players remaining. Congratulations on surviving this far!"<<endl;
            cout<<R"(
                                             _____ ____  _      _____   ____  _     _____ ____  ____ 
                                            /  __//  _ \/ \__/|/  __/  /   _\/ \   /  __//  _ \/  __\
                                            | |  _| / \|| |\/|||  \    |  /  | |   |  \  | / \||  \/|
                                            | |_//| |-||| |  |||  /_   |  \__| |_/\|  /_ | |-|||    /
                                            \____\\_/ \|\_/  \|\____\  \____/\____/\____\\_/ \|\_/\_\
                                                         
            )";
            cout<<endl<<endl;
            for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
            }
            cout<<endl;
        }
        
        
        }
        
    }
    
   
}
void playeranswer() {
    cout<<endl<<endl<<endl;
    cout<<"What do you think your suit is? Please write the INITIAL only for the suit."<<endl<<endl;
    cout<<"                                     Heart [h]    Diamond [d]     Club [c]    Spade [s]"<<endl;
    if (wOptions == 0) {
        cout<<"                                                  [\x03]   [\x04]   [\x05]  [\x06]"<<endl<<endl;
    } else if (wOptions == 1) {
        cout<<"                                                  [♥]   [♦]   [♣]  [♠]"<<endl<<endl;
    } else if (wOptions == 2) {
        cout<<"                                                  [h]   [d]   [c]  [s]"<<endl<<endl;
    }
    
    cout<<"These are the options you have accumulated from talking to other players: ";
    for (string g : playerop) {
        cout<<g<<" ";
    }
    cout<<endl<<endl;
    cout<<"- I think my suit is... ";
    std::cin>>presumption;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    if (presumption == "h") {
        cout<<"Heart."<<endl<<endl;
    } else if (presumption == "d") {
        cout<<"Diamond."<<endl<<endl;
    } else if (presumption == "c") {
        cout<<"Club."<<endl<<endl;
    } else if (presumption == "s") {
        cout<<"Spade."<<endl<<endl;
    } else {
        cout<<"[?] Unknown suit initial. Please make sure you wrote the initial for the suit correctly, then try again."<<endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        playeranswer();
    }
    if (presumption == player_suit[0]) {
        cout<<"That is correct! Your suit was actually "<<player[0]<<" !"<<endl<<endl;
        suitcounter();
    } else {
        cout<<"                                [X] It is GAME OVER for you. Your suit was actually "<<player[0]<<". Looks like you got lied to..."<<endl<<endl;
        cout<<"                 ------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<R"(
                                            ________                           ________                     
                                            /  _____/_____    _____   ____      \_____  \___  __ ___________ 
                                            /   \  ___\__  \  /     \_/ __ \      /   |   \  \/ // __ \_  __ \
                                            \    \_\  \/ __ \|  Y Y  \  ___/     /    |    \   /\  ___/|  | \/
                                            \______  (____  /__|_|  /\___  >    \_______  /\_/  \___  >__|   
                                                    \/     \/      \/     \/             \/          \/       
        )";
        cout<<endl<<endl;
        for (int j = 0; j <= 8; j++) {
            cout<<allplayers[j]<<" had the role of: "<<role_keeper[j]<<endl;
        }
        cout<<endl;
    }
}
void decide(vector <string>& t, vector <int>& u, int i) {
 //vector <string> t - for opinions; vector <int> u - for counters; int i - for index;
 if (t.size() == 2) {
        if (verify[i]) {
             //Check for 2
             for (int b = 0; b <= 3; b++) {
                if (u[b] == 2 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 2 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 2 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 2 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
            }
            //Check for pairs of 1
            if (verify[i]) {
                for (int p = 0; p <=3; p++) {
                    if (u[p] == 1) {
                        suitCounter[i]++;
                        if (suitCounter[i] == 2) {
                            if (u[0] == 1) {
                                if (u[1] == 1) {
                                    //Case 1 1 0 0
                                    r = rand()%2; 
                                    if (r == 0) {
                                        botanswers[i] = "h";
                                        verify[i] = false;
                                        break;
                                    } else {
                                        botanswers[i] = "d";
                                        verify[i] = false;
                                        break;
                                    } 
                                } else if (u[1] == 0) {
                                        if (u[2] == 1) {
                                            //Case 1 0 1 0
                                            r = rand()%3;
                                            if (r == 0) {
                                                botanswers[i] = "h";
                                                verify[i] = false;
                                                break;
                                            } else if (r == 1) {
                                                r = rand()%3; // Reroll, we only need 0 and 2
                                            } else if (r == 2) {
                                                botanswers[i] = "c";
                                                verify[i] = false;
                                                break;
                                            }
                                        } else if (u[2] == 0) {
                                            if (u[3] == 1) {
                                                //Case 1 0 0 1
                                                r = rand()%4;
                                                if (r == 0) {
                                                    botanswers[i] = "h";
                                                    verify[i] = false;
                                                    break;
                                                } else if (r == 1) {
                                                    r = rand()%4;
                                                } else if (r == 2) {
                                                    r = rand()%4;
                                                } else if (r == 3) {
                                                    botanswers[i] = "s";
                                                    verify[i] = false;
                                                    break;
                                                }
                                            }
                                            
                                        }
                                    } 
                            } else if (u[0] == 0) {
                                if (u[1] == 1) {
                                    if (u[2] == 1) {
                                        //Case 0 1 1 0
                                        r = 1+rand()%3; //Normally it's from 0-2, now 1-3
                                        if (r == 1) {
                                            botanswers[i] = "d";
                                            verify[i] = false;
                                            break;
                                        } else if (r == 2) {
                                            botanswers[i] = "c";
                                            verify[i] = false;
                                            break;
                                        } else if (r == 3) {
                                            r = 1+rand()%3;
                                        }
                                    } else if (u[2] == 0) {
                                        if (u[3] == 1) {
                                            //Case 0 1 0 1
                                            r = rand()%4;
                                            if (r == 0) {
                                                r = rand()%4;
                                            } else if (r == 1) {
                                                botanswers[i] = "d";
                                                verify[i] = false;
                                                break;
                                            } else if (r == 2) {
                                                r = rand()%4;
                                            } else if (r == 3) {
                                                botanswers[i] = "s";
                                                verify[i] = false;
                                                break;
                                            }
                                        }
                                    }
                                } else if (u[1] == 0) {
                                        if (u[2] == 1) {
                                            if (u[3] == 1) {
                                                //Case 0 0 1 1
                                                r = rand()%4;
                                                if (r == 0) {
                                                    r = rand()%4;
                                                } else if (r == 1) {
                                                    r = rand()%4;
                                                } else if (r == 2) {
                                                    botanswers[i] = "c";
                                                    verify[i] = false;
                                                    break;
                                                } else if (r == 3) {
                                                    botanswers[i] = "s";
                                                    verify[i] = false;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                            }
                        }
                    }
                }
            }
    }
    else if (t.size() == 3) {
        if (verify[i]) {
             //Check for 3 or 2
             for (int b = 0; b <= 3; b++) {
                if (u[b] == 3 || u[b] == 2 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 || u[b] == 2 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 || u[b] == 2 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 || u[b] == 2 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
            }
            //If they are all equal to 1, pick at random
            if (verify[i]) {
                for (int p = 0; p <=3; p++) {
                    if (u[p] == 1) {
                        suitCounter[i]++;
                        if (suitCounter[i] == 3) {
                            if (u[0] == 1) {
                                if (u[1] == 1) {
                                    if (u[2] == 1) {
                                        //Case 1 1 1 0
                                        r = rand()%3;
                                        if (r == 0) {
                                            botanswers[i] = "h";
                                            verify[i] = false;
                                            break;
                                        } else if (r == 1) {
                                            botanswers[i] = "d";
                                            verify[i] = false;
                                            break;
                                        } else {
                                            botanswers[i] = "c";
                                            verify[i] = false;
                                            break;  
                                        }
                                    } else if (u[2] == 0) {
                                        if (u[3] == 1) {
                                            //Case 1 1 0 1
                                            r = rand()%4;
                                            if (r == 0) {
                                                botanswers[i] = "h";
                                                verify[i] = false;
                                                break;
                                            } else if (r == 1) {
                                                botanswers[i] = "d";
                                                verify[i] = false;
                                                break;
                                            } else if (r == 2) {
                                                r = rand()%4; //Reroll, we only need 0 1 and 3
                                            } else if (r == 3) {
                                                botanswers[i] = "s";
                                                verify[i] = false;
                                                break;
                                            }
                                        }
                                    }
                                } else if (u[1] == 0) {
                                    if (u[2] == 1) {
                                        if (u[3] == 1) {
                                            //Case 1 0 1 1
                                            r = rand()%4;
                                            if (r == 0) {
                                                botanswers[i] = "h";
                                                verify[i] = false;
                                                break;
                                            } else if (r == 1) {
                                                r = rand()%4; //Reroll, we only need 0 2 and 3
                                            } else if (r == 2) {
                                                botanswers[i] = "c";
                                                verify[i] = false;
                                                break;  
                                            } else if (r == 3) {
                                                botanswers[i] = "s";
                                                verify[i] = false;
                                                break;
                                            }
                                        }
                                    }
                                }
                            } else if (u[0] == 0) {
                                if (u[1] == 1) {
                                    if (u[2] == 1) {
                                        if (u[3] == 1) {
                                            //Case 0 1 1 1
                                            r = 1+rand()%3; //We only need 1 2 and 3. It normaly is from 0-2, but now it's 1-3
                                            if (r == 1) {
                                                botanswers[i] = "d";
                                                verify[i] = false;
                                                break;
                                            } else if (r == 2) {
                                                botanswers[i] = "c";
                                                verify[i] = false;
                                                break;  
                                            } else if (r == 3) {
                                                botanswers[i] = "s";
                                                verify[i] = false;
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
    }       
    //Go through the entire vector and see which one has the counter set to 4, and pick that one as it's the maxed out one
           else if (t.size() == 4) {
            if (verify[i]) {
                for (int b = 0; b <= 3; b++) {
                if (u[b] == 4 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 4 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 4 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 4 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
            }
              
           //If there's no one that has 4, check for 3 and do the same
           if (verify[i]) {
            for (int b = 0; b <= 3; b++) {
                if (u[b] == 3 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
           }
           
           //If it's the case 0 2 0 2 or any other formation, choose at random between the 2 suits
           if (verify[i]) {
            for (int g = 0; g <=3; g++) {
            if (u[g] == 2) {
                twocounter[i]++;
                //Save the index for those that have a 2
                saveIndex.push_back(g);
            }
           }
           if (twocounter[i] == 2) {
              //Choose at random afterwards between the ones that have 2
           if (saveIndex[0] == 0) {
              if (saveIndex[1] == 1) {
                //This case is basically 2 2 0 0
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                } else {
                    botanswers[i] = "d";
                    verify[i] = false;
                }
              }
              else if (saveIndex[1] == 2) {
                //This is case 2 0 2 0
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                } else {
                    botanswers[i] = "c";
                    verify[i] = false;
                }
              } else if (saveIndex[1] == 3) {
                //This is case 2 0 0 2
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                } else {
                    botanswers[i] = "s";
                    verify[i] = false;
                }
              }
           } else if (saveIndex[0] == 1) {
            if (saveIndex[1] == 3) {
                //This is casae 0 2 0 2
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "d";
                    verify[i] = false;
                } else {
                    botanswers[i] = "s";
                    verify[i] = false;
                }
            } else if (saveIndex[1] == 2) {
                //This is case 0 2 2 0
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "d";
                    verify[i] = false;
                } else {
                    botanswers[i] = "c";
                    verify[i] = false;
                }
            }
           } else if (saveIndex[0] == 2) {
            if (saveIndex[1] == 3) {
                //This is case 0 0 2 2
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "c";
                    verify[i] = false;
                } else {
                    botanswers[i] = "s";
                    verify[i] = false;
                }
            }
           }
           }
           }
           
            //If there's no 3 but there's 2 and and also 2 1's, choose the one that has 2
            if (verify[i]) {
                if (twocounter[i] == 1 && saveIndex[0] == 0) {
                botanswers[i] = "h";
                verify[i] = false;
            } else if (twocounter[i] == 1 &&saveIndex[0] == 1) {
                botanswers[i] = "d";
                verify[i] = false;
            } else if (twocounter[i] == 1 && saveIndex[0] == 2) {
                botanswers[i] = "c";
                verify[i] = false;
            } else if (twocounter[i] == 1 && saveIndex[0] == 3) {
                botanswers[i] = "s";
                verify[i] = false;
            }
            
            }
            //Last case, where they are all different: 1 1 1 1
            if (verify[i]) {
                for (int p = 0; p <=3; p++) {
                    if (u[p] < 2) {
                        r = rand()%4;
                        if (r == 0) {
                            botanswers[i] = "h";
                            verify[i] = false;
                            break;
                        } else if (r == 1) {
                            botanswers[i] = "d";
                            verify[i] = false;
                            break;
                        } else if (r == 2) {
                            botanswers[i] = "c";
                            break;
                            verify[i] = false;
                        } else {
                            botanswers[i] = "s";
                            break;
                            verify[i] = false;
                        }
                    }
                }
            }
           } else if (t.size() == 5) {
             if (verify[i]) {
                //If any of them are 5, choose them
                for (int b = 0; b <= 3; b++) {
                if (u[b] == 5 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 5 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 5 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 5 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
           //If any of them are 4, choose them
                for (int b = 0; b <= 3; b++) {
                if (u[b] == 4 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 4 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 4 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 4 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
           //If any of them are 3, choose them
           for (int b = 0; b <= 3; b++) {
                if (u[b] == 3 && b == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 && b == 1) {
                    botanswers[i] = "d";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 && b == 2) {
                    botanswers[i] = "c";
                    verify[i] = false;
                    break;
                } else if (u[b] == 3 && b == 3) {
                    botanswers[i] = "s";
                    verify[i] = false;
                    break;
                }
           }
            }
            if (verify[i]) {
                for (int g = 0; g <=3; g++) {
                    if (u[g] == 2) {
                        twocounter[i]++;
                        //Save the index for those that have a 2
                        saveIndex.push_back(g);
                    }
            }
            if (twocounter[i] == 2) {
              //Choose at random afterwards between the ones that have 2
           if (saveIndex[0] == 0) {
              if (saveIndex[1] == 1) {
                //This case is basically 2 2 0 0
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                } else {
                    botanswers[i] = "d";
                    verify[i] = false;
                }
              }
              else if (saveIndex[1] == 2) {
                //This is case 2 0 2 0
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                } else {
                    botanswers[i] = "c";
                    verify[i] = false;
                }
              } else if (saveIndex[1] == 3) {
                //This is case 2 0 0 2
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "h";
                    verify[i] = false;
                } else {
                    botanswers[i] = "s";
                    verify[i] = false;
                }
              }
           } else if (saveIndex[0] == 1) {
            if (saveIndex[1] == 3) {
                //This is casae 0 2 0 2
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "d";
                    verify[i] = false;
                } else {
                    botanswers[i] = "s";
                    verify[i] = false;
                }
            } else if (saveIndex[1] == 2) {
                //This is case 0 2 2 0
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "d";
                    verify[i] = false;
                } else {
                   botanswers[i] = "c";
                    verify[i] = false;
                }
            }
           } else if (saveIndex[0] == 2) {
            if (saveIndex[1] == 3) {
                //This is case 0 0 2 2
                r = rand()%2;
                if (r == 0) {
                    botanswers[i] = "c";
                    verify[i] = false;
                } else {
                    botanswers[i] = "s";
                    verify[i] = false;
                }
            }
           }
           }
           }
           if (verify[i]) {
                if (twocounter[i] == 1 && saveIndex[0] == 0) {
                botanswers[i] = "h";
                verify[i] = false;
            } else if (twocounter[i] == 1 && saveIndex[0] == 1) {
                botanswers[i] = "d";
                verify[i] = false;
            } else if (twocounter[i] == 1 && saveIndex[0] == 2) {
                botanswers[i] = "c";
                verify[i] = false;
            } else if (twocounter[i] == 1 && saveIndex[0] == 3) {
                botanswers[i] = "s";
                verify[i] = false;
            }
            
            }
        }
            dcounter++;
            //who++ for all, except last bot with index 8
            if (i != 8) {
                who++;
            }
            saveIndex.clear();
}
void botdecision() {
    switch(who) {
        case 0:
        if (isAlive[0]) {
            if (role_keeper[0] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[0] = suit_keeper_i[0];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions1, counter1, 0);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[0] = suit_keeper_i[0];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions1, counter1, 0);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                       botanswers[0] = suit_keeper_i[0];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions1, counter1, 0);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[0] = suit_keeper_i[0];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions1, counter1, 0);
                        break;
                }
            }
            } else {
                decide(opinions1, counter1, 0);
                break;
            }
        } else {
            who++;
            dcounter++;
            //Both should be 1
            break;
        }
      
        case 1:
        if (isAlive[1]) {
            if (role_keeper[1] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[1] = suit_keeper_i[1];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions2, counter2, 1);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[1] = suit_keeper_i[1];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions2, counter2, 1);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[1] = suit_keeper_i[1];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions2, counter2, 1);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[1] = suit_keeper_i[1];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions2, counter2, 1);
                        break;
                }
            }
            } else {
                decide(opinions2, counter2, 1);
                break;
            }
        } else {
            who++;
            dcounter++;
            //Both should be 2
            break;
        }
          
        case 2:
            if (isAlive[2]) {
                if (role_keeper[2] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[2] = suit_keeper_i[2];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions3, counter3, 2);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[2] = suit_keeper_i[2];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions3, counter3, 2);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[2] = suit_keeper_i[2];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions3, counter3, 2);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[2] = suit_keeper_i[2];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions3, counter3, 2);
                        break;
                }
            }
            } else {
                decide(opinions3, counter3, 2);
                break;
            }

            } else {
                who++;
                dcounter++;
                //Both should be 3
                break;
            }
        case 3:
           if (isAlive[3]) {
                if (role_keeper[3] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[3] = suit_keeper_i[3];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions4, counter4, 3);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[3] = suit_keeper_i[3];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions4, counter4, 3);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[3] = suit_keeper_i[3];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions4, counter4, 3);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[3] = suit_keeper_i[3];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions4, counter4, 3);
                        break;
                }
            }
            } else {
                decide(opinions4, counter4, 3);
                break;
            }

           } else {
                who++;
                dcounter++;
                //Bpth should be 4
                break;
           }
        case 4:
            if (isAlive[4]) {
                if (role_keeper[4] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[4] = suit_keeper_i[4];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions5, counter5, 4);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[4] = suit_keeper_i[4];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions5, counter5, 4);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[4] = suit_keeper_i[4];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions5, counter5, 4);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[4] = suit_keeper_i[4];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions5, counter5, 4);
                        break;
                }
            }
            } else {
                decide(opinions5, counter5, 4);
                break;
            }

            } else {
                who++;
                dcounter++;
                //Both should be 5
                break;
            }
        case 5:
           if (isAlive[5]) {
                if (role_keeper[5] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[5] = suit_keeper_i[5];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions6, counter6, 5);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[5] = suit_keeper_i[5];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions6, counter6, 5);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[5] = suit_keeper_i[5];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions6, counter6, 5);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[5] = suit_keeper_i[5];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions6, counter6, 5);
                        break;
                }
            }
            } else {
                decide(opinions6, counter6, 5);
                break;
            }

           } else {
                who++;
                dcounter++;
                //Both should be 6
                break;
           }
         case 6:
            if (isAlive[6]) {
                if (role_keeper[6] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[6] = suit_keeper_i[6];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions7, counter7, 6);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[6] = suit_keeper_i[6];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions7, counter7, 6);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[6] = suit_keeper_i[6];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions7, counter7, 6);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[6] = suit_keeper_i[6];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions7, counter7, 6);
                        break;
                }
            }
            } else {
                decide(opinions7, counter7, 6);
                break;
            }

            } else {
                who++;
                dcounter++;
                //Both should be 7
                break;
            }
        case 7:
            if (isAlive[7]) {
                if (role_keeper[7] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[7] = suit_keeper_i[7];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions8, counter8, 7);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[7] = suit_keeper_i[7];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions8, counter8, 7);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[7] = suit_keeper_i[7];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions8, counter8, 7);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[7] = suit_keeper_i[7];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions8, counter8, 7);
                        break;
                }
            }
            } else {
                decide(opinions8, counter8, 7);
                break;
            }

            } else {
                who++;
                dcounter++;
                //Both should be 8
                break;
            }
        case 8:
           if (isAlive[8]) {
                if (role_keeper[8] == "j") {
                if (iCounter == 3) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 3 innocent players alive, it has a 75% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 0 || JackR == 1 || JackR == 2) {
                        botanswers[8] = suit_keeper_i[8];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 3) {
                        decide(opinions9, counter9, 8);
                        break;
                    }
                } else if (iCounter == 2) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are 2 innocent players alive, it has a 50% chance to just choose directly his suit initial
                    JackR = rand()%2; //So it can be 0-3
                    if (JackR == 0) {
                        botanswers[8] = suit_keeper_i[8];
                        who++;
                        dcounter++;
                        break;
                    } else if (JackR == 1) {
                        decide(opinions9, counter9, 8);
                        break;
                    }
                } else if (iCounter == 1) {
                    //If the first bot has to choose, its role is Jack of Hearts and there's 1 innocent player alive, it has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[8] = suit_keeper_i[8];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions9, counter9, 8);
                        break;
                    }
                } else if (iCounter == 0) {
                    //If the first bot has to choose, its role is Jack of Hearts and there are no more innocent players alive, it still has a 25% chance to just choose directly his suit initial
                    JackR = rand()%4; //So it can be 0-3
                    if (JackR == 3) {
                        botanswers[8] = suit_keeper_i[8];
                        who++;
                        dcounter++;
                        break;
                    } else {
                        decide(opinions9, counter9, 8);
                        break;
                }
            }
            } else {
                decide(opinions9, counter9, 8);
                break;
            }

           } else {
            dcounter++;
            //Should be 9
            saveIndex.clear();
            break;
           }
    }
    if (dcounter == 9) {
        who = 0;
        cout<<"[Survival Log]"<<endl;
        cout<<"---------------"<<endl<<endl;
        survivorchecker();
    }
    if (who == 1 && dcounter == 1) {
        botdecision();
    } else if (who == 2 && dcounter == 2) {
        botdecision();
    } else if (who == 3 && dcounter == 3) {
        botdecision();
    } else if (who == 4 && dcounter == 4) {
        botdecision();
    } else if (who == 5 && dcounter == 5) {
        botdecision();
    } else if (who == 6 && dcounter == 6) {
        botdecision();
    } else if (who == 7 && dcounter == 7) {
        botdecision();
    } else if (who == 8 && dcounter == 8) {
        botdecision();
    }
}

void suitcounter() {
    //Bot 1 checker
    if (isAlive[0]) {
        for (int t = 0; t<=opinions1.size()-1; t++) {
        if (opinions1[t] == "h") {
            counter1[0]++;
        } else if (opinions1[t] == "d") {
            counter1[1]++;
        } else if (opinions1[t] == "c") {
            counter1[2]++;
        } else if (opinions1[t] == "s") {
            counter1[3]++;
        }
    }
    }
    //Bot 2 checker
    if (isAlive[1]) {
        for (string t : opinions2) {
        if (t == "h") {
            counter2[0]++;
        } else if (t == "d") {
            counter2[1]++;
        } else if (t == "c") {
            counter2[2]++;
        } else if (t == "s") {
            counter2[3]++;
        }
    }
    }
    //Bot 3 checker
    if (isAlive[2]) {
        for (string t : opinions3) {
        if (t == "h") {
            counter3[0]++;
        } else if (t == "d") {
            counter3[1]++;
        } else if (t == "c") {
            counter3[2]++;
        } else if (t == "s") {
            counter3[3]++;
        }
    }
    }
    //Bot 4 checker
    if (isAlive[3]) {
        for (string t : opinions4) {
        if (t == "h") {
            counter4[0]++;
        } else if (t == "d") {
            counter4[1]++;
        } else if (t == "c") {
            counter4[2]++;
        } else if (t == "s") {
            counter4[3]++;
        }
    }
    }
    //Bot 5 checker
    if (isAlive[4]) {
        for (string t : opinions5) {
        if (t == "h") {
            counter5[0]++;
        } else if (t == "d") {
            counter5[1]++;
        } else if (t == "c") {
            counter5[2]++;
        } else if (t == "s") {
            counter5[3]++;
        }
    }
    }
    //Bot 6 checker
    if (isAlive[5]) {
        for (string t : opinions6) {
        if (t == "h") {
            counter6[0]++;
        } else if (t == "d") {
            counter6[1]++;
        } else if (t == "c") {
            counter6[2]++;
        } else if (t == "s") {
            counter6[3]++;
        }
    }
    }
    //Bot 7 checker
    if (isAlive[6]) {
        for (string t : opinions7) {
        if (t == "h") {
            counter7[0]++;
        } else if (t == "d") {
            counter7[1]++;
        } else if (t == "c") {
            counter7[2]++;
        } else if (t == "s") {
            counter7[3]++;
        }
    }
    }
    //Bot 8 checker
    if (isAlive[7]) {
        for (string t : opinions8) {
        if (t == "h") {
            counter8[0]++;
        } else if (t == "d") {
            counter8[1]++;
        } else if (t == "c") {
            counter8[2]++;
        } else if (t == "s") {
            counter8[3]++;
        }
    }
    }
    //Bot 9 checker
    if (isAlive[8]) {
        for (string t : opinions9) {
        if (t == "h") {
            counter9[0]++;
        } else if (t == "d") {
            counter9[1]++;
        } else if (t == "c") {
            counter9[2]++;
        } else if (t == "s") {
            counter9[3]++;
        }
    }
    cout<<endl;
    }
        who = 0;
        botdecision();
}
