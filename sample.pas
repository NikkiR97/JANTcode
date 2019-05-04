START hello;

MAIN 
{
	Integer i;
	
	i = 0;
	
	
	
	LOOP(i == 2)
	{
		Increment(i);
	};

	WHEN(i == 2)
	{
		i = 0;
	};
}

TERMINATE