Basics of C++

1. Write a C++ program to print Hello MySirG on the screen.
2. Write a C++ program to print Hello on the first line and MySirG on the second line
using endl.
3. Write a C++ program to calculate the sum of two numbers.
4. Write a C++ program to calculate the area of a circle
5. Write a C++ program to calculate the volume of a cuboid.
6. Write a C++ program to calculate an average of 3 numbers.
7. Write a C++ program to calculate the square of a number
8. Write a C++ program to swap values of two int variables without using third variable
9. Write a C++ program to find the maximum of two numbers.
10. Write a C++ program to add all the numbers of an array of size 10.

Solution:-

1. #include <iostream>
using namespace std;

int main() {
    cout << "Hello MySirG" << endl;
    return 0;
}

2. #include <iostream>
using namespace std;

int main() {
    cout << "Hello" << endl;
    cout << "MySirG" << endl;
    return 0;
}

3. #include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "Sum: " << sum << endl;
    return 0;
}

4. #include <iostream>
using namespace std;

int main() {
    float radius, area;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "Area of the circle: " << area << endl;
    return 0;
}

5. #include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;
    cout << "Enter length, width, and height of the cuboid: ";
    cin >> length >> width >> height;
    volume = length * width * height;
    cout << "Volume of the cuboid: " << volume << endl;
    return 0;
}

6. #include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, average;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "Average: " << average << endl;
    return 0;
}

7. #include <iostream>
using namespace std;

int main() {
    int num, square;
    cout << "Enter a number: ";
    cin >> num;
    square = num * num;
    cout << "Square: " << square << endl;
    return 0;
}

8. #include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping, a: " << a << " b: " << b << endl;
    return 0;
}

9. #include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        cout << "Maximum: " << num1 << endl;
    } else {
        cout << "Maximum: " << num2 << endl;
    }
    return 0;
}

10. #include <iostream>
using namespace std;

int main() {
    int arr[10], sum = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}
