var n;
n=parseInt(prompt("Enter the numbers"));
document.write("The "+n + "Square numbers are ");
m="Number | Square\n";
for(i=0;i<=n;i++)
{
    m+="      " + i + "       |      " + i**2 + "\n";
    document.write("<tr><td>" + i + "</td><td>" + i**2 + "</td></tr>");
}
alert(m);


