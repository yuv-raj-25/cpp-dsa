const promise = new Promise((res, rej) => {
    console.log(1);
    setTimeout(()=>{
        console.log('ts');
        res('success')
    }, 0)
})