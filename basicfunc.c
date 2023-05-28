// Code for generating random number.

int printRandoms(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    // Returning the generated number to the main function.
    return num;
}


// Function for swaping any two numbers.
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


// Function for randomizing the position of number in the arrays. i.e. no fixed order how the numbers are organized in the array. I have written this function as we want 5 or 10 multiple question. Now I can insert number 10 in array and then randomize its position using this function.
void randomize(int *ptr, int n){
    for (int i = n-1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        // Now the random selected index are put in the array and the numbers at that index number gets swap.
        swap((ptr + i), (ptr + j));
    }
    
}


// Function for options.
// We will need to sent an option array and the correct answer as arguments while calling this function.
void options(int *ptr, int o1){
    int r, o2, o3, o4, o5, o6, o7;
    r = printRandoms(2, 9);
    // Here I have formed 6 different options which are incorrect answer.
    o2 = o1 + r;
    o3 = o1 - r;
    o4 = o1 + 10;
    o5 = o1 - 10;
    o6 = o1 + 2;
    o7 = o1 - 4;
    // Here storing all the incorrect answers in an array.
    int arr[6];
    arr[0] = o2;
    arr[1] = o3;
    arr[2] = o4;
    arr[3] = o5;
    arr[4] = o6;
    arr[5] = o7;
    // Randomizing the sequence in which they are stored in the array.
    randomize(arr, 6);
    // Now storing first 3 fake options in the main option array. As i have randomized the options earlier we don't know which kind of fake option will get stored.
    for (int i = 0; i < 3; i++)
    {
        *(ptr + i) = arr[i];
    }
    // storing the correct answer at the last.
    *(ptr + 3) = o1;
    // Now randomizing the original options array so that the correct options gets stored in any sequence.
    randomize(ptr, 4);
}