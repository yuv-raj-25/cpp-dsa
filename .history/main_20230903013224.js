const students = [
    {
        sname:'Lokie',
        marks:200
    },
    {
        sname:'Komal',
        marks:150
    },
    {
        sname:'Yuvraj',
        marks:100
    },
    {
        sname:'Mahika',
        marks:35
    },
    {
        sname:'Ritik',
        marks:20
    }
]


const ans = students.filter(s => s.marks>100)
console.log(ans);


// const passed = [
//     {
//         sname:'Lokie',
//         marks:200
//     },
//     {
//         sname:'Komal',
//         marks:150
//     },
// ]

students.forEach((l)=> l.sname.toUpperCase());