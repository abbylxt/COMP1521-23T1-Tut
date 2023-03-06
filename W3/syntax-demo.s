main:
	la	$t0, aa			# $t0 = 0x10010000

	lw	$t0, bb			# $t0 = 666 = 0x029a

	lb	$t0, bb			# $t0 = 0x9a

	lw	$t0, aa+4		#$t0 = 666 = 0x029a
	# aa + 4 = bb

	la	$t1, cc			# $t1 = 0x10010008
	lw	$t0, ($t1)		# $t0 = 0x01

	la	$t1, cc			# $t1 = 
	lw	$t0, 8($t1)		# $t0 = 5
	# 8($t1) = 8 + $t1

	li	$t1, 8
	lw	$t0, cc($t1)
	# cc($t1) = cc + 8

	la	$t1, cc
	lw	$t0, 4($t1)

	jr	$ra


.data

aa:	.word 42

bb:	.word 666

cc:	.word 1, 3, 5, 7