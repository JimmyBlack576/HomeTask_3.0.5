#include <iostream>

using namespace std;

int main()
{
    char arr[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i] << arr1[j] << " ";
        }
        cout << endl;
    }


}