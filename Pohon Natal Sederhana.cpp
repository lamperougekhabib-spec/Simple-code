#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int n;
int m;

int main () {
    cout<<"Masukan Nilai Pohon : ";
    cin>>n;
    cout<<"Masukan Nilai Batang : ";
    cin>>m;

    srand(time(0));
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout<< " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (i == 0 && k == 0) {
                cout << "\033[93m*\033[0m";
            }
            else if (rand() % 3 == 0) {
                cout<<"\033[31mo\033[0m";
            }
            else {
                cout<<"\033[32m*\033[0m";
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout<<" ";
        }
        cout<<"\033[33m||\033[0m"<<endl;
    }
}
