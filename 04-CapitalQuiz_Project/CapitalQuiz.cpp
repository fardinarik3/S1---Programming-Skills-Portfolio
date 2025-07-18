#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    const int totalQuestions = 10;
    string questions[totalQuestions] = {
        "What is the capital of France?",
        "What is the capital of Germany?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of Portugal?",
        "What is the capital of the United Kingdom?",
        "What is the capital of Belgium?",
        "What is the capital of Netherlands?",
        "What is the capital of Austria?",
        "What is the capital of Switzerland?"
    };

    string answers[totalQuestions] = {
        "paris", "berlin", "rome", "madrid", "lisbon",
        "london", "brussels", "amsterdam", "vienna", "bern"
    };

    string userAnswer;
    int score = 0;

    cout << "Welcome to the European Capital Cities Quiz!\n";
    cout << "Please answer the following questions:\n\n";

    for (int i = 0; i < totalQuestions; i++) {
        cout << questions[i] << endl;
        cout << "Your answer: ";
        getline(cin, userAnswer);

        if (toLower(userAnswer) == answers[i]) {
            cout << "Correct!\n\n";
            score += 3;
        } else {
            cout << "Wrong! The correct answer is " << answers[i] << ".\n\n";
        }
    }

    cout << "Quiz Complete!\n";
    cout << "Your total score is: " << score << " out of 30.\n";

    return 0;
}
