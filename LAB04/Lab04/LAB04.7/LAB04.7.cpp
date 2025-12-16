// LAB04.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// --- ส่วนของการสร้างฟังก์ชัน ---
// รับค่า int เข้ามา และส่งคืนค่าเป็น bool (true/false)
bool isPrime(int n) {
    // 1. ถ้าเลขน้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
    if (n <= 1) {
        return false;
    }

    // 2. วนลูปเช็คตัวหาร ตั้งแต่ 2 ไปจนถึง n-1
 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // ถ้ามีตัวไหนหารลงตัว แสดงว่าไม่ใช่จำนวนเฉพาะทันที
            return false;
        }
    }

    // 3. ถ้าหลุดลูปมาได้ แสดงว่าไม่มีใครหารลงตัวเลย -> เป็นจำนวนเฉพาะ
    return true;
}

// --- ส่วนของโปรแกรมหลัก ---
int main() {
    int number;

    while (true) {
        cout << "Enter a number to check (0 to exit): ";
        cin >> number;

        if (number == 0) break; // กด 0 เพื่อออก

        // เรียกใช้ฟังก์ชัน isPrime ที่เราสร้างไว้
        if (isPrime(number)) {
            cout << number << " IS a Prime Number." << endl;
        }
        else {
            cout << number << " is NOT a Prime Number." << endl;
        }
        cout << "---------------------------------" << endl;
    }

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
