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




const res=students.map((l)=> l.sname = l.sname.toUpperCase());
const studentss=students.filter((lu)=> lu.marks>40);
console.log(studentss);