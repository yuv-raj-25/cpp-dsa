var a = 1;

function bar(){
    let foo = () => a;
    console.log(foo());
    var a=2;
}
bar()