.class public hello2
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static i I
.field private static j I

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
		ldc	7
		putstatic	hello2/i I
		ldc	1
		ldc	1
	iadd
		putstatic	hello2/j I

; WHEN(j==2){j=6;}WHENIF(j==1){j=5;}OTHERWISE{j=4;}


; WHEN(j==2){j=6;}

		getstatic	hello2/j I
		ldc	2
		if_icmpeq	L001
		L002
		iconst_0
		goto	L003
L002:
		iconst_1
L003:
		ifeq	L004
		ldc	6
		putstatic	hello2/j I
		goto	L0:
L1:

; WHENIF(j==1){j=5;}

		getstatic	hello2/j I
		ldc	1
		if_icmpeq	L004
		L005
		iconst_0
		goto	L006
L005:
		iconst_1
L006:
		ifeq	L007
		ldc	5
		putstatic	hello2/j I
		goto	L0:
L4:

; OTHERWISE{j=4;}

		ldc	4
		putstatic	hello2/j I
L0:

; LOOP(i!=1){i=i-1;}

		getstatic	hello2/i I
		ldc	1
		if_icmpne	L008
		L009
		iconst_0
		goto	L0010
L009:
		iconst_1
L0010:
		ifeq	L0011
		goto	L007
L8:

;PrintTxt(`Hello World`)
	getstatic	 java/lang/System/out Ljava/io/PrintStream;
	ldc	`Hello World`
	invokevirtual java/io/PrintStream.println(lJANTl/lang/String;)V

	getstatic     hello2/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
