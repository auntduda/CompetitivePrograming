
    a = io.read("*number")
    b = io.read("*number")
    c = io.read("*number")
    d = io.read("*number")

    if(a*b == c*d) then
        print("0");
    elseif(a*b < c*d) then 
        print("1");
    else
        print("-1");
    end