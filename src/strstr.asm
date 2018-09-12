section .text
	global strstr

_loopReturn:
	cmp rcx, 0
	je _returnFinish
	
	dec rdi
	dec rcx
	jmp _loopReturn

_returnFinish:
	ret
	
strstr:
	mov rcx, 0

_loop:
	mov BH, byte[rdi]
	mov BL, byte[rsi + rcx]

	cmp BH, BL
	je _sameChar
	
	cmp BH, byte 0
	je _leaveNull

	cmp BL, byte 0
	je _leave
	
	jmp _notSame

_sameChar:
	inc rdi
	inc rcx
	cmp byte[rsi + rcx], byte 0
	je _leave
	jmp _loop

_notSame:
	mov rcx, 0
	inc rdi
	jmp _loop

_leave:
	call _loopReturn
	mov rax, rdi
	ret
	
_leaveNull:
	mov rax, 0
	ret
