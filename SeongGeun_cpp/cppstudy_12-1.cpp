//
// Created by 김재훈 on 03/12/2018.
// 12-1 ~ 12-2
//

#include <iostream>

using namespace std;

class Airplane {
public:
    Airplane(int altitude = 5000, int capacity = 100) : itsAltitude(altitude), itsCapacity(capacity) {
        cout << "Airplain 생성자.." << endl;
    }

    virtual ~Airplane() {
        cout << "Airplain 소멸자 ..." << endl;
    }

    const int GetAltitude() const {
        return itsAltitude;
    }

    const int GetCapacity() const {
        return itsCapacity;
    }

    virtual void Fly() const {
        cout << "Airplain is flying" << "at the altitude of " << GetAltitude() << "feet." << endl;
    }

protected:
    int itsAltitude;
    int itsCapacity;
};

class Boat {
public:
    Boat(int speed = 50,

    int capacity = 20
    ) :

    itsSpeed (speed), itsCapacity(capacity) {
        cout << "Boat 생성자 ..." << endl;
    }

    virtual ~Boat() {
        cout << "Boat 소멸자" << endl;
    }

    const int GetSpeed() const {
        return itsSpeed;
    }

    const int GetCapacity() const {
        return itsCapacity;
    }

    virtual void Float() const {
        cout << "Boat is floating!" << endl;
    }

protected:
    int itsSpeed;
    int itsCapacity;
};

class FlyingBoat : public Airplane, public Boat {
public:
    FlyingBoat(int altitude = 1000, int speed = 30, int capacity = 4) : Airplane(altitude, capacity),
                                                                        Boat(speed, capacity) {
        cout << "FlyingBoat 생성자 ..." << endl;
    }

    virtual ~FlyingBoat() {
        cout << "FlyingBoat 소멸자 ..." << endl;
    }

    virtual void Fly() const {
        cout << "FlyingBoat can fly " << "at the altitude of " << Airplane::GetAltitude() << " feet." << endl;
    }

    virtual void Float() const {
        cout << "FlyingBoat can float ";
        cout << " with the speed of " << Boat::GetSpeed() << "." << endl;
    }
};

int main() {
    Airplane *blueSky = new FlyingBoat;
    Boat *bigWave = new FlyingBoat;
    cout << "bluerSky altitude: " << blueSky->GetAltitude() << endl;
    cout << "blueSky capacity: " << blueSky->GetCapacity() << endl;
    blueSky->Fly();
    cout << "bigWave speed: " << bigWave->GetSpeed() << endl;
    cout << "bigWave capacity: " << bigWave->GetCapacity() << endl;
    bigWave->Float();
    delete blueSky;
    delete bigWave;
    return 0;
}