global   main
	 intern	 extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 2
	  ret	str
format: db `Hello, Holberton\n`,2
