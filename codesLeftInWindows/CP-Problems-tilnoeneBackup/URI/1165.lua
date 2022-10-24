n = io.read("*number")
for j=1,n do
    v = io.read("*number")
    div=0
    if(v==2) then
        print(v.." eh primo")
    elseif(v==1) then
        print(v.." nao eh primo")
    elseif(v%2==0) then
        print(v.." nao eh primo")
    else
        for i=3,(v-1),2 do
            if(v%i==0) then
                div=1
                break
            end
        end
        if(div==0) then
            print(v.." eh primo")
        else
            print(v.." nao eh primo")
        end
    end
end