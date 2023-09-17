let arrays = [NaN, 0, 15, false, -22, '', undefined, 47, null];

const output = arrays.filter(val => {
    if(typeof val === Nu)
        return val;
});

console.log(output);