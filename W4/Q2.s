# &flag[0][0] = &flag
# &flag[0][5] = &flag + 5
# &flag[1][0] = &flag + 12
# &flag[1][5] = &flag + 12 + 5
# &flag[r][c] = &flag + (r * max_col) * 4 + c * 4
# in the case of int array
# &flag[r][c] = &flag + ((r * max_col) + c) * sizeof(element)

.data
flag: 
	.byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
	.byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
	.byte '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'
    	.byte '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'
    	.byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    	.byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'

.text

FLAG_ROWS = 6
FLAG_COLS = 12

main:

	# $t0 = row
	li	$t0, 0			# int row = 0
loop_row:
	bge	$t0, FLAG_ROWS, loop_row_end

	# $t1 = col
	li	$t1, 0			# int col = 0
loop_col:
	bge	$t1, FLAG_COLS, loop_col_end

	# &flag[r][c] = &flag + ((r * max_col) + c) * 1
	la	$t2, flag		# printf("%c", flag[row][col]);
	mul	$t3, $t0, FLAG_COLS
	add	$t3, $t3, $t1
	mul	$t3, $t3, 1
	add	$t3, $t3, $t2
	lb	$a0, ($t3)
	li	$v0, 11
	syscall

	addi	$t1, $t1, 1

	b	loop_col

loop_col_end:
	li	$a0, '\n'
	li	$v0, 11
	syscall

	addi	$t0, $t0, 1

	b	loop_row

loop_row_end:

	jr	$ra