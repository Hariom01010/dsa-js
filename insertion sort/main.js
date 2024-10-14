function insertionSort(a){

    console.log('unsorted arr: ', a)

    for(let i = 0; i < a.length; i++){
        for(let j = i; j>0; j--){
            if(a[j] < a[j-1]){
                temp = a[j]
                a[j] = a[j-1]
                a[j-1] = temp
            }
        }
    }

    console.log('sorted arr: ', a)
}


const a = [32,1,11,2,23,5,16,21]
insertionSort(a)