const students = [
  {
    sname: "Lokie",
    marks: 200,
    subs:{
        s
    }
  },
  {
    sname: "Komal",
    marks: 150,
  },
  {
    sname: "Yuvraj",
    marks: 100,
  },
  {
    sname: "Mahika",
    marks: 35,
  },
  {
    sname: "Ritik",
    marks: 20,
  },
];

const res = students.map((s, idx) => {
  return {
    sname: s.sname.toUpperCase(),
    marks: s.marks,
    roll: idx
  };
}).filter(s => s.marks > 40);


console.log(res);
