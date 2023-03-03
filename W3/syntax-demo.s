main:
	la	$t0, aa			# $t0 = 0x10010000

	lw	$t0, bb			# 

	lb	$t0, bb

	lw	$t0, aa+4

	la	$t1, cc			# $t1 = 0x10010008
	lw	$t0, ($t1)

	la	$t1, cc			# $t1 = 0x10010008
	lw	$t0, 8($t1)
	# lw    $t0, 8 + 0x10010008

	li	$t1, 8
	lw	$t0, cc($t1)
	# lw    $t0, 8 + 0x10010008

	la	$t1, cc
	lw	$t0, 4($t1)
	# lw    $t0, 4 + 0x10010008

	jr	$ra


.data

aa:	.word 42

bb:	.word 666

cc:	.word 1, 3, 5, 7