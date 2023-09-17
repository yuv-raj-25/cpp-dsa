var arr = [5,4,3,2,1];

for(let i = 0; i < arr.length; i++){
    setTimeout(() => {
        console.log(i);
    }, 1000);
}