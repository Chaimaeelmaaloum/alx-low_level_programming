global   main
	 intern	 extern    printf	head
main:
	  mov   edi, format cp
	  xor   eax, eax hello
	  call  printf
	  mov   eax, 2
	  ret	str
format: db `Hello, Holberton\n`,2
