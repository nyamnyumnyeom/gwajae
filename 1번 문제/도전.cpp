#include <iostream>

using namespace std;

void up(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

void down(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

int main() {
    const int k = 50;
    int arr[k];
    int n, sortmethod;

    cout << "숫자의 개수를 입력하세요 (최대 " << k << "): ";
    cin >> n;

    cout << "숫자를 입력하세요:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "정렬 방식을 선택하세요 (1: 오름차순, 2: 내림차순): ";
    cin >> sortmethod;

    if (sortmethod == 1) {
        up(arr, n);
        cout << "오름차순 정렬 결과: ";
    }
    else if (sortmethod == 2) {
        down(arr, n);
        cout << "내림차순 정렬 결과: ";
    }
    else {
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
