
section .text
	global strlen
	
strlen:
	mov rax, 0

_loop:
	cmp[rdi + rax], byte 0
	jz _leave
	
	inc rax
	jnz _loop

_leave:
	ret
