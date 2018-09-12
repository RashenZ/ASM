
section .text
	global memcpy

memcpy:
	mov rcx, 0

_loop:
	cmp edx, 0
	je _leave
	
	mov BL, byte[rsi]
	mov byte[rdi + rcx], BL

	inc rcx
	inc rsi
	dec edx

	jmp _loop

_leave:
	mov rax, rdi
	ret
