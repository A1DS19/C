	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 4	sdk_version 14, 4
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	mov	x8, x0
	mov	w0, #0
	str	wzr, [sp, #12]
	str	w8, [sp, #8]
	str	x1, [sp]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
