v = io.read("*number")
ant = v
for i=0,9 do
    if(i~=0) then
        ant = ant*2
    end
    print("N["..i.."] = "..ant)
end