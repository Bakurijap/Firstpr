
void thousandsandetc(int sizeofnumber)
{
    if (sizeofnumber >= 4 && sizeofnumber <= 21)
        {
            if (sizeofnumber >= 4 && sizeofnumber <= 6 )
            {
                putstr ("thousand ");
            }
            else if (sizeofnumber >= 7 && sizeofnumber <= 9)
            {
                putstr ("million ");
            }
            else if (sizeofnumber >= 10 && sizeofnumber <= 12)
            {
                putstr ("billion ");
            }
            else if (sizeofnumber >= 13 && sizeofnumber <= 15)
            {
                putstr ("trillion ");
            }
            else if (sizeofnumber >= 16 && sizeofnumber <= 18)
            {
                putstr ("quadrillion ");
            }
            else if (sizeofnumber >= 19 && sizeofnumber <= 21)
            {
                putstr ("quintillion ");
            }
        }
}