# Prints the square of a number

main:
	# $t0 = x, $t1 = y
        li      $v0, 4                  # printf("Enter a number: ");
        la      $a0, prompt_str
        syscall                         # syscall 4: print_string

	li	$v0, 5			# scanf("%d", &x);
	syscall
	move	$t0, $v0		# scanned value into $v0 --> $t0 = x

    	mul	$t1, $t0, $t0		# y = x * x;
	
	li	$v0, 1			# printf("%d", y);
	move	$a0, $t1
	syscall
    
	li	$v0, 11			# printf("\n");
	li	$a0, '\n'
	syscall

	jr	$ra			# return 0;
.data

prompt_str:
        .asciiz "Enter a number: "
