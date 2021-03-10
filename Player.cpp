#include "player.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // variables //
    string player, chansons;
    int score_chanson0, score_chanson1, score_chanson2, score_chanson3, score_chanson4, player_name;

    //variables à 0 //
    score_chanson0 = 0
    score_chanson1 = 0
    score_chanson2 = 0
    score_chanson3 = 0
    score_chanson4 = 0
}

class score
{
    //variables chansons//
    private:
     int score_chanson0;
     int score_chanson1;
     int score_chanson2;
     int score_chanson3;
     int score_chanson4;
     int player_name;

    public:
{ //Variable score (score entre 0 et 1000)//
    for (int i = 0; i < 1000; i++)
    name[i] = playerpseudo;
}

//Chansons//
void set0(int chanson0);
intgetchanson0;

void set1(int chanson1);
intgetchanson1;

void set2(int chanson2);
intgetchanson2;

void set3(int chanson3);
intgetchanson3;

void set4(int chanson4);
intgetchanson4;

//calcul des moyennes, scores//
void compute(int 0, int 1, int 2, int 3, int 4)
{
sum = 0 + 1 + 2 + 3 + 4;
moyenne = sum / 5;
}

 void output()
	    {
		cout <<"total: "<< sum << endl;
		cout << "moyenne: " << moyenne << endl;

		if (moyenne >= 800)
			cout << "Grade: S" << endl << "Parfait !" << endl;
		else if (moyenne >= 600 && moyenne < 800)
			cout << "Grade: A" << endl << "Excellent !" << endl;
		else if (moyenne >= 400 && moyenne < 600)
			cout << "Grade: B" << endl << "Assez Bien !" << endl;
		else if (moyenne>= 200 && moyenne < 400)
			cout << "Grade: C" << endl << "Bien !" << endl;
		else
			cout << "D : Bof !" << endl;
	    }

//Highscore//

void highscore(int score, int highscore)
{
    if (score > highscore)
    highscore = score;
    cout << "Votre score est de" << score;
    return 0;  
}
//Highscore = score = l'ancien score disparait si on améliore notre score//
