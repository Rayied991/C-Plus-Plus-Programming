#include <iostream>
using namespace std;
int main()
{
    //BMI Calculator

    float weight, height, BMI;
    int choice;
    cout << "1.BMI Calculate(Weight(kg) and  height(meter)" << endl;
    cout << "2.BMI Calculate(Weight(lbs/pounds) and  height(inches)" << endl;
    cout << "3.BMI Calculate(Weight(kg) and  height(cm)" << endl;
    cout << "Enter your Choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:

        cout << "Enter weight in kg:" << endl;
        cin >> weight;
        cout << "Enter height in meter:" << endl;
        cin >> height;
        BMI = (weight) / (height * height);
        cout << "Your BMI is = " << BMI << endl;
        if (BMI < 18.5)
        {
            cout << "Underweight" << endl;
        }
        else if (BMI >= 18.5 && BMI <= 24.9)
        {
            cout << "Healthy" << endl;
        }
        else if (BMI >= 25.0 && BMI <= 29.9)
        {
            cout << "Overweight" << endl;
        }
        else if (BMI >= 30.0 && BMI <= 34.9)
        {
            cout << "Obese Class 1" << endl;
        }
        else if (BMI >= 35.0 && BMI <= 39.9)
        {
            cout << "Obese Class 2" << endl;
        }
        else if (BMI > 40.0)
        {
            cout << "Obese class 3" << endl;
        }
        break;

    case 2:

        cout << "Enter weight in lbs/pounds:" << endl;
        cin >> weight;
        cout << "Enter height in inches:" << endl;
        cin >> height;
        BMI = (703 * weight) / (height * height);
        cout << "Your BMI is = " << BMI << endl;
        if (BMI < 18.5)
        {
            cout << "Underweight" << endl;
        }
        else if (BMI >= 18.5 && BMI <= 24.9)
        {
            cout << "Healthy" << endl;
        }
        else if (BMI >= 25.0 && BMI <= 29.9)
        {
            cout << "Overweight" << endl;
        }
        else if (BMI >= 30.0 && BMI <= 34.9)
        {
            cout << "Obese Class 1" << endl;
        }
        else if (BMI >= 35.0 && BMI <= 39.9)
        {
            cout << "Obese Class 2" << endl;
        }
        else if (BMI > 40.0)
        {
            cout << "Obese class 3" << endl;
        }
        break;
    case 3:
        cout << "Enter weight in Kg:" << endl;
        cin >> weight;
        cout << "Enter height in Cm:" << endl;
        cin >> height;
        BMI = (weight) / (height * height);
        BMI = BMI * 10000;
        cout << "Your BMI is = " << BMI << endl;

        if (BMI < 18.5)
        {
            cout << "Underweight" << endl;
        }
        else if (BMI >= 18.5 && BMI <= 24.9)
        {
            cout << "Healthy" << endl;
        }
        else if (BMI >= 25.0 && BMI <= 29.9)
        {
            cout << "Overweight" << endl;
        }
        else if (BMI >= 30.0 && BMI <= 34.9)
        {
            cout << "Obese Class 1" << endl;
        }
        else if (BMI >= 35.0 && BMI <= 39.9)
        {
            cout << "Obese Class 2" << endl;
        }
        else if (BMI > 40.0)
        {
            cout << "Obese class 3" << endl;
        }
        break;

    default:
        cout << "Wrong Option Chosen" << endl;
        break;
    }

    return 0;
}