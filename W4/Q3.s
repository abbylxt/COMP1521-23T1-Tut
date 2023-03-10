
max:
	# $a0 = array[] = &array
	# $a1 = length
max_prologue:

	push	$ra
	push	$s0		# $s0_Stack = ????, 1
max_body:
	# $s0 = first_element = 2
	lw	$s0, ($a0)

max_body_if:
	bne	$a1, 1, max_body_else

	move	$v0, $s0
	b	max_epilogue
max_body_else:
	addi	$a0, $a0, 4		# $a0 = &array + 4 = &array[1]
	addi	$a1, $a1, -1
	jal	max

	# $t1 = max_so_far
	move	$t1, $v0 
max_body_if_1:
	ble	$s0, $t1, max_body_if_1_end
	move	$t1, $s0
max_body_if_1_end:
	move	$v0, $t1
	b	max_epilogue
max_body_else_end:

max_epilogue:
	pop	$s0		# $s0 = 1
	pop	$ra
	jr	$ra



main:
main_prologue:
	begin
	push	$ra
main_body:
	la	$a0, array
	# move	$t0, $a0
	li	$a1, 6
	jal	max
	move	$t0, $v0		# int max_value = max(array, 6);

	move	$a0, $t0		# printf("%d\n", max_value);
	li	$v0, 1
	syscall

	li	$a0, '\n'
	li	$v0, 11
	syscall

main_epilogue:
	pop	$ra
	li	$v0, 0			# return 0;
	jr	$ra

.data

array:	.word	1, 2, 1000, 4, 2, 1