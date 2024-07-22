#include <iostream>
#include <cstdlib>
#include <ctime>

#define Rock 1
#define Paper 2
#define Scissors 3

using namespace std;
int main(){

    srand((unsigned int) time(NULL));

    int player = 0;
    int ai = 0;
    bool draw = false;



    do
    {
        cout << "Rock Paper or Scissors?"<< endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cin >> player;
        cout << endl;

        // ai throw
        ai = (rand() % 3) +1;

        if (ai == Rock) {
            cout << "AI throws Rock!!" << endl;
        } else if (ai == Paper) {
            cout << "AI Throws Paper!!" << endl;
        }else if (ai == Scissors) {
            cout << "AI Throws Scissors!!" << endl;
        }

        if (player == ai) {
            draw = true;
            cout << "Draw!! Play again!" << endl;
        } else if (player == Rock && ai == Scissors) {
        cout << "Rock beats Scissors!  You Win!!!!" << endl;
        }else if (player == Rock && ai == Paper) {
        cout << "Paper beats Rock!  You Lose!!!!" << endl;
        } else if (player == Paper && ai == Scissors) {
        cout << "Scissors Beat Paper!  You Lose!!!!" << endl;
        } else if (player == Paper && ai == Rock) {
        cout << "Paper beats Rock!  You Win!!!!" << endl;
        } else if (player == Scissors && ai == Paper) {
        cout << "Scissors beats Paper!  You Win!!!!" << endl;
        } else if (player == Scissors && ai == Rock) {
        cout << "Rock beats Scissors!  You Lose!!!!" << endl;
        }
        cout << endl;
    } while (draw);
}
