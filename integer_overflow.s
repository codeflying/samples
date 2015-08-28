	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	$-1, -24(%rbp)
	cmpq	$8, -24(%rbp)
	jae	LBB0_2
## BB#1:
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	leaq	L_.str1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -32(%rbp)         ## 4-byte Spill
LBB0_3:
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"OK\n"

L_.str1:                                ## @.str1
	.asciz	"error\n"


.subsections_via_symbols
