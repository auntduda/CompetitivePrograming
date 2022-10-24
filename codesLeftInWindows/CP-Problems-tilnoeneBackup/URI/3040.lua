n = io.read("*number")

for i=1,n do
    a = io.read("*number")
    b = io.read("*number")
    c = io.read("*number")
    if(a>=200 and a<=300 and b>=50 and c>=150) then
        print("Sim")
    else
        print("Nao")
    end
end