section .text
	global memchr

memchr:
	mov ecx, edx
	
_loop:
	mov BL, byte[rdi]
	cmp BL, sil
	je _leave

	inc rdi
	dec edx
	cmp edx, 0
	je _leaveNull
	
	jmp _loop
	
_leave:
	mov rax, rdi
	ret

_leaveNull:
	mov rax, 0
	ret
