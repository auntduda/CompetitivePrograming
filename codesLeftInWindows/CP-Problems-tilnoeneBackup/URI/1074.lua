n = io.read("*number")
    
for i=1,n,1 do
    x = io.read("*number")
    res = ""
    if(x==0) then
        print("NULL")
    else
        if(x%2==0) then
            res=res.."EVEN "
        else
            res=res.."ODD "
        end
        if(x>0) then
            res=res.."POSITIVE"
        else
            res=res.."NEGATIVE"
        end
        print(res)
    end
end