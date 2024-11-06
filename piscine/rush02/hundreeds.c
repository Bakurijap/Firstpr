
void	ft_0to9(int nb);
void	tentoniteen(int nb);
void	ft_20to90(int nb);
void	hundreeds(int nb)
{
	if (nb >= 100 && nb <=999)
	{
		if (nb / 100 == 1 || nb == 100)
        {
			putstr ("one ");
			putstr ("hundred ");
        }
		else if (nb / 100 == 2 || nb == 200)
        {
			putstr ("two ");
			putstr ("hundred ");
        }
		else if (nb / 100 == 3 || nb == 300)
        {
			putstr ("three ");
            putstr ("hundred ");
        }
		else if (nb / 100 == 4 || nb == 400)
        {
			putstr ("four ");
            putstr ("hundred ");
        }
		else if (nb / 100 == 5 || nb == 500)
        {
			putstr ("five ");
            putstr ("hundred ");
        }
		else if (nb / 100 == 6 || nb == 600)
        {
			putstr ("six ");
            putstr ("hundred ");
        }
		else if (nb / 100 == 7 || nb == 700)
        {
			putstr ("seven ");
            putstr ("hundred ");
        }
		else if (nb / 100 == 8 || nb == 800)
        {
			putstr ("eight ");
            putstr ("hundred ");
        }
		else if (nb / 100 == 9 || nb == 900)
        {
			putstr ("nine ");
            putstr ("hundred ");
        }
	}
    if (nb % 100 != 0)
        ft_0to9(nb % 100);
}