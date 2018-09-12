
section .text
	global memset

memset:
	mov rcx, 0

_loop:
	cmp edx, 0
	je _leave
	
	mov byte[rdi + rcx], sil
	
	inc rcx
	dec edx
	jmp _loop

_leave:
	mov rax, rdi
	ret
