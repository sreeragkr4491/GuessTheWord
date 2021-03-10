//#include<iostream>
//#include<string>
//#include<cstdlib>
//#include <time.h>
//#include <random>
//using namespace std;
//// main function
//
//int main()
//{
//    // word store
//    // You can add more 5 digit word here 
//    string strList[] =
//    {
//     "about","above","abuse","actor","acute","admit","adopt","adult",
//     "after","again","agent","agree","ahead","alarm","album","alert",
//     "alike","alive","allow","alone","along","alter","among","anger",
//     "began","begin","begun","being","below","civil","claim","class",
//     "clean","drawn","dream","dress","drill","drink","drive","drove",
//     "dying","error","event","every","flash","fleet","floor","fluid",
//     "group","grown","guard","guess","hotel","house","index","inner",
//     "input","issue","joint","jones","judge","known","stone","stood",
//     "valid","value","video","virus","visit","vital","voice","write"
//
//    };
//    // total word
//    int n = sizeof(strList) / (sizeof(strList[0]));
//
//   
//    cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
//    cout << "\n\nEach letter is represented by a star.";
//    cout << "\n\nYou have only one try and guess the word.";
//    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//    cout << "\nYou can quit anytime by entering : q \n\n";
//    // for random number generator
//    srand(time(NULL));
//    int score = 0;
//    string guess;
//    // loop
//    do
//    {   // ranodom index
//        int index = rand() % n;
//        // random position
//        int ch1 = rand() % 5;
//        int ch2 = rand() % 5;
//        // chekcing for same
//        while (ch2 == ch1)
//            ch2 = rand() % 5;
//
//        string str = strList[index];
//        string originalStr = str;
//        // replacing with *
//        str[ch1] = '*';
//        str[ch2] = '*';
//        // showing 
//        cout << "word :  " << str;
//        cout << "\nEnter your word guess : ";
//        cin >> guess;
//        // checking for quit
//        if (guess.compare("q") == 0)
//        {
//            cout << "\nYour total correct guess : " << score << endl;
//            exit(0);
//        }
//        // winning condition
//        if (guess.compare(originalStr) == 0)
//        {
//            cout << "\n      UH-OH!!!! Your Guess is correct.\n";
//            score++;
//        }
//        else
//        {
//            cout << "\n      Your Guess is Incorrect.!!!!!\n";
//            cout << "Correct word : " << originalStr << endl;
//        }
//    } while (1);
//    // returning from main
//    return 0;
//}




//
//
//#include<iostream>
//#include<conio.h>
//#include"guess.h"
//using namespace std;
//
//int main()
//{
//    guess g;
//
//    cout << "Press 1. Start 2.Instruction 3.Exit" << endl;
//    cin >> g.ch;
//    if (g.ch == 1)
//    {
//        cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
//        cout << "\n\nEach letter is represented by a star.";
//        cout << "\n\nEvery word contains 5 letters.";
//        cout << "\n\nYou have only one try and guess the word.";
//        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//        cout << "\nYou can quit anytime by entering : q \n\n";
//        g.check();
//    }
//    else if (g.ch == 2)
//    {
//        cout << "This is a c++ word guessing game. In this game a 5 digit random word and a question will be displayed to the screen. Two positions will be kept blank & Then user will guesses that word. If he/she guesses the correct word then he/she will get a 10 point." << endl;
//        cout << endl;
//
//        cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
//        cout << "\n\nEach letter is represented by a star.";
//        cout << "\n\nEvery word contains 5 letters.";
//        cout << "\n\nYou have only one try and guess the word.";
//        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//        cout << "\nYou can quit anytime by entering : q \n\n";
//        g.check();
//    }
//    else if (g.ch == 3)
//    {
//        cout << "Your score=" << g.score << endl;
//        _getch();
//    }
//    return 0;
//}



//
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<cstdlib>
//#include <time.h>
//#include <random>
//#include<conio.h>
//using namespace std;
//// main function
//int ch;
//string strList[] =
//{
// "about","above","abuse","actor","acute","admit","adopt","adult",
// "after","again","agent","agree","ahead","alarm","album","alert",
// "alike","alive","allow","alone","along","alter","among","anger",
// "began","begin","begun","being","below","civil","claim","class",
// "clean","drawn","dream","dress","drill","drink","drive","drove",
// "dying","error","event","every","flash","fleet","floor","fluid",
// "group","grown","guard","guess","hotel","house","index","inner",
// "input","issue","joint","jones","judge","known","stone","stood",
// "valid","value","video","virus","visit","vital","voice","write"
//
//};
//// total word
//
//int n = sizeof(strList) / (sizeof(strList[0]));
//int score = 0;
//string guess;
//
//int check();
//
//int main()
//{
//    cout << "Press 1. Start 2.Instruction 3.Exit" << endl;
//    cin >> ch;
//    if (ch == 1)
//    {
//        cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
//        cout << "\n\nEach letter is represented by a star.";
//        cout << "\n\nEvery word contains 5 letters.";
//        cout << "\n\nYou have only one try and guess the word.";
//        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//        cout << "\nYou can quit anytime by entering : q \n\n";
//        check();
//    }
//    else if (ch == 2)
//    {
//        cout << "This is a c++ word guessing game. In this game a 5 digit random word and a question will be displayed to the screen. Two positions will be kept blank & Then user will guesses that word. If he/she guesses the correct word then he/she will get a 10 point." << endl;
//        cout << endl;
//        
//        cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
//        cout << "\n\nEach letter is represented by a star.";
//        cout << "\n\nEvery word contains 5 letters.";
//        cout << "\n\nYou have only one try and guess the word.";
//        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//        cout << "\nYou can quit anytime by entering : q \n\n";
//        check();
//    }
//    else if (ch == 3)
//    {
//        cout << "Your score=" << score << endl;
//        _getch();
//    }
//
//}
//
//
//int check()
//{
//
//    // for random number generator
//    srand(time(NULL));
//
//
//    // loop
//    do
//    {   // ranodom index
//        int index = rand() % n;
//        // random position
//        int ch1 = rand() % 5;
//        int ch2 = rand() % 5;
//        // chekcing for same
//        while (ch2 == ch1)
//            ch2 = rand() % 5;
//
//        string str = strList[index];
//        string originalStr = str;
//       
//
//       //int n = originalStr.length();
//        char hint[6];
//        strcpy_s(hint, originalStr.c_str());
//
//
//
//        
//        // replacing with *
//        str[ch1] = '*';
//        str[ch2] = '*';
//        // showing 
//        cout << "word :  " << str<<endl;
//        cout << "One missing letter is :"<< hint[ch1] <<endl;
//        cout << "\nEnter your word guess : ";
//        cin >> guess;
//        // checking for quit
//        if (guess.compare("q") == 0)
//        {
//            cout << "\nYour total correct guess : " << score << endl;
//            exit(0);
//        }
//        // winning condition
//        if (guess.compare(originalStr) == 0)
//        {
//            cout << "\n     YAHOOO!!!!  Your Guess is correct.!!!!!\n";
//            score+=10;
//            cout << "Score : " << score << endl;
//        }
//        else
//        {
//            cout << "\n     UH-OH!!!! Your Guess is Incorrect.\n";
//            cout << "Correct word : " << originalStr << endl;
//            cout << "Score : " << score << endl;
//            exit(0);
//        }
//    } while (1);
//    // returning from main
//    return 0;
//}
//
//
//
