section .text
	global strcasecmp

strcasecmp:
	mov rax, 0
	mov rbx, 0
	mov rcx, 0
_loop:
	cmp byte[rdi + rax], byte 0
	je _end

	cmp byte[rsi + rax], byte 0
	je _end
	
	mov BL, [rsi + rax]
	mov CL, [rdi + rax]
	sub CL, BL
	cmp CL, -32
	je _nextChar
	cmp CL, 32
	je _nextChar
	cmp CL, byte 0
	jne _end
	jmp _loop

_nextChar:
	inc rax
	jmp _loop

_end:
	mov BL, [rsi + rax]
	mov CL, [rdi + rax]
	sub rcx, rbx
	mov rax, rcx
	ret
