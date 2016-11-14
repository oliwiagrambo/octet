Oliwia Grambo 
Computer games Art and Design 2016 Assignment: Intro to game programming. 

##### TASK ######
Fork Octet on GitHub and construct a 2D game demo showing understanding of the following things: 
Writing your own fragment shader.  Well-formatted code with good layout.  Setting up objects by reading CSV file or similar text file. 


##### ZERG INVADERS ######
Idea of my version of invaders was inverted game logics.  To score points, player has to miss invader and receive a hit. Otherwise score is going down. There is a possibility to open text file and manually set the position of invader for a more challenge or fun. In the background there is rock version Beethoven music. I also changed background color.  
From my initial idea I did not manage to make on time additional feature : every 5-10 sec there was supposed to be random object (say, unicorns) appearing on screen and when shot player could receive double points. Otherwise I have completed my idea.  
Youtube video link: https://youtu.be/tnHZQ2yt-mI  

###### Menu ######
Text menu offers 3 options – to play a game , to see highest score or to quit. Once Player will choose 1) to play, music starts in background.  
I removed any other sounds as it would be too much disturbing with music in background.  
While playing the music I noticed it is played really slow – although I could not fix it, I was trying to understand my problem. I believe it is because each frame game has to load and move sprites, hence streaming music might be slower than I expected.   

###### Shader ######
While I understand fragment shader and how it works, I could not successfully  implement it in my game.  I believe both fragment and vertex shaders should be in separate files with a common loading function inside program, with vertex shader dealing with vertices and fragment shader with everything between those vertices, but it did not want to work in my project. I might be missing something in my Visual Studio as even after following tutorials and checking codes – even after making new solution and new shaders – it was not working.   

###### Game Mechanics ######
Game mechanics did not change too much, although scoring system is different and there is option to control where invaders appear on screen.  
To begin with, player can score when one miss the invader and receive incoming damage. Hitting invader and missing the bullet will result in lowering the score. Missing the bullet results in lowering number of lives. If bullet miss the spacecraft 8 times, game is over. 
Position of invaders is being read from file, where X means the position of invader. It can be changed  manually by player by editing the text file – this allows player to customize experience and have more challenge.  
Because I have set number of rows and columns in game, there will be only that many invaders. Adding additional row in text file will not result in reading another line of invaders in game.  

###### Screens ######
http://tinypic.com/r/aw9glv/9
http://tinypic.com/r/dyavbb/9
http://tinypic.com/r/ipqfeh/9

References used in order to change existing code:  
Bjarne Stroustrup (in Polish) – Programming in C++  
Scott Meyers – Effective Modern C++ 
Jan Skansholm – C++ from the beginning 
Online tutorials 
Online PNG files for spacecraft and zerg (StarCraft)  
Online music cover of Beethoven Ode 
