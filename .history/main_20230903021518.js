let arrays = [NaN, 0, 15, false, -22, '', undefined, 47, null];

const output = arrays.map(val => {
    if(typeof val === true)
        return val;
});

console.log(output);