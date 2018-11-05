//
// Created by 김재훈 on 22/10/2018.
//

#include <iostream>

using namespace std;

class student{
    int id, score;
public:
    static int how_many;
    void reset() {id = 0; score = 0;}
    void set(int id_value, int score_value){
        id = id_value; score = score_value;
    }
    void print(){
        cout << "id: " << id << endl;
        cout << "score: " << score << endl;
        cout << "how_many" << how_many << endl;
    }
};

int student::how_many = 0;