#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    vector<string> quotes = {
        "The unexamined life is not worth living. — Socrates",
        "I think, therefore I am. — Descartes",
        "Knowing yourself is the beginning of all wisdom. — Aristotle",
        "The only true wisdom is in knowing you know nothing. — Socrates",
        "To live is to suffer, to survive is to find some meaning in the suffering. — Nietzsche",
        "Man is condemned to be free. — Sartre",
        "He who has a why to live can bear almost any how. — Nietzsche",
        "The purpose of life is not to be on the side of the majority, but to escape finding oneself in the ranks of the insane. — Marcus Aurelius",
        "We are what we repeatedly do. Excellence, then, is not an act, but a habit. — Aristotle",
        "A journey of a thousand miles begins with a single step. — Lao Tzu",
        "The more I know, the more I know I don't know. — Socrates",
        "Life is not a problem to be solved, but a reality to be experienced. — Sartre",
        "The secret of happiness is freedom. — Democritus",
        "Do not pray for an easy life, pray for the strength to endure a difficult one. — Bruce Lee",
        "The soul is dyed the color of its thoughts. — Marcus Aurelius",
        "There is no wealth like knowledge, and no poverty like ignorance. — Ali ibn Abi Talib",
        "Your task is not to seek for love, but merely to seek and find all the barriers within yourself that you have built against it. — Rumi",
        "The philosopher's task is to be a witness to the world. — Camus",
        "Truth is like a lion; you don't have to defend it. Let it loose; it will defend itself. — Saint Augustine",
        "Wisdom begins in wonder. — Socrates",
        "What is a man? A miserable little pile of secrets. — Doctor Who"
    };

    random_device rd;
    mt19937 gen(rd());

    int count = 1;
    if (argc > 1) {
        try {
            count = stoi(argv[1]);
            if (count <= 0) {
                count = 1;
            }
        } catch (...) {
            count = 1;
        }
    }

    cout << "=== Holy Philosophy Generator ===\n\n";

    for (int i = 0; i < count; ++i) {
        uniform_int_distribution<int> dist(0, static_cast<int>(quotes.size()) - 1);
        cout << i + 1 << ". " << quotes[dist(gen)] << "\n\n";
    }

    return 0;
}
