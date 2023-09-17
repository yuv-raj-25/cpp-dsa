const students = [
  {
    sname: "Lokie",
    marks: 200,
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

const res = students.map((s) => {
  return {
    newName: s.sname.toUpperCase(),
    newMarks: s.marks,
  };
}).filter(s => s.newMarks > 40);


console.log(res);