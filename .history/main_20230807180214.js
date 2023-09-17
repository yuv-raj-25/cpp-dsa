let a = a;

function bar(){
    let foo = () => a
    console.log(foo());
    let a=2;
}
bar