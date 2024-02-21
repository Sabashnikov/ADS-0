// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a <= b)
{
    for (int i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}
else
    for (int i = b; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}
