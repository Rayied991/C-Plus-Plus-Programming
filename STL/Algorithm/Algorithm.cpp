#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a = 5;
    int b = 6;
    //a=6;b=5
    cout << "Before swapping a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After swapping a = " << a << " b = " << b << endl;
    //Find Minimum

    cout << "Minimum is = " << min(a, b) << endl;
    //Another way
    cout << "Minimum is = " << min({5, 6, 7, 2}) << endl;
    //In min function we cannot pass any array.We cannot find minimum value from the array.

    //For this we have to use minelement(array,range);

    int arr[5] = {5, 6, 7, 2, 1};
    cout << "Minimum is in index = " << min_element(arr, arr + 5) << endl; //returnd address
    cout << "Minimum is in index = " << min_element(arr, arr + 5) - arr << endl;
    // cout<<arr+3-arr<<endl;

    //Maximum
    int arr1[5] = {5, 6, 7, 2, 1};
    int c = 2, d = 10;
    cout << "Maximum is = " << max(c, d) << endl;
    cout << "Maximum is = " << max_element(arr1, arr1 + 5) << endl; //return address
    cout << "Maximum is in index = " << max_element(arr1, arr1 + 5) - arr1 << endl;

    //find(start,range,search_value)->uses linear search
    int arr2[5] = {5, 6, 7, 2, 1};
    cout << "7 is found in index = " << find(arr2, arr2 + 5, 7) - arr2 << endl; //success case
    cout << "9 is found in index = " << find(arr2, arr2 + 5, 9) - arr2 << endl; //fail case->last index returned

    //count()
    int arr3[5] = {5, 2, 7, 2, 1};
    cout << "2 is found  = " << count(arr3, arr3 + 5, 2) << " times" << endl; //success case
    cout << "1 is found  = " << count(arr3, arr3 + 5, 1) << " times" << endl; //success case
    cout << "9 is found  = " << count(arr3, arr3 + 5, 9) << " times" << endl; //fail case

    //sort()
    int arr4[5] = {5, 2, 7, 2, 1};
    cout << "Before sorting : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    sort(arr4, arr4 + 5);

    cout << "After sorting : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    //Binary Search-> return 0 or 1(found=1 or not found=0)
    int arr5[5] = {1, 2, 3, 6, 8};
    cout << "3 is found  = " << binary_search(arr5, arr5 + 5, 3) << endl; //success case
    cout << "9 is found  = " << binary_search(arr5, arr5 + 5, 9) << endl; //fail case->0 returned

    return 0;
}