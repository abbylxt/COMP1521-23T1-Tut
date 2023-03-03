
# Constant
N_SIZE = 5

main:

# $t0 = i

main__scan_loop_init:
	li	$t0, 0
main__scan_loop_cond:
	bge	$t0, N_SIZE, main__scan_loop_end
main__scan_loop_body:
	li	$v0, 5			# scanf("%d", &numbers[i]);
	syscall

	move	$t1, $v0		# scanned in int in $t1	

	mul	$t2, $t0, 4		# calculating offset, offset = $t2
	la	$t3, numbers
	add	$t4, $t2, $t3
	sw	$t1, ($t4)	

main__scan_loop_step:
	addi	$t0, $t0, 1

	b	main__scan_loop_cond
main__scan_loop_end:


main__print_loop_init:
	li	$t0, 0
main__print_loop_cond:
	bge	$t0, N_SIZE, main__print_loop_end

main__print_loop_body:
	mul	$t2, $t0, 4		# calculating offset, offset = $t2
	la	$t3, numbers
	add	$t4, $t2, $t3
	lw	$t1, ($t4)		# numbers[i] = $t1
	
	move	$a0, $t1		# printf("%d", numbers[i]);
	li	$v0, 1
	syscall

	li	$v0, 11			# printf("\n");
	li	$a0, '\n'
	syscall

main__print_loop_step:
	addi	$t0, $t0, 1

	b	main__print_loop_cond
main__print_loop_end:

	jr	$ra


.data

numbers:	.word 5 * 4