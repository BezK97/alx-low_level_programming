	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

	global main
	extern printf

main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov ebx, 0
	mov eax, 1
	int 0x80
