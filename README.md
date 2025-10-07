# Alice-in-Borderland-Solitary-Confinement
(Perhaps the first ever) Terminal version of the game Solitary Confinement from the show Alice in Borderland, with 9 players (bots). Written in C++

To compile the program, use the following command in your terminal (if you're using Visual Studio Code, in Code Blocks you can just put all the files inside one Project and Build and Run it. Can't guarantee this will work on an Online Compiler, I tried it and the suits won't show there, but in Code Blocks and VSCode they were visible. I'll fix it in the future and at least put an initial instead)

```
g++ bots.cpp gameinfo.cpp main.cpp communication.cpp roles.cpp botquestionplayer.cpp botquestionbot.cpp celltime.cpp -o SolitaryConfinement.exe
```

And to run the program, simply type

```
./SolitaryConfinement.exe
```
