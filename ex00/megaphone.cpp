#include <iostream>

int	main(int argc, char **argv)
{
	int y;

	if (argc >= 2)
	{
		argc = 1;
		while (argv[argc])
		{
			y = 0;
			while (argv[argc][y])
			{
				std::cout << (char)toupper(argv[argc][y]);
				y++;
			}
			argc++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	std::cout << std::endl;
}