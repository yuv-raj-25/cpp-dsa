const promise = new Promise((res, rej) => {
    console.log(1);
    setTimeout(()=>{
        console.log('ts');
        res('success')
        console.log('te');
    }, 0)
})