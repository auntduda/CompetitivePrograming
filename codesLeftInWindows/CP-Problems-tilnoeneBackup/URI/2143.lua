while true do
    t = io.read("*number")
    if(t==0) then break end
    for i=1,t do
        v = io.read("*number")
        if(v%2==0) then print((v-1)*2)
        else print((v*2-1)) end
    end
end