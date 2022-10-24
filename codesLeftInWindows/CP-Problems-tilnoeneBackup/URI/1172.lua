for i=0,9 do
    v = io.read("*number")
    if(v<=0) then
        v=1
    end
    print("X["..i.."] = "..v)
end