.class public hello2
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static i I
.field private static j I
.field private static k I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        hello2/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        hello2/_standardIn LPascalTextIn;

; i=7

		ldc	7
		putstatic	hello2/i I

; j=1+1

		ldc	1
		ldc	1
		iadd
		putstatic	hello2/j I

; k=7*(j+5)

		ldc	7
		getstatic	hello2/j I
		ldc	5
		iadd
		imul
		putstatic	hello2/k I

; WHEN(j==2){j=6;}WHENIF(j==1){j=5;}OTHERWISE{j=4;}


; WHEN(j==2){j=6;}

		getstatic	hello2/j I
		ldc	2
		if_icmpeq	L001
		iconst_0
		goto	L002
L001:
		iconst_1
L002:
		ifeq	L003

; j=6

		ldc	6
		putstatic	hello2/j I
		goto	L000
L001:

; WHENIF(j==1){j=5;}

		getstatic	hello2/j I
		ldc	1
		if_icmpeq	L003
		iconst_0
		goto	L004
L003:
		iconst_1
L004:
		ifeq	L005

; j=5

		ldc	5
		putstatic	hello2/j I
		goto	L000
L003:

; OTHERWISE{j=4;}


; j=4

		ldc	4
		putstatic	hello2/j I
L000:

; LOOP(i!=1){i=i-1;}

		getstatic	hello2/i I
		ldc	1
		if_icmpne	L006
		iconst_0
		goto	L007
L006:
		iconst_1
L007:
		ifeq	L008
		goto	L005
L006:

;PrintTxt(`Hello World`)
	getstatic	 java/lang/System/out Ljava/io/PrintStream;
	invokevirtual java/io/PrintStream.println(lJANTl/lang/String;)V

	getstatic     hello2/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
