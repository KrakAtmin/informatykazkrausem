#include <iostream>

using namespace std;

const int N = 10;

void babelkowe(int A[]) {
    for (int i=1; i<N; i++)
        for (int j=0; j<N-i; j++)
            if (A[j]>A[j+1])
                swap(A[j],A[j+1]);
}

int main() {
    int A[N] = {7,9,2,6,1,5,3,8,4,0};

    babelkowe(A);

    for (int i=0; i<N; i++) {
        cout << A[i] << " ";
    }
}
