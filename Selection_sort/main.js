function sortedArr(arr1) {
    console.log("unsorted array: ",arr1)

    for(let i = 0; i < arr1.length - 1; i++){
        let min = arr1[i]
        for(let j = i+1 ; j < arr1.length; j++){
            if (arr1[j] < min){
                min = arr1[j]
                arr1[j] = arr1[i]
                arr1[i] = min
                // console.log(arr1,"\n")
            }
        }
    }
    console.log("sorted array: ",arr1)
}


let a = [32,1,3,12,43,11]
sortedArr(a)
