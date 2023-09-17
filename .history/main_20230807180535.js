let a = 1;
let a=2;

function bar(){

    let foo = () => a;
    console.log(foo());
    let a=2;

}