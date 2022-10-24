n = io.read("*number")
for i=1,n do
    maria = 0;
    joao = 0;
    for j=1,3 do
        x = io.read("*number")
        d = io.read("*number")
        joao=joao+x*d
    end
    for j=4,6 do
        x = io.read("*number")
        d = io.read("*number")
        maria=maria+x*d
    end
    if(joao>maria) then
        print("JOAO")
    else
        print("MARIA")
    end
end