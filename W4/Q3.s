

max:
max_prologue:
	# begin
	push	$ra
	push	$s0
max_body:
	lw	$s0, ($a0)		# $t0 = first_element

max_body_if:
	bne	$a1, 1, max_body_else
	
	move	$v0, $s0

	b	max_epilogue
max_body_else:
        # int max_so_far = max(&array[1], length - 1);
	add	$t2, $a0, 4		 
	move	$a0, $t2
	addi	$a1, $a1, -1

	jal	max
	# $t1 = max_so_far
	move	$t1, $v0

max_body_if1:
	ble	$s0, $t1, max_body_if1_end

	move	$t1, $s0

max_body_if1_end:
	move	$v0, $t1

	b	max_epilogue

max_body_else_end:

max_epilogue:
	pop	$s0
	pop	$ra

	# end

	jr	$ra


main: 
main_prologue:
	begin
	push	$ra
main_body:

	la	$a0, array
	li	$a1, 6
	jal	max

	# $t0 = max_value
	move	$t0, $v0

	move	$a0, $t0
	li	$v0, 1
	syscall

	li	$a0, '\n'
	li	$v0, 11
	syscall

main_epilogue:
	pop	$ra
	end

	jr	$ra


.data

array:	.word	1, 2, 3, 10, 2, 0