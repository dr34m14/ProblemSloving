function gradingStudents(grades) {
    // Write your code here
    let mainArr = []
    for (let i = 0; i < grades.length; i++) {
        let j = grades[i]
        if (j >= 38) {
            if (j % 5 == 3) {
                mainArr.push(j + 2)
            } else if (j % 5 == 4) {
                mainArr.push(j + 1)

            } else {
                mainArr.push(j)

            }
        } else {
            mainArr.push(j)
        }
        return mainArr

    }

}
console.log(gradingStudents([67]));
