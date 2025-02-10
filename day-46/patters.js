

const patters1=(n)=>{

    for(let k=0;k<n;k++){
        let str=""
        for(let j=0;j<n-k;j++)
        {
            str+="*"

        }
        for(let j=0;j<k;j++)
        {
            // console.log(j)
            str+="  "

        }
        
        for(let j=0;j<n-k;j++)
        {
            str+="*"

        }
        console.log(str)
    }

    for(let k=n;k>=0;k--){
        let str=""
        for(let j=0;j<n-k;j++)
        {
            str+="*"

        }
        for(let j=0;j<k;j++)
        {
            // console.log(j)
            str+="  "

        }
        
        for(let j=0;j<n-k;j++)
        {
            str+="*"

        }
        console.log(str)
    }
}

const patters2=(n)=>{

    for(let k=0;k<=n;k++){
        let str=""
        for(let j=0;j<=k;j++)
        {
            str+="*"

        }
       
        for(let j=n-k;j>0;j--)
        {
            // console.log(j)
               
            str+="  "

        }
        
        for(let j=0;j<=k;j++)
            {
                str+="*"
    
            }
        console.log(str)
    }

    for(let k=n-1;k>=0;k--){
        let str=""
        for(let j=0;j<=k;j++)
        {
            str+="*"

        }
       
        for(let j=n-k;j>0;j--)
        {
            // console.log(j)
               
            str+="  "

        }
        
        for(let j=0;j<=k;j++)
            {
                str+="*"
    
            }
        console.log(str)
    }
}


const patters3=(n)=>{
    for(let k=0;k<n;k++){

        let str=""
        for(let j=0;j<n;j++){
            if(k==0  || k==4){
                str+="*"
            }
            else if(j==0 || j==n-1){
                str+="*"
            }
            else{
                str+=" "
            }
        }
        console.log(str)
    }
}
const patters4=(n)=>{
    for(let k=0;k<2*n-1;k++){

        let str=""
       
        for(let j=0;j<2*n-1;j++){
            let top=k;
            let left=j;

            let right=(2*n-2)-j;
            let down=(2*n-2)-k;
            str+=(n-Math.min(Math.min(top,down),Math.min(left,right)));


        }
        console.log(str)
    }
}

const init=()=>{
    let n=5;
    // patters1(n)
    // patters2(n)
    // patters3(n)
    patters4(n)
}

init()