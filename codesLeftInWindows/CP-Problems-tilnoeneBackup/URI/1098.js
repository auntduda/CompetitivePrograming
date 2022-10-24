k=0;
for(i=0;i<=2;i+=0.2){
    if(k==0 || k==5 || k==10){
		console.log("I="+i.toFixed(0)+" J="+(i+1).toFixed(0))
		console.log("I="+i.toFixed(0)+" J="+(i+2).toFixed(0))
		console.log("I="+i.toFixed(0)+" J="+(i+3).toFixed(0))
    } else{
		console.log("I="+i.toFixed(1)+" J="+(i+1).toFixed(1))
		console.log("I="+i.toFixed(1)+" J="+(i+2).toFixed(1))
		console.log("I="+i.toFixed(1)+" J="+(i+3).toFixed(1))
    }
    k++;
}