#include <iostream>
#include <string>
using namespace std;

// ���ڿ� ���� �Լ�
string compressString(const string& input) {
    string compressed = ""; // ����� ���ڿ��� ������ ����
    int count = 1; // ���� ������ ������ ���� ����

    // �Է¹��� ���ڿ��� ��ȸ�ϸ� ����
    for (int i = 0; i < input.length(); i++) {
        // ���� ���ڿ� ���� ���ڰ� ���ٸ� count ����
        if (i < input.length() - 1 && input[i] == input[i + 1]) {
            count++;
        }
        else {
            // ���� ���ڸ� ���� ���ڿ��� �߰�
            compressed += input[i];
            // ���ڰ� 2�� �̻� �ݺ��Ǹ� �ݺ� Ƚ���� �߰�
            if (count > 1) {
                compressed += to_string(count);
                count = 1; // ī��Ʈ �ʱ�ȭ
            }
        }
    }

    return compressed;
}

int main() {
    string userInput;

    // ����ڷκ��� ���ڿ� �Է� �ޱ�
    cout << "Enter a string: ";
    getline(cin, userInput);

    // ����� ���ڿ� ���
    string compressedString = compressString(userInput);
    cout << "Compressed string: " << compressedString << endl;

    return 0;
}
