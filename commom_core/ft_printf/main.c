#include <stdio.h>      // for printf()
#include <stddef.h>     // for NULL
#include "ft_printf.h"  // for ft_printf()

int	main(void)
{
	int		x = 42;
	int		y = -7;
	int		*ptr = &x;
	int		*null_ptr = NULL;
	unsigned int	u = 21395844;

	printf("\n========== [ REAL printf vs ft_printf ] ==========\n\n");

	// %d and %i
	printf("REAL -> Score: %d | Index: %i\n", x, y);
	ft_printf(" MINE -> Score: %d | Index: %i\n\n", x, y);

	// %s and %c
	printf("REAL -> String: %s | Single char: %c\n", "Joao Pedro", 'c');
	ft_printf(" MINE -> String: %s | Single char: %c\n\n", "Joao Pedro", 'c');

	// %u
	printf("REAL -> Unsigned: %u\n", u);
	ft_printf(" MINE -> Unsigned: %u\n\n", u);

	// %%
	printf("REAL -> percent: %%\n");
	ft_printf(" MINE -> percent: %%\n\n");

	// %x
	printf("REAL -> Hex lower: %x | %x | %x | %x\n", 0, 10, 255, 4294967295u);
	ft_printf(" MINE -> Hex lower: %x | %x | %x | %x\n\n", 0, 10, 255, 4294967295u);

	// %X
	printf("REAL -> Hex upper: %X | %X | %X | %X\n", 0, 10, 255, 4294967295u);
	ft_printf(" MINE -> Hex upper: %X | %X | %X | %X\n\n", 0, 10, 255, 4294967295u);

	// %p
	printf("REAL -> Pointer: %p | Null: %p\n", ptr, null_ptr);
	ft_printf(" MINE -> Pointer: %p | Null: %p\n\n", ptr, null_ptr);

	printf("==================================================\n\n");
	return (0);
}

