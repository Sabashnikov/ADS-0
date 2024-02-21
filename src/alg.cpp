// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int a1 = a;
    int b1 = b;
    int num;
    if (b > a1) 
    {
        a1 = b;
        b1 = a;
    }
    while (a1 != 0 && b1 != 0) 
    {
        a1 %= b1;
        if (b1 > a1)
        {
            num = a1;
            a1 = b1;
            b1 = num;
        }
    }
    return a1;
}
