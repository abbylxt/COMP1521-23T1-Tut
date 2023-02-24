# Print every third number from 24 to 42.

main:
	# $t0 = x
	li	$t0, 24

loop:
	bge	$t0, 42, loop_end

	li	$v0, 1			# printf("%d", x);
	move	$a0, $t0 
	syscall

	li	$v0, 11			# printf("\n")
	li	$a0, '\n'		
	syscall

	addi	$t0, $t0, 3

	j	loop

loop_end:

end:
	jr	$ra			# return 0;
