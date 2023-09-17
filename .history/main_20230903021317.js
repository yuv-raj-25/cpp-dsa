let array = [NaN, 0, 15, false, -22, '', undefined, 47, null];

con output = array.filter(val => typeof  val === Number);

console.log(output);