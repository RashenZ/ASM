	section .text
	global memcmp

memcmp:

_loop:
	mov BL, byte[rdi]
	mov BH, byte[rsi]

	cmp BL, BH
	jne _diff

	cmp BL, 0
	je _diff
	
	cmp BH, 0
	je _diff

	inc rdi
	inc rsi
	dec edx

	cmp edx, 0
	je _leaveNull

	jmp _loop

_diff:
	sub BL, BH
	movsx rax, BL
	ret
	
_leaveNull:
	mov rax, 0
	ret
