#pragma once
#include <iostream> // input output 쉽게 사용. cout 종류 사용할 때
#include <string>   //문자열
using namespace std;    //std 라이브러리 namespace 설정. std 안 써도 되도록 하는 것

// SmartHome
class SmartHome {
private:
    // 시험. 클래스 변수들 (class member variable, attribute)
    string owner; // 문자열
    int temperature; // 정수형
    int humidity;
    bool security; // true or false
public:
    //시험. 클래스 함수들 (class method, member function)
    //생성자. 파일 이름과 똑같은 변수. 
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    } //temperature, humidity 같은 애들을 매개 변수라 한다.
    /*SmartHome(string o, int t, int h, bool sec)
        :temperature(t), humidity(h), security(sec) {
        strcpy(owner,o); //함수 호출할 때 값들: 인수
    }*/ // SmartHome을 표현하는 다른 방법

    void setTemperature(int temperature) {
        this->temperature = temperature;  // settemperature: temp에 인수를 집어 넣는 함수. 이때 20도, 30도 같은 것이 인수.
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() {
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << "집주인 " << this->owner << endl; //endl: end of line. 출력 줄바꿈
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};
