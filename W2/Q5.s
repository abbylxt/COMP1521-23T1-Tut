# Prints the square of a number

# Constants
SQUARE_MAX = 46340


main:
	# $t0 = x, $t1 = y
        li      $v0, 4                  # printf("Enter a number: ");
        la      $a0, prompt_str
        syscall                         # syscall 4: print_string

        li      $v0, 5                  # scanf("%d", &x);
        syscall                         # syscall 5: read_int
        move    $t0, $v0                # $v0 = $t0; $v0 holds scanned in number
					# x holds scanned in number

	ble	$t0, SQUARE_MAX, else

        li      $v0, 4                  # printf("square too big for 32 bits\n");
        la      $a0, max_str
        syscall                         # syscall 4: print_string

	j	end
else:
	mul	$t1, $t0, $t0		# y = x * x
        
	li	$v0, 1			# printf("%d", y);
	move	$a0, $t1 
	syscall

	li	$v0, 11			# printf("\n")
	li	$a0, '\n'		
	syscall

end:
	jr	$ra			# return 0;
	

.data

prompt_str:
        .asciiz "Enter a number: "

max_str:
	.asciiz "square too big for 32 bits\n"
