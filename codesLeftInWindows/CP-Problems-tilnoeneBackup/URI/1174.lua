for i=0,99 do
    v = io.read("*number")
    if(v<=10) then
        print(string.format("A[%d] = %.1f", i, v))
    end
end