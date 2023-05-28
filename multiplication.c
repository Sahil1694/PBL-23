// #include "basicfunc.c"


// 10 x (1 - 99), 2digits x 1digit(0 - 9)
// This code is for framing questions arrays for level 1
int level1(int *p1, int *p2)
{
    for (int i = 0; i < 10; i++)
    {
        int temp1 = printRandoms(10, 99);
        int temp2 = printRandoms(1, 9);
        *(p1 + i) = temp1;
        *(p2 + i) = temp2;
    }
    *(p2 + 9) = 10;
    randomize(p1, 10);
    randomize(p2, 10);
    return 0;
}
// 2digits x 2digit(up to 50)
// This code is for framing questions arrays for level 2
int level2(int *p1, int *p2)
{
    for (int i = 0; i < 10; i++)
    {
        int temp1 = printRandoms(10, 99);
        int temp2 = printRandoms(10, 50);
        *(p1 + i) = temp1;
        *(p2 + i) = temp2;
    }
    return 0;
}
// 3digits x 1 or 2digit(1 - 50)
// This code is for framing questions arrays for level 3
int level3(int *p1, int *p2)
{
    for (int i = 0; i < 10; i++)
    {
        int temp1 = printRandoms(100, 999);
        int temp2 = printRandoms(1, 50);
        *(p1 + i) = temp1;
        *(p2 + i) = temp2;
    }
    return 0;
}