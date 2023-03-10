# Prints the square of a number

# CONSTANTS
SQUARE_MAX = 46340

main:
	# $t0 = x, $t1 = y
        li      $v0, 4                  # printf("Enter a number: ");
        la      $a0, prompt_str
        syscall                         # syscall 4: print_string

	li	$v0, 5			# scanf("%d", &x);
	syscall
	move	$t0, $v0		# scanned value into $v0 --> $t0 = x

if:
	ble	$t0, SQUARE_MAX, else	# if (x <= SQUARE_MAX) goto else

	li      $v0, 4                  # printf("square too big for 32 bits\n");
        la      $a0, max_string
        syscall                         # syscall 4: print_string

	b	endif

else:
    	mul	$t1, $t0, $t0		# y = x * x;
	
	li	$v0, 1			# printf("%d", y);
	move	$a0, $t1
	syscall
    
	li	$v0, 11			# printf("\n");
	li	$a0, '\n'
	syscall

endif:

	jr	$ra			# return 0;
.data

prompt_str:
        .ascii "Enter a number: \0"
max_string:
	.asciiz "square too big for 32 bits\n"