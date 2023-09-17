var arr = [5,4,3,2,1];

for(var i = 0; i < arr.length; i++){
    setTimeout(() => {
        console.log(arr[i]);
    }, 1000);
}