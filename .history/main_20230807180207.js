let a = a;

function bar(){
    let foo = () => a
    console.log(foo());
    a=2;
}