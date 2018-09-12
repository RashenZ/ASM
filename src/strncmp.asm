section .text
	global strncmp

strncmp:
	mov ecx, 0

_loop:
	mov BL, byte[rdi]
	mov BH, byte[rsi]
	inc rdi
	inc rsi
	inc ecx
	cmp ecx, edx
	je _diff

	cmp BL, BH
	jne _diff

	cmp BH, 0
	je _diff
	
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
