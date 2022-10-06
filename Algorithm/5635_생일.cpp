#include <vector>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <set>
#include <utility>
#include <stack>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
using namespace std;
typedef struct birth{
    string name;
    int day;
    int month;
    int year;
}Birth;

bool compare(birth a, birth b){
    if(a.year > b.year){
        return 1;
    }
    else if(a.year == b.year){
        if(a.month > b.month){
            return 1;
        }
        else if(a.month == b.month){
            if(a.day > b.day){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}
int main() {
    int T;
    scanf("%d", &T);
    vector <birth> v(T);
    for(int i = 0; i < T; i++){
        cin >> v[i].name >> v[i].day >> v[i].month >> v[i].year;
    }
    sort(v.begin(), v.end(), compare);
    cout << v[0].name << "\n" << v[T - 1].name;
}
