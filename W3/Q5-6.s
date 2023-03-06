# scans in 5 num and prints them out

# CONSTANTS
N_SIZE = 5
INT_SIZE = 4

main:
	# $t0 = i

main__scan_loop_init:
        li      $t0, 0			                # i = 0;

main__scan_loop_cond:
	bge	$t0, N_SIZE, main__scan_loop_end

main__scan_loop_body:
	li	$v0, 5			                # scanf("%d", &numbers[i]);
	syscall                                         # syscall 5: scan_int
	move	$t1, $v0				# 	$t1 holds scanned in number

	mul	$t2, $t0, INT_SIZE			# 	offset = (i * INT_SIZE) 
	la	$t3, numbers
	add	$t2, $t3, $t2				# 	final address = offset + start of array
	sw	$t1, ($t2)				# 

main__scan_loop_step:
	addi	$t0, $t0, 1				# i++;
	b	main__scan_loop_cond			# goto main__scan_loop_cond
main__scan_loop_end:


main__print_loop_init:
	li	$t0, 0					# i = 0;

main__print_loop_cond:
	bge	$t0, N_SIZE, main__print_loop_end

main__print_loop_body:
	li	$v0, 1					# printf("%d", numbers[i]);

	mul	$t2, $t0, INT_SIZE			# 	offset = (i * INT_SIZE) 
	la	$t3, numbers
	add	$t2, $t3, $t2				# 	final address = offset + start of array
	lw	$a0, ($t2)
	syscall

	li	$v0, 11					# printf("\n")
	li	$a0, '\n'
	syscall

main__print_loop_step:
	addi	$t0, $t0, 1				# i++;
	b	main__print_loop_cond			# goto main__print_loop_cond

main__print_loop_end:

	jr	$ra					# return 0;





.data

numbers:	.word 0, 0, 0, 0, 0