#include <iostream>
#include <string>
using namespace std;
// used array to store the capitals 
int main() {
    const int totalQuestions = 10;
    const string questions[totalQuestions] = {
        "What is the capital of France?",
        "What is the capital of Germany?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of United States?",
        "What is the capital of Belgium?",
        "What is the capital of Grecee?",
        "What is the capital of Malta?",
        "What is the capital of Ireland?",
        "What is the capital of Portugal?",
        
    };

    const string answers[totalQuestions] = {
        "PARIS", "BERLIN", "ROME", "MADRID", "WASHINGTON", "BRUSSELS", "ATHENS", "VALLETTA", "DUBLIN", "LISBON"
    };

    int score = 0;
    string userAnswer;

    cout << "Welcome to the Capitals Quiz Game!" << "\n\n";
    cout << "ENTER YOUR RESPONSE IN CAPITAL LETTERS" << "\n\n";
    
        // for in loop to navigate trhough each index
    for (int i = 0; i < totalQuestions; i++) {
        cout << i + 1 << ". " << questions[i] << "\n> ";
        getline(cin, userAnswer); // cin to get the value from the user 

        if (userAnswer == answers[i]) {
            cout << "Correct!\n\n";
            score += 1;
        } else {
            cout << "Incorrect. The correct answer is " << answers[i] << ".\n\n";
        }
    }

    cout << " You scored " << score << " out of " << totalQuestions << ".\n";

    return 0;
}