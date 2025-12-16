#include <iostream>
using namespace std;

int main() {
    // T: 케이스 갯수 입력
    int T;
    cin >> T;
    
    int arr[T];
    
    // 케이스 입력
    for (int i = 0; i < T; i++) {
        cin >> arr[i];
    }
    
    // 최솟값, 최댓값 초기값 설정
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < T; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    // 최솟값, 최댓값 출력
    cout << min << " " << max << endl;
    
    return 0;
}