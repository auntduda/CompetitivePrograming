a = io.read()
b = io.read()
c = io.read()

if(a=="vertebrado") then
    if(b=="ave") then
        if(c=="carnivoro") then
            print("aguia");
         else
            print("pomba");
         end
     else
        if(c=="onivoro") then
            print("homem");
        else
            print("vaca");
        end
    end
 else
    if(b=="inseto") then
        if(c=="hematofago") then
            print("pulga");
        else
            print("lagarta");
        end
    else
        if(c=="hematofago") then
            print("sanguessuga");
        else
            print("minhoca");
        end
    end
end