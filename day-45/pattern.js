const pattern1 = () => {
    let n = 4
    for (let k = 0; k < n; k++) {
        let str = ""
        for (let j = 0; j < n; j++) {
            str += "*"
        }
        console.log(str)
    }
}

const pattern2 = () => {
    let n = 5
    for (let k = 0; k < n; k++) {
        let str = ""
        for (let j = 0; j < k; j++) {
            str += "*"
        }
        console.log(str)
    }
}
const pattern3 = () => {
    let n = 6
    for (let k = 0; k < n; k++) {
        let str = ""
        for (let j = 1; j < k; j++) {
            str += j
        }
        console.log(str)
    }
}
const pattern4 = () => {
    let n = 6
    for (let k = 1; k < n; k++) {
        let str = ""
        for (let j = 0; j < k; j++) {
            str += k
        }
        console.log(str)
    }
}
const pattern5 = () => {
    let n = 6
    for (let k = 1; k < n; k++) {
        let str = ""
        for (let j = 1; j < n - k; j++) {
            str += j
        }
        console.log(str)
    }
}
const pattern6 = () => {
    let n = 100
    for (let k = 0; k < n; k++) {
        let str = ""

        for (let j = 0; j < n - k; j++) {
            str += " "
        }


        for (let j = 0; j < 2 * k + 1; j++) {
            str += "*"
        }
        for (let j = 0; j < n - k; j++) {
            str += " "
        }
        console.log(str)
    }
}
const pattern7 = () => {
    let n = 10
    for (let k = 0; k < n; k++) {
        let str = ""

        for (let j = 0; j < n - k; j++) {
            str += " "
        }


        for (let j = 0; j < 2 * k + 1; j++) {
            str += "*"
        }
        for (let j = 0; j < n - k; j++) {
            str += " "
        }
        console.log(str)
    }
    for (let k = n; k >= 0; k--) {
        let str = ""

        for (let j = 0; j < n - k; j++) {
            str += " "
        }


        for (let j = 0; j < 2 * k + 1; j++) {
            str += "*"
        }
        for (let j = 0; j < n - k; j++) {
            str += " "
        }
        console.log(str)
    }
}

const pattern8 = () => {
    let n = 10
    for (let k = 0; k <= 2 * n - 1; k++) {
        let str = ""
        let start = k;
        if (k > n) {
            start = 2 * n - k
        };
        for (let j = 1; j <= start; j++) {
            str += "*"
        }
        console.log(str)
    }

}

const pattern9 = (n) => {
    let space = n * 2 - 2
    for (let j = 1; j <= n; j++) {
        let str = "";
        for (let k = 1; k <= j; k++) {
            str += k
        }

        if (j != n) {
            for (let k = 1; k <= space; k++) {
                str += " "
            }
            space = space - 2

        }

        for (let k = j; k > 0; k--) {
            str += k
        }

        console.log(str)
    }
}


const pattern10 = (n) => {

    let index = 0
    for (let k = 0; k < n; k++) {
        let str = ""
        for (let j = 0; j <= k; j++) {
            index++
            str += index+" ";            
        };
        console.log(str)

    }
}
const pattern11=(n)=>{
    
    for(let k=0;k<n;k++){

        let str=""
        let index=65
        for(let j=0;j<k;j++){
            str+=String.fromCharCode(index)
            index++
        }
        console.log(str)

    }
}
const pattern12=(n)=>{
    
    for(let k=n;k>0;k--){

        let str=""
        let index=65
        for(let j=0;j<k;j++){
            str+=String.fromCharCode(index)
            index++
        }
        console.log(str)

    }
}
const pattern13=(n)=>{
    
    for(let k=0;k<n;k++){

        let str=""
        let index=65+k;
        for(let j=0;j<=k;j++){
            str+=String.fromCharCode(index)
            
        }
        console.log(str)

    }
}
const pattern14=(n)=>{
    
    for(let k=0;k<n;k++){
        
        let index=65+n-1;

        let str="";
        let t=0;
        for(let j=index-k;j<=index && t<=k;j++){

            str+=String.fromCharCode(j)
           
            t++;

        }
        console.log(str)

    }
}

const main = () => {
    let n = 5;
    // pattern1()
    // pattern2()
    // pattern3()
    // pattern4()
    // pattern6()
    pattern14(n)
}
main()
