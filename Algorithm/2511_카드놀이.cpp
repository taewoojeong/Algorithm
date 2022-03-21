#include <iostream>

using namespace std;

int score[2][10], scoreA, scoreB, winner = 0;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 10; j++){
            cin >> score[i][j];
        }
    }
    for(int i = 0; i < 10; i++){
        if(score[0][i] > score[1][i]) {
            scoreA += 3;
            winner = 'A';
        }
        else if(score[0][i] == score[1][i]){
            scoreA++;
            scoreB++;
        }
        else {
            scoreB += 3;
            winner ='B';
        }
    }
    if(scoreA > scoreB){
        cout << scoreA << " " << scoreB << "\nA\n";
    }
    else if(scoreA < scoreB){
        cout << scoreA << " " << scoreB << "\nB\n";
    }
    else{
        if(winner == 0){
            cout << scoreA << " " << scoreB << "\nD\n";
        }
        else {
            cout << scoreA << " " << scoreB << "\n" << (char)winner << "\n";
        }
    }
}
