#include <iostream>
#include <limits>

int main() {


    int n;
    std::cin >> n;
    int arr[n];
    int ansArr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            ansArr[i] = arr[i] * arr[i] * arr[i];
        } else {
            ansArr[i] = arr[i] * arr[i];
        }
    }

    int minn = std::numeric_limits<int>::max();
    int posMin = -1, posMax =-1;
    int maxx = std::numeric_limits<int>::min();

    for (int i = 0; i < n; i++) {
        if (ansArr[i] < minn) {
            minn = ansArr[i];
            posMin = i;
        }
        if (ansArr[i] > maxx) {
            maxx = ansArr[i];
            posMax = i;
        }
        
    }
    for (int i = 0; i < n; i++) {
        std::cout << ansArr[i] << ' ';
    }
    std::cout << '\n';

    std::swap(ansArr[posMin], ansArr[posMax]);

    for (int i = 0; i < n; i++) {
        std::cout << ansArr[i] << ' ';
    }




}