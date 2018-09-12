section .text
	global strcmp

strcmp:
	mov rax, 0

_loop:
	mov BL, byte[rdi]
	mov BH, byte[rsi]
	cmp BL, BH
	jne _diff

	cmp BH, 0
	je _diff

	cmp BH, 0
	je _diff
	
	inc rdi
	inc rsi
	jmp _loop
	

_lessThan0:
	sub BL, BH
	movsx rax, BL
	add rax, 256
	ret

_diff:
	cmp BL, 0
	jl _lessThan0

	sub BL, BH
	movsx rax, BL
	ret
