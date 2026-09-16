.global _start
_start:
	
	 mov r1, #0x23
	 mov r2, #0x12
	 add r0, r2, r1
	 svc 0