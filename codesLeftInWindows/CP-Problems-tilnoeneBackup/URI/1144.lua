n = io.read("*number")

for i=1,n,1 do
    print(i.." "..(i*i).." "..(i*i*i))
    print(i.." "..(i*i+1).." "..(i*i*i+1))
end