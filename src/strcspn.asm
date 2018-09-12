section .text
	global strcspn

strcspn:
	mov rax, 0
	mov rcx, 0

_loop:
	mov BL, byte[rdi + rcx]
	mov BH, byte[rsi + rax]

	cmp BL, byte 0
	je _leave

	cmp BH, byte 0
	je _nextChar

	cmp BL, BH
	je _leave
	jne _incRax

_nextChar:
	inc rcx
	mov rax, 0
	jmp _loop
	
_incRax:
	inc rax
	jmp _loop

_leave:
	mov rax, rcx
	ret
	
	
