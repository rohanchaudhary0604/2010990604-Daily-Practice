function fnpr(){
    let a = document.getElementById("a").value;
    a= Number(a);
    let flag = true;
    if(!isNaN(a)){
        for (let i=2; i<a/2; i++){
          if(a%i==0){
              flag=false;
              break;
            }
        }
    }
    if (flag){alert("Number is prime");}
    else{alert("Number is not prime");}
}