section .text
	global rindex

rindex:
	mov rcx, 0

_loop:
	cmp byte [rdi + rcx], byte 0
	je _checkChar
	inc rcx
	jmp _loop

_checkChar:
	cmp [rdi + rcx], sil
	je _leave

	cmp rcx, byte 0
	je _leaveNull

	dec rcx
	jmp _checkChar

_leaveNull:
	mov rax, 0
	ret

_leave:
	mov rax, rdi
	add rax, rcx
	ret
