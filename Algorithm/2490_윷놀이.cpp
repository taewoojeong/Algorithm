#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
   int num;
   int cnt = 3;

   while (cnt--) {
      int num0 = 0, num1 = 0;

      for (int i = 0; i < 4; i++) {
         cin >> num;
         if (num == 0) {
            num0++;
         }
         else if (num == 1) {
            num1++;
         }
      }

      if (num0 == 1 && num1 == 3) {
         cout << 'A';
      }
      else if (num0 == 2 && num1 == 2) {
         cout << 'B';
      }
      else if (num0 == 3 && num1 == 1) {
         cout << 'C';
      }
      else if (num0 == 4) {
         cout << 'D';
      }
      else if (num1 == 4) {
         cout << 'E';
      }
      cout << "\n";
   }
}
