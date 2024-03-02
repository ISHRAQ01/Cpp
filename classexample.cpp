#include<iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    // Declare the friend function for adding two complex numbers
    friend ComplexNumber operator+(const ComplexNumber &num1, const ComplexNumber &num2);

    void display() {
        if (imaginary < 0) {
            std::cout << real << " - " << -imaginary << "i" << std::endl;
        } else {
            std::cout << real << " + " << imaginary << "i" << std::endl;
        }
    }
};

// Define the friend function for adding two complex numbers
ComplexNumber operator+(const ComplexNumber &num1, const ComplexNumber &num2) {
    return ComplexNumber(num1.real + num2.real, num1.imaginary + num2.imaginary);
}

int main() {
    ComplexNumber num1(3.0, 4.0);
    ComplexNumber num2(1.5, 2.5);

    ComplexNumber sum = num1 + num2;

    std::cout << "Sum: ";
    sum.display();

    return 0;
}
