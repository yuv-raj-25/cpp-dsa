const promise = new Promise((res, rej) => {
    console.log(1);
    setTimeout(()=>{
        console.log('ts');
        res('success')
        console.log('te');
    }, 0)
    console.log(2);
});
promise.then((res) => {
    console.log(res);
})
log