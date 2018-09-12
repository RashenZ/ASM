section .text
	global write

write:
	mov rax, 1
	syscall

	mov rax, rdx
	ret
	
