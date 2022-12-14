#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void printIntro();
char getServe();
bool checkServe(char serve, int& score);
int getPosition();
char getShot();
bool checkShot(char shot, int& score);
int getAim();
void printOutcome(int score);

int main()
{
    srand(time(0));
    printIntro();
    int score = 0;

    cout << "\n     SERVE!   TYPE: ";
    char serve = getServe();
    if (checkServe(serve, score))
    {
        cout << "\n     YOUR RETURN...\n";
        cout << "     POSITION: ";
        int position = getPosition();
        cout << "     TYPE OF SHOT: ";
        char shot = getShot();
        if (checkShot(shot, score))
        {

            cout << "\n     MY RETURN...\n";
            int aim = getAim();
            cout << "     POSITION: " << aim << endl;

            if (aim == position)
            {

                score++;
                cout << "     OUCH! MY SHOT WAS RIGHT ON TARGET!" << endl;
            }
            else
            {

                score--;
                cout << "     NICE SAVE! MY SHOT WAS OFF TARGET." << endl;
            }
        }
    }

    printOutcome(score);

    return 0;
}

char getServe()
{
    cout << "Enter the type of serve (f for flat, s for spin, or l for lob): ";

    char serve;
    cin >> serve;

    return serve;
}

bool checkShot(char shot, int& score)
{
    if (shot == 'v' || shot == 'V')
    {
        cout << "     NICE VOLLEY!" << endl;
        return true;
    }
    else if (shot == 'l' || shot == 'L')
    {
        cout << "     NICE LOB!" << endl;
        return true;
    }
    else
    {
        cout << "     THAT SHOT WAS NO GOOD!" << endl;
        score--;
        return false;
    }
}
void printOutcome(int score)
{

    if (score > 0)
    {
        cout << "\n     Congratulations! You won the game!" << endl;
    }
    else if (score < 0)
    {
        cout << "\n     Sorry, you lost the game. Better luck next time!" << endl;
    }
    else
    {
        cout << "\n     The game was a tie! Good game!" << endl;
    }
}

int getAim()
{
    int aim = rand() % 3 + 1;

    return aim;
}

int getPosition()
{
    cout << "Enter the position of your shot (1-3): ";

    int position;
    cin >> position;

    return position;
}

bool checkServe(char serve, int& score)
{
    if (serve == 'f' || serve == 'F')
    {
        cout << "     NICE FLAT SERVE!" << endl;
        return true;
    }
    else if (serve == 's' || serve == 'S')
    {
        cout << "     NICE SPIN SERVE!" << endl;
        return true;
    }
    else if (serve == 'l' || serve == 'L')
    {
        cout << "     NICE LOB SERVE!" << endl;
        return true;
    }
    else
    {
        cout << "     THAT SERVE WAS NO GOOD!" << endl;
        score--;
        return false;
    }
}

void printIntro()
{
    cout << "\t\t\tTENNIS MATCH" << endl;
    cout << "\t\tCREATIVE COMPUTING, MORRISTOWN, NEW JERSEY" << endl;
    cout << endl
        << endl
        << endl;

    cout << "THERE ARE SEVERAL OPTIONS AVAILABLE TO YOU AS TO POSITION," << endl;
    cout << "PLACEMENT OF SHOT, AND SPEED (TYPE) OF SHOT. THE KEY THAT " << endl;
    cout << "YOU WILL USE IS..." << endl;
    cout << "     POSITION(PLACEMENT, TOO): L.BACKCOURT(1);R.BACK-" << endl;
    cout << "COURT(2); L. FORECOURT(3); R. FORECOURT(4)." << endl;
    cout << "     SPEED (TYPE) OF SHOT: FAST-SLAM(S);SLOWLOB(L)." << endl;
    cout << "     BACKHANDS AND FOREHANDS WILL MERELY BE ASSUMED AS YOU " << endl;
    cout << "SHOOT FROM A CERTAIN SECTION OF THE COURT." << endl;
    cout << "     ON SERVES, YOU CANNOT HAVE PLACEMENT OPTIONS, BUT YOU" << endl;
    cout << "WILL BE ABLE TO ALTER THE SPEED OF IT.  BY THE WAY, YOU" << endl;
    cout << "WILL BE ALLOWED TO SERVE FIRST IN ALL GAMES." << endl;
    cout << "     ARE YOU READY?... HERE WE GO!!!" << endl;
}
char getShot()
{
    cout << "Enter the type of shot (v for volley, l for lob): ";
    char shot;
    cin >> shot;
    return shot;
}