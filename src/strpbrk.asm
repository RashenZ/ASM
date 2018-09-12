section .text
	global strpbrk

strpbrk:
	mov rax, 0

_loop:
	mov BL, byte[rdi]
	mov BH, byte[rsi + rax]
	
	cmp BL, byte 0
	je _leaveNull

	cmp BH, byte 0
	je _nextCheck

	cmp BL, BH
	je _leave
	jne _incRax

_incRax:
	inc rax
	jmp _loop

_nextCheck:
	inc rdi
	mov rax, 0
	jmp _loop

_leave:
	mov rax, rdi
	ret
	
_leaveNull:
	mov rax, 0
	ret
