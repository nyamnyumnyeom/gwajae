#include <iostream>
using namespace std;


int suming(int arr[]) {
    int i = 0;
    int sum = 0;
    for (i; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}


double avging(int* haping) {
    double avvg = 0.0;
    avvg = *haping / 5;
    return avvg;
}

int main() {
    int arr[5];
    int hap = 0;
    int* haping = &hap;
    double avg = 0.0;

    cout << "숫자 5개를 입력해주세요 : " << endl;


    for (int i = 0; i < 5;i++) {
        cin >> arr[i];
    }


    hap = suming(arr);
    avg = avging(haping);


    cout << "합 : " << hap << endl;
    cout << "평균 : " << avg << endl;

    return 0;
}
