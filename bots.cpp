#include <cmath>
#include "header.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;
vector <string> botnames = {"Roy", "Becky", "Artemis", "Amy",
        "SSydney", "Lil'D", "Alien02", "Wrath", "6R1M5", "Zephyr1",
        "Lucky99", "TheInfinite", "Oxythasol", "Sentenza4", "C3rb3ruS5",
        "Zalau", "SusanoO", "RoyalJ.", "Ironmight", "Celes", "D4rkF4ng4",
        "Vanquisher&", "GranFaust", "L3VIATHAN", "Acher0n", "Sudaruska",
        "TurbilliONN", "Kamar1n", "Rigadooon", "1Callahan", "Arc4NaA",
        "Blackhawk", "MegaMagnusM", "Silv3r6", "Ameba", "GiantGerm", "Kaz3jin", "Robbin'Goblin", "UshiOni", "Sonya"}, suit_keeper, allplayers;
vector <int> nameLen_keeper; // Vector that memorises the name length
short int name = 40; //In total there are 34 numbers on start, but we will only choose 9
vector <string> unspokenbots;
short int name_length;
short int first = 0; //Check if it's the first name
short int allbotscounter = 0; //Check how many bots are alive
short int talkablebots = 5; //Check how many bots are available to talk to
short int which;
string Bots::role;
string Bots::suit_txt[1];
vector <bool> available;
vector <string> role_keeper;
vector <bool> isAlive;
vector <string> suit_keeper_i;
void setOptions() {
    switch (alivePlayers) {
        case 9:
            for (int b = 0; b <= 8; b++) {
                Soptions[b] = 4;
            }
            break;
        case 8:
            for (int b = 0; b <= 8; b++) {
                Soptions[b] = 4;
            }
            break;
        case 7:
            for (int b = 0; b <= 8; b++) {
                Soptions[b] = 3;
            }
            break;
        case 6:
            for (int b = 0; b <= 8; b++) {
                Soptions[b] = 3;
            }
            break;
        case 5:
            for (int b = 0; b <= 8; b++) {
                Soptions[b] = 2;
            }
            break;
        case 4:
            for (int b = 0; b <= 8; b++) {
                Soptions[b] = 2;
            }
            break;
    }
}
Bots::Bots() {
    isAlive.push_back(true);
    //Make the bots available for discussion, all of them
    //Assign suit
    available.push_back(true);
    suit = suits[rand()%4];
    if (suit == "\x04") {
        suit_txt[0] = "d";
        suit_keeper_i.push_back(suit_txt[0]);
    } else if (suit == "\x03") {
        suit_txt[0] = "h";
        suit_keeper_i.push_back(suit_txt[0]);
    } else if (suit == "\x05") {
        suit_txt[0] = "c";
        suit_keeper_i.push_back(suit_txt[0]);
    } else if (suit == "\x06") {
        suit_txt[0] = "s";
        suit_keeper_i.push_back(suit_txt[0]);
    }
    suit_keeper.push_back(suit);
    //Assign bot name
    bname = botnames[rand()%name]; //Name here is 14, since it's the beginning, so choose from index 0-13
    //After choosing, subtract one from name as it has been picked
    //Erase that name so it cannot be picked by another
    //Add the player names that are participating
    allplayers.push_back(bname);
    unspokenbots.push_back(bname);
    for (int i = 0; i < name; i++) {
        if (bname == botnames[i]) {
            botnames.erase(botnames.begin()+i);
            name--;
        }
    }
    //Assign role
    role = roles[rand()%roles_num]; //On start, roles_num is 6, so after choosing, we subtract one
    if (role == "i") {
        iCounter++;
    }
    role_keeper.push_back(role);
    //Erase that role so it cannot be picked by another
    for (int j = 0; j < roles_num; j++) {
        if (role == roles[j]) {
            roles.erase(roles.begin()+j);
            roles_num--;
            break;
        }
    }
    if (Scounter == 0) {
        for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    }
    cout<<bname;
    for (int l = 1; l <= 25; l++) {
            cout<<" ";
        }
    name_length = bname.size(); //Get the length of the name to center the suits
    nameLen_keeper.push_back(name_length);
    Scounter++;
    allbotscounter++;
    if (Scounter > 2) {
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
             cout<<"["<<suit_keeper[Ucounter]<<"]";
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
            cout<<"["<<suit_keeper[Ucounter]<<"]";
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
        }
        //Once the first row with names and suits is done, reset everything to prepare for the next rows
        cout<<endl<<endl;
        Scounter = 0;
        Ucounter = 0;
        j = 0;
        first = 0;
        suit_keeper.clear();
        nameLen_keeper.clear();
    }
    //At the end, when all players are displayed
    if (allbotscounter == 9) {
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
        cout<<"[!] It is now \"Free Time\"! Discuss with other players about your suit, and let other players know what suit they have!"<<endl;
        cout<<"Lying is allowed."<<endl;
        cout<<"Who would you like to talk to? Please write the EXACT name of the player you want to talk to. ("<<talkablebots<<" players available)"<<endl;
        cout<<"List of available players to talk to: ";
        for (int a = 0; a <= unspokenbots.size()-1; a++) {
            if (a!=unspokenbots.size()-1) {
                cout<<allplayers[a]<<", ";
            } else {
                cout<<allplayers[a]<<endl;
            }
            
        }
        comm();
    }
    
}
