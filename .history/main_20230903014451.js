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

const res = students.map(s => 
    return{
        s.sname = s.sname.toUpperCase()
        s.marks = s.marks
    };
    
)

console.log(res);