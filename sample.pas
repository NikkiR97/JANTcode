START hello;

MAIN 
{	
	Integer i,j;

	i = 7;
	j = 1 + 1;

	WHEN(j == 2)
	{
	    j=6;
	};

	LOOP(i != 7){
	    i=i-1;
	};
}

TERMINATE
