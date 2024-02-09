// i211775_AlizehQamar_Task01.cpp 
//

#include <iostream>
using namespace std;



int main()
{
    cout << "---------LARGEST&SMALLEST-NUMBER-OF-AN-ARRAY---------" << endl << endl;

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr = array;

    int smallestNumber = *ptr;
    int largestNumber = *ptr;

    for (int i = 1; i < 10; i++) 
    {
        if (*(ptr + i) < smallestNumber)
        {
            smallestNumber = *(ptr + i);
        }
        if (*(ptr + i) > largestNumber)
        {
            largestNumber = *(ptr + i);
        }
    }

    cout << " The Smallest Number is : " << smallestNumber << endl;
    cout << " The Largest Number is : " << largestNumber << endl;

    return 0;
}


