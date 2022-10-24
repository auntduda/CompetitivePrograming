n1=-1;
while(true) do
    nota = gets.to_f
    if(nota>=0 && nota<=10) then
        if(n1<0) then
            n1=nota
        else
            n2=nota
            break
        end
    else
        puts("nota invalida")
    end
end
puts("media = %0.02f" % ((n1+n2)/2).round(2))