type Vals_type is array (positive range <>) of Float;

function Read_and_process (N : Integer) return Float is;
	Vals : Vals_Type (1 .. N);
begin 
	for I in 1 .. N loop
		Vals (I) := Read_Val;
	end loop;
	return Process (Vals);
end Read_and_process;
