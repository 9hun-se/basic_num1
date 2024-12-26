#include <iostream>

using namespace std;


int sumTotal(int number[],int n)
{
    int sum=0;
    for (int i = 0;i < n;  i++)
        sum += number[i];
    return sum;
}
double averageTotal(int number[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += number[i];
    return double(sum)/double(n);
}

void downArray(int number[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (number[j] < number[j + 1]) {
                int a = number[j];
                number[j] = number[j + 1];
                number[j + 1] = a;
            }
        }
    }
}

void upArray(int number[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (number[j] > number[j + 1]) {
                int a = number[j];
                number[j] = number[j + 1];
                number[j + 1] = a;
            }
        }
    }
}

int main() {
    const int k = 30;
    int number[k];
    int n;

    cout << "������ ������ �Է��ϼ���: ";
    cin >> n;

    cout << "���ڸ� �Է��ϼ���:\n";
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }
    cout<<sumTotal(number, n)<<endl;
    cout << averageTotal(number, n)<<endl;
    int l;
    cout << "1: ������������ ����, 2: ������������ ����: ";
    cin >> l;

    if (l == 1) {
        upArray(number, n);
        cout << "������������ ����: ";
    }
    else if (l == 2) {
        downArray(number, n);
        cout << "������������ ����: ";
    }
    else {
        cout << "�߸��� �Է��Դϴ�." << endl;
       
    }

    for (int i = 0; i < n; i++) {
        cout << number[i] << " ";
    }
    cout << endl;

    return 0;
}