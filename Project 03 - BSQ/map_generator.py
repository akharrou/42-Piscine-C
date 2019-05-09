
# 42 BSQ — My Map Generator

from sys import argv
from random import choices

BALANCE = 0.035
MAP_BLOCKS = '.ox'

try:
	length, width, density = int(argv[1]), int(argv[2]), (int(argv[3]) * BALANCE)

	print(f'{length}{MAP_BLOCKS}')
	for i in range(length):
		print(''.join(choices(MAP_BLOCKS[:2], [1, density], k=width)))

except Exception:
	print('Usage: length width density')
