#include "menger.h"

/**
 * menger - draws a 2D Menger Sponge
 * @level: levels of sponge
 */
void menger(int level)
{
	int size, x, y, z, dx, dy;

	size = (int)pow(3, level);
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			dx = x;
			dy = y;
			z = 0;
			while (dx && dy)
			{
				if (dx % 3 == 1 && dy % 3 == 1)
				{
					printf(" ");
					z = 1;
					break;
				}
				dx = dx / 3;
				dy = dy / 3;
			}
			if (!z)
				printf("#");
		}
		printf("\n");
	}
}
