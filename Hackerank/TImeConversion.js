/*
Given a time in 24-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
*/


function timeConversion(s) {
    // Write your code here
    let reg = /(PM)/g

    //PM
    if (reg.test(s)) {
        let array = s.match(/\d+/g)



        let hournum = parseInt(array[0]);
        console.log(hournum)
        if (hournum < 12) {
            array[0] = ("0" + (hournum + 12)).slice(-2);

            return array.join(":")
        }
        else {
            return array.join(":")
        }

        // console.log('yes',array)
    }
    //AM
    else {
        let array = s.match(/\d+/g)

        let hournumam = parseInt(array[0]);
        if (hournumam == 12) {
            array[0] = ("0" + (hournumam - 12)).slice(-2);
            return array.join(":")
        }
        else {
            return array.join(":")
        }
    }


}