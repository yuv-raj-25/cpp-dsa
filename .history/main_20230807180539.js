let a = 1;

function bar(){

    let foo = () => a;
    console.log(foo());
    let a=2;

}