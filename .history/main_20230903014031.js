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




const res = students.map((l)=> sname.toUpperCase());
const studentss = res.filter((lu)=> lu.marks>40);
console.log(studentss);