#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;


    while (a != b) {

        a = (a + 1) / 2;
        b = (b + 1) / 2;

        answer++;
    }

    return answer;
}

int main() {
    int n = 8;
    int a = 4;
    int b = 7;

    cout << solution(n, a, b) << endl;

    return 0;
}
