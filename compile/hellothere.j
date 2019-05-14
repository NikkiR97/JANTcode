.class public hellothere
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
	putstatic        hellothere/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        hellothere/_standardIn LPascalTextIn;

; i=7

		ldc	7
		putstatic	hellothere/i I

; j=1+1

		ldc	1
		ldc	1
		iadd
		putstatic	hellothere/j I

; k=7*(j+5)

		ldc	7
		getstatic	hellothere/j I
		ldc	5
		iadd
		imul
		putstatic	hellothere/k I

; WHEN(j==2){j=6;}WHENIF(j==1){j=5;}OTHERWISE{j=4;}


; WHEN(j==2){j=6;}

		getstatic	hellothere/j I
		ldc	2
		if_icmpeq	L001
		goto	L000
L001:

; WHENIF(j==1){j=5;}

		getstatic	hellothere/j I
		ldc	1
		if_icmpeq	L002

; j=5

		ldc	5
		putstatic	hellothere/j I
		goto	L000
L002:

; OTHERWISE{j=4;}


; j=4

		ldc	4
		putstatic	hellothere/j I
L000:

; LOOP(i!=1){i=i-1;}

L003:
		getstatic	hellothere/i I
		ldc	1
		if_icmpne	L004
		goto	L003
L004:

;PrintTxt("Hello World")
	getstatic	 java/lang/System/out Ljava/io/PrintStream;
	ldc	"Hello World"
	invokevirtual java/io/PrintStream.println(Ljava/lang/String;)V

;PrintStr("The value of j is %i. \n",j)
		getstatic	 java/lang/System/out Ljava/io/PrintStream;
		ldc	"The value of j is %i. \n"
		iconst_1
		anewarray 	java/lang/Object
	dup	
	iconst_0	
		getstatic	hellothere/j I
		getstatic 	 FormatTest/j I
		 ldc 6
		invokestatic	 java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore	
	invokevirtual	 java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop	

	getstatic     hellothere/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
