#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int card, max, cardnum[100], score = 0;
    cin >> card >> max;
    for (int i = 0; i < card; i++) {
        cin >> cardnum[i];
    }
    for (int i = 0; i < card - 2; i++) {
        for (int j = i + 1; j < card - 1; j++) {
            for (int k = j + 1; k < card; k++) {
                if (cardnum[i] + cardnum[j] + cardnum[k] <= max && cardnum[i] + cardnum[j] + cardnum[k] > score) {
                    score = cardnum[i] + cardnum[j] + cardnum[k];
                }
            }
        }
    }
    cout << score << "\n";
    return 0;
}
