.class public hello
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private statici I
.field private staticj I

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
	putstatic        /_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        /_standardIn LPascalTextIn;
	putstatic	/i ?
	????
	putstatic	/j ?

; WHEN(j==2){j=6;}WHENIF(j==1){j=5;}OTHERWISE{j=4;}


; WHEN(j==2){j=6;}

	if_icmpeq	L1
	putstatic	/j ?
	goto	L0:
	L1:

; WHENIF(j==1){j=5;}

	if_icmpeq	L3
	putstatic	/j ?
	goto	L0:
	L3:

; OTHERWISE{j=4;}

	putstatic	/j ?
	L0:

; LOOP(i!=7){i=i-1;}

	Loop5:
	if_icmpne	L6
	goto	Loop5
	L6:

	getstatic     /_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
