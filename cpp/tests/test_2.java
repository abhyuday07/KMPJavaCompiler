import java.io.*;
import java.util.*;

public class MyFileReader
{

 public static void main (String[] args) throws java.io.IOException
 {

  String s1;
  String s2;

  // set up the buffered reader to read from the keyboard
  BufferedReader br = new BufferedReader (new FileReader ("MyFileReader.txt"));

  s1 = br.readLine();

  System.out.println ("The line is " + s1);
  System.out.println ("The line has " + s1.length() + " characters");

  System.out.println ();
  System.out.println ("Breaking the line into tokens we get:");

  int numTokens = 0;
  StringTokenizer st = new StringTokenizer (s1);

  while (st.hasMoreTokens())
     {
      s2 = st.nextToken();
      numTokens++;
      System.out.println ("    Token " + numTokens + " is: " + s2);
     }
 }
}