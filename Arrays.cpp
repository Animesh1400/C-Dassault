//Arrays

#include <iostream>

using namespace std;

//void linearsearch(int* arr, int val) {
//    int i = 0;
//    for (; i < 5; ++i) {
//        if (arr[i] == val) {
//            cout << "The Element is present at " << i + 1 << " position in array." << endl;
//            break;
//        }
//        
//    }
//    if (i==5) {
//    cout << "The element is not present." << endl;
//    
//        }
//    
//}
//
//void quicksearch(int* arr, int val,int size) {
//    int mid,high,low;
//    
//    
//    
//    high = size - 1;
//    low = 0;
//    while (low <= high) {
//        mid = (high + low) / 2;
//        if (arr[mid] == val) {
//            cout << "Present at " << mid+1 << " position" << endl;
//            break;
//        }
//        else if (val < arr[mid]) {
//            high = mid - 1;
//        }
//        else {
//            low = mid + 1;
//        }
//    }
//}
//
//void selection_sort(int* a) {
//    int temp;
//    for (int i = 0; i < 10; ++i) {
//        for (int j = i + 1; j < 10; ++j) {
//            if (a[i] > a[j]) {
//                temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//}
//
//void bubble_sort(int* a) {
//    int temp;
//    for (int i = 1; i < 10; ++i) {
//        for (int j = 0; j < 10-i; ++j) {
//            if (a[j] > a[j+1]) {
//                temp = a[j];
//                a[j] = a[j+1];
//                a[j+1] = temp;
//            }
//        }
//    }
//}
//

///*void display(int* a) {

//    for (int i = 0; i < 10; ++i) {
//        cout << a[i] << endl;
//    }
//}*/
//
//void left_shift(int* a, int size) {
//    int temp = a[0];
//    for (int i = 1; i < size; i++) {
//        a[i-1] = a[i];
//    }
//    a[size - 1] = temp;
//}
//
//int max(int* a) {
//    int temp = a[0];
//    for (int i = 1; i < 5; i++) {
//        if (temp < a[i]) {
//            temp = a[i];
//        }
//    }
//    return temp;
//}
//
//int min(int* a) {
//    int temp = a[0];
//    for (int i = 1; i < 5; i++) {
//        if (temp > a[i]) {
//            temp = a[i];
//        }
//    }
//    return temp;
//}
//
//float average(int* a) {
//    //int avg;
//    int sum = 0;
//    for (int i = 0; i < 5; i++) {
//        sum += a[i];
//    }
//    return sum/5.0f;
//}

void display(int (* ptr)[3]) { //this is pointer to an array 
    //3 is no. of 1D array in 
    cout << "Entered 3D array is " << endl;
    for (int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << ptr[i][j] << " ";
            
        }
        cout << endl;
    }
}

void display(int(* ptr)[2]) { //this is pointer to an array 
    //2 is no. of 1D array in 
    cout << "Entered 2D array is " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << ptr[i][j] << " ";

        }
        cout << endl;
    }
}

void accept (int(*ptr)[3]) { //this is pointer to an array 
    //3 is no. of 1D array in 
    cout << "Entered 3D array is " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> ptr[i][j];

        }
    
    }
}

void transpose(int a[][3], int b[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = a[j][i];
        }
    }
}

void foo() {
    cout << "Foo called " << endl;
}

int main()
{
    void (* ptr)();
    ptr = foo;
    (*ptr)();



    /*int arr[5] = { 10,20,30,40,50 };
    int* brr[5] = { arr,arr + 1,arr + 2,arr + 3,arr + 4 };
    int** ptr;
    ptr = brr;
    
    printf("%u %u %u\n", ptr - brr, *ptr - arr, **ptr);

    **ptr++;
    printf("%u %u %u\n", ptr - brr, *ptr - arr, **ptr);
    *++* ptr;
    printf("%u %u %u\n", ptr - brr, *ptr - arr, **ptr);
    ++** ptr;
    printf("%u %u %u\n", ptr - brr, *ptr - arr, **ptr);*/

    /*int arr[10] = { 1,2,3,4 };
    int* ptr = arr;
    int** myptr;
    myptr = &ptr;
    printf("The address of ptr: %u\n", myptr);
    myptr++;
    printf("The address of ptr: %u\n", myptr);
    printf("The address of arr: %u\n", ptr);
    printf("The address of arr: %u\n", arr);
    printf("The address of myptr: %u\n", &myptr);*/

    /*int arr[3][3], brr[3][3];
    accept(arr);
    display(arr);
    transpose(arr, brr);
    display(brr);
    */

    /*int arr[10] = { 10,20,30,40,50 };
    int ele;
    int pos;
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
    cout << "Element element an position" << endl;
    cin >> ele >> pos;
    int count;*/

    //for (int i = 4; i >= pos - 1; i--) {
    //    arr[i + 1] = arr[i];
    //}
    ////arr[pos - 1] = ele;
    //for (int i = 0; i < size; i++) {
    //    cout << arr[i] << endl;
    //}

    /*for (int i = pos - 1; i < 5; i++) {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }*/

    //int arr[5] = {10,20,30,40,50};
    //int element;
    //int size;
    //cin >> element;
    //size = sizeof(arr) / sizeof(arr[0]);
    ////cout << size << endl;
    ////linearsearch(arr, element);
    //quicksearch(arr, element,size);

    /*printf("%u %u\n", arr, &arr);
    printf("%u %u\n", arr+1, &arr+1);
    printf("%u %u %u %u\n", arr[4], *(arr + 4), *(4 + arr), 4[arr]);
    printf("%u %u %u %u\n", &arr[0]+1, arr+1, *&arr+1, &*arr+1);*/

    //int size;
    //int a[10] = { 5,99,8,1,7,3,6584,458,55,32 };
    //size = sizeof(a) / sizeof(a[0]);
    ////cout << size;
    ////selection_sort(a);
    ////bubble_sort(a);
    //left_shift(a, size);
    //display(a);

    /*int a[5] = { 50,60,10,25,36 };
    cout << "aVERAGE IS " << average(a) << endl;
    cout << "maximum IS " << max(a) << endl;
    cout << "minimum IS " << min(a) << endl;*/

    /*int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    accept(arr1);
    accept(arr2);


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                arr3[i][j] += (arr1[i][k] * arr2[k][j]);
            }
            cout << arr3[i][j];
        }
        
    }
    display(arr3);*/
    return 0;
}





    //printf("%u %u %u %u %u\n", arr, &arr, arr[0], &arr[0], &arr[0][0]);
    //printf("%u %u %u %u %u\n", arr+1, &arr+1, arr[0]+1, &arr[0]+1, &arr[0][0]+1);
    //printf("%u %u %u %u %u\n", *(*(arr + 1) + 1), arr[1][1],**(arr+1),*(*(arr)+1),**arr);
    
