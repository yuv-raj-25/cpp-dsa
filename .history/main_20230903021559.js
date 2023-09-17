let arrays = [NaN, 0, 15, false, -22, '', undefined, 47, null];

const output = arrays.filter(val => typeof val ===  "number");

console.log(output);