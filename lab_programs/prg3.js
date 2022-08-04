var n=0,fib,a=0,b=1,i;

n=parseInt(prompt("Enter the numbers"));
document.write("The "+n + " Fibonacci numbers are <br> ");
document.write(+a +"  ");
document.write(+b +"  ");

for(i=0;i<n;i++)
{ 
    c=a+b;
    a=b;
    b=c;
    document.write(+c +"  ");
}

    