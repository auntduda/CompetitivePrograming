k=0
v = io.read("*number")
for i=0,999 do
    print("N["..i.."] = "..k);
    if(k==v-1) then
        k=0
    else
        k=k+1;
    end
end