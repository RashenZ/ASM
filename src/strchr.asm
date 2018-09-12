
section .text
	global strchr

strchr:
	mov rax, 0

_compare:
	mov BL, byte[rdi]
	cmp BL, sil
	je _cpyThis

	cmp BL, byte 0
	je _leaveNull
	
	inc rdi
	jne _compare
	
_cpyThis:
	mov rax, rdi
	
_leave:
	ret

_leaveNull:
	mov rax, 0
	ret
