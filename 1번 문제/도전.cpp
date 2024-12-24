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

    cout << "������ ������ �Է��ϼ��� (�ִ� " << k << "): ";
    cin >> n;

    cout << "���ڸ� �Է��ϼ���:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "���� ����� �����ϼ��� (1: ��������, 2: ��������): ";
    cin >> sortmethod;

    if (sortmethod == 1) {
        up(arr, n);
        cout << "�������� ���� ���: ";
    }
    else if (sortmethod == 2) {
        down(arr, n);
        cout << "�������� ���� ���: ";
    }
    else {
        cout << "�߸��� �Է��Դϴ�." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
