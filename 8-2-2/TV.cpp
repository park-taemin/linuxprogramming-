#include <iostream>
#include <string>
using namespace std;

class TV {
    int size; // 스크린 크기
public:
    // 기본 생성자
    TV() { 
        size = 20; 
        cout << "TV 생성" << endl; 
    }
    // size 값을 받는 생성자
    TV(int size) { 
        this->size = size; 
        cout << "TV 생성" << endl; 
    }
    // size 값을 반환하는 함수
    int getSize() { return size; }
    // size 값을 설정하는 함수
    void setSize(int size) { this->size = size; }
};

class WideTV : public TV { // TV를 상속받는 WideTV
    bool videoIn; // 비디오 입력 기능 유무
public:
    // 기본 생성자
    WideTV() : TV() { 
        videoIn = false; 
        cout << "WideTV 생성" << endl; 
    }
    // size와 videoIn을 받는 생성자
    WideTV(int size, bool videoIn) : TV(size) { 
        this->videoIn = videoIn; 
        cout << "WideTV 생성" << endl; 
    }
    // videoIn 값을 반환하는 함수
    bool getVideoIn() { return videoIn; }
    // videoIn 값을 설정하는 함수
    void setVideoIn(bool videoIn) { this->videoIn = videoIn; }
};

class SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
    string ipAddr; // 인터넷 주소
public:
    // 기본 생성자
    SmartTV() : WideTV() { 
        ipAddr = "0.0.0.0"; 
        cout << "SmartTV 생성" << endl; 
    }
    // ipAddr과 size를 설정하는 함수
    void setSmartTV(int size, bool videoIn, string ipAddr) {
        setSize(size);           // TV 클래스의 size 설정
        setVideoIn(videoIn);      // WideTV 클래스의 videoIn 설정
        this->ipAddr = ipAddr;    // SmartTV 클래스의 ipAddr 설정
    }
    // ipAddr 값을 반환하는 함수
    string getIpAddr() { return ipAddr; }
};

int main() {
    SmartTV htv;
    htv.setSmartTV(50, false, "192.0.0.2");

    cout << "size = " << htv.getSize() << endl;
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
    cout << "IP = " << htv.getIpAddr() << endl;

    return 0;
}

