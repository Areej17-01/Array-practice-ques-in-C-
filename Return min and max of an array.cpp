#include <iostream>
using namespace std;
int max(int array[],int n) {
    int temp = array[0];
    int temp_min = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] > temp) {

            temp = array[i];
        }

    }
    return temp;
}
int min(int array[], int n) {
    int temp = array[0];
    int temp_min = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] < temp) {

            temp = array[i];
        }

    }
    return temp;
}
