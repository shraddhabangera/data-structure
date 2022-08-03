interface triangle
{
    float area_triangle(float x,float y);
}
interface rectangle{
    float area_rect(float x,float y);
}
class area implements triangle,rectangle{
public float area_triangle(float x,float y)
{
    return x*y/2;
}
public float area_rect(float x,float y)
{
    return x*y;
}

}

public class areaDemo {
   public static void main(String[] args) {
    area a=new area();
    System.out.println("The area of triangle="+a.area_triangle(10,10));
    System.out.println("The area of triangle="+a.area_rect(10,10));
   } 
}
