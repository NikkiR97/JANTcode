.class public hello
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
	putstatic        hello/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        hello/_standardIn LPascalTextIn;
		ldc	7
		putstatic	hello/i I
		ldc	1
		ldc	1
	iadd
		putstatic	hello/j I
		ldc	7
		ldc	8
	iadd
		ldc	9
	iadd
		putstatic	hello/k I

	getstatic     hello/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
