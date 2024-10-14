function bubbleSort(a){
    for(let i = 0; i < a.length-1; i++){
        for(let j = 0; j < a.length-1; j++){
            if(a[j]>a[j+1]){
                let lowerNum = a[j+1]
                a[j+1] = a[j]
                a[j] = lowerNum
            }
        }
    }
    console.log(a)
}




const a = [32,11,10,2,5,1,12]
bubbleSort(a)