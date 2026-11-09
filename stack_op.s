	.file	"stack_op.c"
	.text
	.globl	stack
	.bss
	.align 16
	.type	stack, @object
	.size	stack, 20
stack:
	.zero	20
	.globl	top
	.data
	.align 4
	.type	top, @object
	.size	top, 4
top:
	.long	-1
	.section	.rodata
.LC0:
	.string	"Stack overflow"
.LC1:
	.string	"Enter the value:"
.LC2:
	.string	"%d"
.LC3:
	.string	"Value inserted successfully"
	.text
	.globl	push
	.type	push, @function
push:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	top(%rip), %eax
	cmpl	$4, %eax
	jne	.L2
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L5
.L2:
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	top(%rip), %eax
	addl	$1, %eax
	movl	%eax, top(%rip)
	movl	top(%rip), %edx
	movl	-12(%rbp), %eax
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	stack(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L5:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L4
	call	__stack_chk_fail@PLT
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	push, .-push
	.section	.rodata
.LC4:
	.string	"Stack underflow"
.LC5:
	.string	"Deleted value:%d\n"
	.text
	.globl	pop
	.type	pop, @function
pop:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	top(%rip), %eax
	cmpl	$-1, %eax
	jne	.L7
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L9
.L7:
	movl	top(%rip), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	stack(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	top(%rip), %eax
	subl	$1, %eax
	movl	%eax, top(%rip)
.L9:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	pop, .-pop
	.section	.rodata
.LC6:
	.string	"Stack is empty"
.LC7:
	.string	"Stack elements:"
.LC8:
	.string	"%d\n"
	.text
	.globl	display
	.type	display, @function
display:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	top(%rip), %eax
	cmpl	$-1, %eax
	jne	.L11
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L15
.L11:
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	top(%rip), %eax
	movl	%eax, -4(%rbp)
	jmp	.L13
.L14:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	stack(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	subl	$1, -4(%rbp)
.L13:
	cmpl	$0, -4(%rbp)
	jle	.L14
.L15:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	display, .-display
	.section	.rodata
.LC9:
	.string	"\n1.Push\n2.Pop\n3.Display"
.LC10:
	.string	"Enter your choice:"
.LC11:
	.string	"Invalid choice"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L22:
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-12(%rbp), %eax
	cmpl	$3, %eax
	je	.L17
	cmpl	$3, %eax
	jg	.L18
	cmpl	$1, %eax
	je	.L19
	cmpl	$2, %eax
	je	.L20
	jmp	.L18
.L19:
	movl	$0, %eax
	call	push
	jmp	.L21
.L20:
	movl	$0, %eax
	call	pop
	jmp	.L21
.L17:
	movl	$0, %eax
	call	display
	jmp	.L21
.L18:
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
.L21:
	jmp	.L22
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
