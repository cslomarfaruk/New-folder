import java.io.*;
import java.util.*;

public class a{
	public static void main(String[] args) {
		try {
			System.setIn(new FileInputStream("inputf.in"));
			System.setOut(new PrintStream(new FileOutputStream("outputf.out")));
		} catch (Exception e) {
			System.err.println("Error");
		}
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s=sc.nextLine();
		System.out.println(n);
		System.out.println(s);
	}
}