async function fn(){
    let a = 1;
    console.log(a);
    await setTimeout(() => {
        a = 10
        console.log(a);
    }, 1000);
    console.log('www');
}

fn();
console.log('hii');