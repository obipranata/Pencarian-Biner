#include <stdio.h>
#include <iostream.h>
#include <conio.h>


       int pencarian() {
            int a [9] = {1,  3, 4, 4, 6, 17, 79, 81, 90};
            int n = 9;
            int x = 79;

            int left = 0;
            int right = n - 1;
            int mid;

            while (left < right) {
                mid = (left + right) / 2;
                if (x > a[mid]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }

            if (a[left] == x) {
                return left;
            } else {
                return -1;
            }
        }


int main(){
   cout << "Hasil pencarian berada pada index ke " << pencarian();

    getch();
}
