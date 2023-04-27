#include <iostream>

using namespace std;

const int N = 10;

void wstawianie(int A[]) {
    int j, pom;

    for (int i=1; i<N; i++) {
        pom = A[i];
        j = i - 1;
        while (j>=0 && A[j]>pom) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = pom;
    }
}

int main() {
    int A[N] = {7,9,2,6,1,5,3,8,4,0};

    wstawianie(A);

    for (int i=0; i<N; i++) {
        cout << A[i] << " ";
    }
}
