class Solution
{
public:
    int LCM(int n1, int n2)
    {
        int gcd = GCD(n1, n2);
        int lcm = (n1 * n2) / gcd;
        return lcm;
    }

    int GCD(int n1, int n2)
    {
        int minVal = 0;
        int gcd = 0;
        if (n1 > n2)
        {
            minVal = n2;
        }
        else
        {
            minVal = n1;
        }
        for (int i = 1; i <= minVal; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                if (i > gcd)
                {
                    gcd = i;
                }
            }
        }
        return gcd;
    }
};