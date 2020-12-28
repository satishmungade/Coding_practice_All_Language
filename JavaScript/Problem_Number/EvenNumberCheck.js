

var iNo = prompt("plese Enter Number !");
evan(iNo);

function evan(iNo) {
    if (iNo < 0) {
        iNo = -iNo;
    }
    if (iNo % 2 == 0) {
        console.log("Number is evan ");
    }
    else
        console.log("Number is odd");
}
