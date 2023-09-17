async function fn(){
    let a = 1;
    console.log(a);
    await setTimeout(() => {
        a = 10
        console.log(a);
    }, 0);
    console.log('www');
}

fn();
console.log('hii');