#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void music (string teks, int speed) {
    for (char c : teks) {
        cout << c <<flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
    cout <<endl;
}

int main () {
    cout<< "\033[31m==========SORY 510==========\033[0m"<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[33mKu harap kau menyesal\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[33mKu harap kau menyesalinya\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[33mBerikan aku alasan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[33mSatu alasan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[33mTuk melupakan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[32mTuhan tolong hapuskan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[32mSetiap nama yang ku ucapkan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[32mSampaikan sebuah pesan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[32mSebuah Peringatan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));
    music("\033[32mTuk melupakan\033[0m", 100);
    this_thread::sleep_for(chrono::seconds(1));

    cout<< "\033[31m===========================\033[0m"<<endl; 
}
