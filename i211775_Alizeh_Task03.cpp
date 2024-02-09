#include <iostream>

using namespace std;

void bubble_sort(int* array, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void find_common_elements(int* array1, int* array2, int len1, int len2)
{
    bubble_sort(array1, len1);
    bubble_sort(array2, len2);

    int i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (array1[i] < array2[j])
        {
            i++;
        }
        else if (array1[i] > array2[j])
        {
            j++;
        }
        else
        {
            cout << array1[i] << " ";
            i++;
            j++;
        }
    }
}

void print_array(int* array, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int len1, len2;

    cout << "Enter the number of elements in the first array: ";
    cin >> len1;
    cout << endl;
    int* array1 = new int[len1];
    cout << "Enter the number of elements in the first array: ";
    for (int i = 0; i < len1; i++)
    {
        cin >> array1[i];
    }

    cout << endl;
    cout << "The first array is: ";
    print_array(array1, len1);

    cout << endl;

    cout << "Enter the number of elements in the second array: ";
    cin >> len2;
    cout << endl;
    int* array2 = new int[len2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < len2; i++)
    {
        cin >> array2[i];
    }
    cout << endl;
    cout << "The second array is: ";
    print_array(array2, len2);

    cout << endl;

    cout << " The Common elements: ";
    find_common_elements(array1, array2, len1, len2);

    cout << endl;

    delete[] array1;
    delete[] array2;

    return 0;
}
