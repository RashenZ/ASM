section .text
	global memmove
	
memmove:
	mov rcx, 0
	cmp rdi, rsi
	jl _loopCpy
	dec rdx
	jmp _loopInvert
	
_loopCpy:
	mov BL, byte[rsi]
	mov byte[rdi], BL

	cmp edx, 0
	je _leave
	
	cmp BL, byte 0
	je _leave

	dec edx
	inc rsi
	inc rdi
	jmp _loopCpy

_loopInvert:
	cmp rdx, 0
	jl _leave

	mov al, byte[rsi + rdx]
	mov byte[rdi + rdx], al

	dec rdx
	jmp _loopInvert
	
	
_leave:
	mov rax, rdi
	ret
