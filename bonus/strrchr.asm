section .text
	global strrchr

_pointEnd:
	mov rax, 0
	
_pointEndLoop:
	cmp byte[rdi], byte 0
	jz _endPointEnd

	inc rdi
	inc rax
	jnz _pointEndLoop

_endPointEnd:
	ret

strrchr:
	call _pointEnd
	mov ecx, eax

_loop:
	cmp ecx, 0
	je _end
	
	mov BL, byte[rdi]

	cmp BL, sil
	je _leave
	
	dec rdi
	dec ecx

	jmp _loop

_leave:
	mov rax, rdi
	ret

_end:
	mov rax, 0
	ret
