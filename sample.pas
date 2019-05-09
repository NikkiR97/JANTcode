START hello;

MAIN 
{	
	Integer i,j;

	i = 7;
	j = 1 + 1;

	WHEN(j == 2)
	{
	    j = 6;
	}
	WHENIF(j == 1)
	{
	    j = 5;
	}
	OTHERWISE
	{
	    j = 4;
	};

	LOOP(i != 7){
	    i=i-1;
	};

	PrintTxt(`Hello World, This is the JANT programming language`);
}

TERMINATE
