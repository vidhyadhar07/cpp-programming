#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Game
{
private:
    int playerChoice;
    int computerChoice;

public:
    void getPlayerChoice()
    {
        cout << "==============================" << endl;
        cout << "      STONE PAPER SCISSORS    " << endl;
        cout << "==============================" << endl;

        cout << "\nChoose an option:\n";
        cout << "1. Stone\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";

        while (!(cin >> playerChoice) || playerChoice < 1 || playerChoice > 3)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice! Please enter a number between 1 and 3: ";
        }
    }

    void getComputerChoice()
    {
        computerChoice = rand() % 3 + 1;
    }

    string choiceToString(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Stone";
        case 2:
            return "Paper";
        case 3:
            return "Scissors";
        default:
            return "Unknown";
        }
    }

    void determineWinner()
    {
        cout << "\nYou chose      : " << choiceToString(playerChoice) << endl;
        cout << "Computer chose : " << choiceToString(computerChoice) << endl;

        if (playerChoice == computerChoice)
        {
            cout << "\nGame is a Draw!" << endl;
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
                 (playerChoice == 2 && computerChoice == 1) ||
                 (playerChoice == 3 && computerChoice == 2))
        {
            cout << "\nCongratulations! You Win!" << endl;
        }
        else
        {
            cout << "\nComputer Wins! Better Luck Next Time." << endl;
        }
    }
};

int main()
{
    // Seed the random number generator only once
    srand(time(0));

    char playAgain;

    do
    {
        Game game;

        game.getPlayerChoice();
        game.getComputerChoice();
        game.determineWinner();

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\n==================================" << endl;
    cout << "   Thanks for Playing!" << endl;
    cout << "   Visit Again!" << endl;
    cout << "==================================" << endl;

    return 0;
}


/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game
{
private:
    int playerChoice;
    int computerChoice;

public:
    Game()
    {
        srand(time(0));
    }

    void getPlayerChoice()
    {
        cout << "Hello Player!" << endl;
        cout << "\nChoose the option:- \n";
        cout << " 1. Stone\n 2. Paper\n 3. Scissors\n";
        cout << "Enter Your Choice (1-3): ";
        cin >> playerChoice;

        while (playerChoice < 1 || playerChoice > 3)
        {
            cout << "Invalid choice! Please choose between 1-3: ";
            cin >> playerChoice;
        }
    }

    void getComputerChoice()
    {
        computerChoice = rand() % 3 + 1;
    }

    string choiceToString(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Stone";
        case 2:
            return "Paper";
        case 3:
            return "Scissors";
        default:
            return "Unknown";
        }
    }

    void determineWinner()
    {
        cout << "\nYou Chose: " << choiceToString(playerChoice) << endl;
        cout << "Computer Chose: " << choiceToString(computerChoice) << endl;

        if (playerChoice == computerChoice)
        {
            cout << "Game is a Draw!" << endl;
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
                 (playerChoice == 2 && computerChoice == 1) ||
                 (playerChoice == 3 && computerChoice == 2))
        {
            cout << "\nCongratulations! You Win! 😀" << endl;
        }
        else
        {
            cout << "\nComputer Wins! Better Luck Next Time. 😢" << endl;
        }
    }
};

int main()
{
    char playAgain;
    do
    {
        Game g1;
        g1.getPlayerChoice();
        g1.getComputerChoice();
        g1.determineWinner();

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for Playing. Visit Again!" << endl;
    cout << "We hope to see you again!" << endl;
    cout << "We will surely look forward to your next visit." << endl;
    cout << "Thank you for join the game!" << endl;
    cout << "Hope you enjoyed the game!" << endl;
    return 0;
}
*/
