section.data
	msg db 'Hello, Holberton!',0Ah;
	len equ $ - msg;
section.text
	global_start
_start:
;
mov eax,4
mov ebx,1
mov ecx,msg

