let arr = [5,4,3,2,1];

for(let i = 0; i < arr.length; i++){
    setInterval(() => {
        console.log(arr[i]);
    }, 1000);
}