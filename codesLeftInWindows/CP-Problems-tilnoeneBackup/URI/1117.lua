n1=-1;
while(true) do
    nota = io.read("*number")
    if(nota>=0 and nota<=10) then
        if(n1<0) then
            n1=nota
        else
            n2=nota
            break
        end
    else
        print("nota invalida")
    end
end
print(string.format("media = %0.02f", ((n1+n2)/2))) 
