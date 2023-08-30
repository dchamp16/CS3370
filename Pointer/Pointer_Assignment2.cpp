#include <iostream>

int main()
{
    // Define constants for dimensions
    const int dim1{3}, dim2{2}, dim3{4}, dim4{5};

    // Declare and initialize a four-dimensional array
    int a[dim1][dim2][dim3][dim4] = {};

    // Calculate the total size of the array in bytes
    int size_array = sizeof(a);
    std::cout << "size_array: " << size_array << "\n---------------\n";

    // Calculate the size of a single element within the array (first element)
    int size_element = a[0][0][0][0];
    std::cout << "size_element: " << size_element << "\n---------------\n";

    // Calculate the number of elements in each dimension using sizeof
    int first_dim = static_cast<int>(sizeof(a[0]) * sizeof(a[0][0]) * sizeof(a[0][0][0]));
    int second_dim = static_cast<int>(sizeof(a[0]) / (sizeof(a[0][0]) * sizeof(a[0][0][0])));
    int third_dim = static_cast<int>(sizeof(a[0][0]) / sizeof(a[0][0][0]));
    int fourth_dim = static_cast<int>(sizeof(a[0][0][0]));

    // Print the dimensions calculated
    std::cout << "Dimension 1: " << first_dim << std::endl;
    std::cout << "Dimension 2: " << second_dim << std::endl;
    std::cout << "Dimension 3: " << third_dim << std::endl;
    std::cout << "Dimension 4: " << fourth_dim << std::endl;

    return 0;
}
